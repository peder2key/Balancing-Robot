#include "serial_setup.h"
#include "ui_serial_setup.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QIntValidator>
#include <QLineEdit>
#include <QDebug>



serial_setup::serial_setup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serial_setup)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/pictures/transducers/pictures/settings.png"));


    ui->baudBox->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->baudBox->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->baudBox->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->baudBox->addItem(QStringLiteral("57600"), QSerialPort::Baud57600);
    ui->baudBox->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
    ui->baudBox->addItem(QStringLiteral("Custom"));

    GetPortInfo();

}

serial_setup::~serial_setup()
{
    delete ui;
}

QString serial_setup::getPort()
{
    return myPort;
}

qint32 serial_setup::getBaud()
{
    return myBaud;
}

void serial_setup::setPort(QString savedPort)
{
    int search = ui->portBox->findText(savedPort);
    if(search != -1)
    {
        ui->portBox->setCurrentIndex(search);
        myPort = ui->portBox->currentText();
    }
}

void serial_setup::setBaud(qint32 savedBaud)
{
    QString temp = QString::number(savedBaud);
    int search = ui->baudBox->findText(temp);
    if(search != -1)
    {
        ui->baudBox->setCurrentIndex(search);
        myBaud = ui->baudBox->currentText().toInt();

    }
    else
    {
        myBaud = savedBaud;
    }

}

void serial_setup::ValidateCustomBaud(int id)
{
    bool customBaud = !ui->baudBox->itemData(id).isValid(); // Check if the selected id has a valid type, only "Custom" does not
    ui->baudBox->setEditable(customBaud);
    if(customBaud) // "Custom" selected, and we clear text and make user input enabled
    {
        ui->baudBox->clearEditText();
        QLineEdit *edit = ui->baudBox->lineEdit();
        edit->setValidator(intValidator); // Check if user input is a number within the valid range
    }

}



void serial_setup::GetPortInfo()
{
    ui->portBox->clear();
    static const QString blankString = QObject::tr("N/A");
    QString description;
    QString manufacturer;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        QStringList list;
        description = info.description();
        manufacturer = info.manufacturer();
        list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << info.systemLocation()
             << (info.vendorIdentifier() ? QString::number(info.vendorIdentifier(), 16) : blankString)
             << (info.productIdentifier() ? QString::number(info.productIdentifier(), 16) : blankString);

        ui->portBox->addItem(list.first(), list);
    }
}

void serial_setup::UpdateList()
{
    myPort = ui->portBox->currentText();
    myBaud = ui->baudBox->currentText().toInt();
}




void serial_setup::on_pushButtonOK_clicked()
{

    UpdateList();
    emit connectToPort();
    this->hide();
}

void serial_setup::on_pushButtonCancel_clicked()
{
    this->hide();
}
