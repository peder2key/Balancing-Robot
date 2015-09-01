#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>

#include "Bluetooth/bluetooththread.h"
#include "Serial/serialport.h"
#include "protocol/protocoll.h"
#include "parser/protocollparser.h"
#include "plotter/plotter.h"
#include "MainWindowClasses/pidconfigform.h"
#include "screendata.h"

#include "Toolbar/bottomtoolbar.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionCommunication_triggered();

private:
    Ui::MainWindow *ui;

    //Class pointers
    serialPort *mSerialSocket;
    plotter *mplotter;
    PidConfigForm *mPidConfiUi;
    protocoll *mProtocol;
    ScreenData *mScreenData;

    bottomToolBar *mToolBar;

    void setupObjects();
    void setupApperance();

    QFont mFont;

};

#endif // MAINWINDOW_H
