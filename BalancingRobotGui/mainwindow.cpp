#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupObjects();

    setupApperance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupObjects()
{
    mProtocolParser = new ProtocollParser(this);

    mProtocol = new protocoll(this);

    mSerialSocket = new serialPort(this);
    connect(mProtocol, SIGNAL(writeBytesToSocket(QByteArray)), mSerialSocket, SLOT(writeBytes(QByteArray)));
    connect(mSerialSocket, SIGNAL(readyRead(QByteArray)), mProtocolParser, SLOT(inncommingData(QByteArray)));

    mToolBar = new bottomToolBar(this);
    this->addToolBar(Qt::BottomToolBarArea, mToolBar->getBottomToolBar());


    mPidConfiUi = new PidConfigForm(this);
    ui->scrollAreaPIDConf->setWidget(mPidConfiUi);
    connect(mPidConfiUi, SIGNAL(writePid(QByteArray)), mProtocol, SLOT(wdProtocolWriteData(QByteArray)));
    connect(mPidConfiUi, SIGNAL(readPid(QByteArray)), mProtocol, SLOT(wdProtocolReadData(QByteArray)));

    //mplotter = new plotter(this);
}

void MainWindow::setupApperance()
{
    mScreenData = new ScreenData(this);

    //Setting up font
    mFont.setFamily(mFont.defaultFamily());
    mFont.setBold(true);
    mFont.setPointSize(16);
    QApplication::setFont(mFont);
}

void MainWindow::on_actionCommunication_triggered()
{
    mSerialSocket->showSetupWindow();
}
