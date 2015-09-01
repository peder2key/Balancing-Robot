#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T20:55:40
#
#-------------------------------------------------
cache()

QT       += core gui
QT       += bluetooth
QT       += network
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = BalancingRobotGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Bluetooth/bluetooth_setup.cpp \
    Bluetooth/bluetooththread.cpp \
    protocol/protocoll.cpp \
    parser/protocollparser.cpp \
    crccnode.cpp \
    plotter/qcustomplot.cpp \
    plotter/plotter.cpp \
    Toolbar/bottomtoolbar.cpp \
    Toolbar/toolbar.cpp \
    MainWindowClasses/pidconfigform.cpp \
    Serial/serial_setup.cpp \
    Serial/serialport.cpp \
    screendata.cpp

HEADERS  += mainwindow.h \
    Bluetooth/bluetooth_setup.h \
    Bluetooth/bluetooththread.h \
    protocol/protocoll.h \
    parser/protocollparser.h \
    crccnode.h \
    plotter/qcustomplot.h \
    plotter/plotter.h \
    Toolbar/bottomtoolbar.h \
    Toolbar/toolbar.h \
    MainWindowClasses/pidconfigform.h \
    Serial/serial_setup.h \
    Serial/serialport.h \
    screendata.h

FORMS    += mainwindow.ui \
    Bluetooth/bluetooth_setup.ui \
    plotter/plotter.ui \
    MainWindowClasses/pidconfigform.ui \
    Serial/serial_setup.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resources.qrc

