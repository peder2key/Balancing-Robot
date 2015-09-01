#include "protocoll.h"

protocoll::protocoll(QObject *parent) : QObject(parent)
{

}

void protocoll::wdProtocolWriteData(QByteArray Array)
{

    QByteArray socketData;

    socketData.append("WD");
    socketData.append("W");
    socketData.append(Array.length());
    socketData.append(Array);
    quint16 crc = CalculateCrc(socketData.constData() + 2 , socketData.length() - 2);
    socketData.append(crc);
    socketData.append(crc >> 8);

    emit writeBytesToSocket(socketData);

}

void protocoll::wdProtocolReadData(QByteArray Array)
{
    QByteArray socketData;

    socketData.append("WD");
    socketData.append("R");
    socketData.append(Array.length()-1);
    socketData.append(Array);
    quint16 crc = CalculateCrc(socketData.constData() + 2 , socketData.length() - 2);
    socketData.append(crc);
    socketData.append(crc >> 8);

    QString str(socketData);

    qDebug() << str << socketData;

    emit writeBytesToSocket(socketData);

}

