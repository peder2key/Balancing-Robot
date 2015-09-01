#ifndef PROTOCOLL_H
#define PROTOCOLL_H

#include <QObject>
#include <QDebug>

#include "crccnode.h"

class protocoll : public QObject
{
    Q_OBJECT
public:
    explicit protocoll(QObject *parent = 0);

signals:

public slots:

signals:
    void writeBytesToSocket(QByteArray Array);

public slots:
    void wdProtocolWriteData(QByteArray Array);
    void wdProtocolReadData(QByteArray Array);

};

#endif // PROTOCOLL_H
