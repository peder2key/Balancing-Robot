#include "bluetooththread.h"

bluetooththread::bluetooththread(QObject *parent) :
    QThread(parent)
{
    mBluetooth_setup = new bluetooth_setup();
    serial = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol, this);
    connect(serial, SIGNAL(readyRead()),this, SLOT(readyRead()));
    connect(serial, SIGNAL(error(QBluetoothSocket::SocketError)), this, SLOT(error(QBluetoothSocket::SocketError)));
    connect(serial, SIGNAL(connected()),this, SLOT(connected()));
    connect(serial, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(mBluetooth_setup, SIGNAL(PairDevicesNow()),this,SLOT(pairDeviceNow()));

}

void bluetooththread::showSetupWindow()
{
    mBluetooth_setup->show();
}

void bluetooththread::connectDevice()
{
    pairDevice();
}

void bluetooththread::pairDevice()
{
    BluetoothPairAddress = mBluetooth_setup->getAddress();
    BluetoothPairAddress.remove(":", Qt::CaseInsensitive);

    if(serial->UnconnectedState)
    {
        QMessageBox::critical(qobject_cast<QWidget *>(parent()), "Error", "The Bluetooth is not responding!\nTry again");
    }
    else
    {
        try
        {
            emit startConnecting();
            serial->connectToService(QBluetoothAddress(BluetoothPairAddress),QBluetoothUuid(QBluetoothUuid::SerialPort));

        }
        catch(...)
        {
             QMessageBox::critical(qobject_cast<QWidget *>(parent()), "Error", "The Bluetooth are not responding!\nTry again");
             return;
        }


    }

}

void bluetooththread::unpairDevice()
{
    if(serial->UnconnectedState)
    {
        QMessageBox::critical(qobject_cast<QWidget *>(parent()), "Bluetooth", "The Bluetooth is allready disconnected");
    }
    else
    {
      serial->disconnectFromService();

    }

}

void bluetooththread::disconnectDevice()
{
   unpairDevice();
}


void bluetooththread::readyRead()
{
    QByteArray RxByteData;

    RxByteData = serial->readAll();

    emit readyRead(RxByteData);

}

void bluetooththread::error(QBluetoothSocket::SocketError error)
{

    switch (error) {
        case QBluetoothSocket::UnknownSocketError:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"), tr("Could not connect to the bluetooth\nCheck the bluetooth device"));
            emit failedToConnect();

            break;
    case QBluetoothSocket::NoSocketError:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"), tr("The host was not found. Please check that you are paired under setup"));
            emit failedToConnect();


            break;
        case QBluetoothSocket::HostNotFoundError:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"), tr("The Bluetooth device was not found. "
                                        "Make sure you have choosen correct device, "
                                        "by checking that setup "
                                        "settings are correct."));
            emit failedToConnect();

            break;
         case QBluetoothSocket::ServiceNotFoundError:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"), tr("The Bluetooth is not in range or turned off\nCheck the status on the unit"));
            emit failedToConnect();

            break;
    case QBluetoothSocket::OperationError:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"), tr("Lost the Bluetooth communication"));
            emit failedToConnect();

            break;

        default:
            QMessageBox::information(qobject_cast<QWidget *>(parent()), tr("Bluetooth Error"),
                                     tr("The following error occurred: %1.")
                                     .arg(serial->errorString()));
            emit failedToConnect();

    }

}

void bluetooththread::connected()
{
    emit Doneconnecting();
}

void bluetooththread::disconnected()
{
    emit DoneDisconnecting();
}

void bluetooththread::pairDeviceNow()
{
    pairDevice();
}

void bluetooththread::writeBytes(QByteArray array)
{
    serial->write(array, array.length());
}



