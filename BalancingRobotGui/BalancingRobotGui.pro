#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T20:55:40
#
#-------------------------------------------------
cache()

QT       += core gui
QT       += bluetooth
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BalancingRobotGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Bluetooth/bluetooth_setup.cpp \
    Bluetooth/bluetooththread.cpp \
    protocol/protocoll.cpp \
    parser/protocollparser.cpp

HEADERS  += mainwindow.h \
    Bluetooth/bluetooth_setup.h \
    Bluetooth/bluetooththread.h \
    protocol/protocoll.h \
    parser/protocollparser.h

FORMS    += mainwindow.ui \
    Bluetooth/bluetooth_setup.ui

CONFIG += mobility
MOBILITY = 

