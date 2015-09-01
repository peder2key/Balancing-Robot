#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>

#include "Serial/serial_setup.h"


class serialPort : public QObject
{
    Q_OBJECT
public:
    explicit serialPort(QObject *parent = 0);
    ~serialPort();
     void showSetupWindow();


signals:
     void readyRead(QByteArray Array);

public slots:
     void writeBytes(QByteArray array);
     void connectToSocket(void);

private slots:
    void readyRead(void);

private:
    QSerialPort *serial;
    serial_setup *mSerialSetup;
    void connectToPort(void);
    void disconnect(void);

};

#endif // SERIALPORT_H
