#ifndef BLUETOOTHTHREAD_H
#define BLUETOOTHTHREAD_H

#include <QThread>
#include <qbluetoothaddress.h>
#include <qbluetoothdevicediscoveryagent.h>
#include <qbluetoothlocaldevice.h>
#include <QMenu>
#include <QDebug>
#include <qbluetoothserviceinfo.h>
#include <qbluetoothaddress.h>
#include <QBluetoothSocket>
#include <QMessageBox>




QT_FORWARD_DECLARE_CLASS(QBluetoothDeviceDiscoveryAgent)
QT_FORWARD_DECLARE_CLASS(QBluetoothDeviceInfo)
QT_FORWARD_DECLARE_CLASS(QBluetoothServer)
QT_FORWARD_DECLARE_CLASS(QBluetoothSocket)


#include "Bluetooth/bluetooth_setup.h"

class bluetooththread : public QThread
{
    Q_OBJECT
public:
    explicit bluetooththread(QObject *parent = 0);
    bluetooth_setup *mBluetooth_setup;
    void showSetupWindow();
    QBluetoothSocket *serial;
    void connectDevice();
    void disconnectDevice();

signals:
    void readyRead(QByteArray Array);
    void startConnecting();
    void Doneconnecting();
    void DoneDisconnecting();
    void failedToConnect();

public slots:
    void pairDeviceNow(void);
    void writeBytes(QByteArray array);

private slots:
    void readyRead();
    void error(QBluetoothSocket::SocketError error);
    void connected();
    void disconnected();

private:
    QString BluetoothPairAddress;
     void pairDevice();
     void unpairDevice();
};

#endif // BLUETOOTHTHREAD_H
