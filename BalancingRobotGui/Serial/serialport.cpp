#include "serialport.h"

serialPort::serialPort(QObject *parent) : QObject(parent)
{
    serial = new QSerialPort(this);
    QSerialPort::connect(serial, SIGNAL(readyRead()), this, SLOT(readyRead()));

    mSerialSetup = new serial_setup();
    connect(mSerialSetup, SIGNAL(connectToPort()),this, SLOT(connectToSocket()));

}

serialPort::~serialPort()
{

}

void serialPort::showSetupWindow()
{
    mSerialSetup->setModal(true);
    mSerialSetup->GetPortInfo();
    mSerialSetup->show();
}

void serialPort::writeBytes(QByteArray array)
{
    serial->write(array, array.length());
}

void serialPort::connectToSocket()
{
    connectToPort();
}

void serialPort::readyRead()
{
    QByteArray socketData;
    socketData = serial->readAll();

    emit readyRead(socketData);

}

void serialPort::connectToPort()
{

    QString portName = mSerialSetup->getPort();
    qint32 baudRate = mSerialSetup->getBaud();
    serial->setPortName(portName);
    serial->setBaudRate(baudRate);

    if(serial->isOpen())
    {
        QMessageBox::critical(qobject_cast<QWidget *>(parent()), "Serial Port Error", "The Port Is Allready Open!");
    }
    else
    {
        serial->open(QIODevice::ReadWrite);
    }


}

void serialPort::disconnect()
{
    if(serial->isOpen())
    {
        serial->close();
    }
    else
    {
        QMessageBox::critical(qobject_cast<QWidget *>(parent()), "Serial Port Error", "The Port Is Allready Closed!");
    }

}

