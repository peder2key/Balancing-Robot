#ifndef PROTOCOLLPARSER_H
#define PROTOCOLLPARSER_H

#include <QObject>
#include <QDebug>

#include "crccnode.h"

typedef enum RX_STATE_TYPE
{
    RX_STATE_IDLE,
    RX_STATE_PREAMBLE,
    RX_STATE_COMMAND,
    RX_STATE_LENGTH_LSB,
    RX_STATE_LENGTH_MSB,
    RX_STATE_DATA,
    RX_STATE_CRC_MSB,
    RX_STATE_CRC_LSB,
    RX_STATE_CRC_OK,
    RX_STATE_CRC_NOT_OK

}RX_STATE_TYPES;

typedef struct ST_MSG_TYPE
{
    unsigned short Length;
    unsigned char  byCommand;
    unsigned char  Data[500];
    unsigned short Crc;
    unsigned char  byCrcLSB;
    unsigned char  byCrcMSB;
} ST_MSG;

class ProtocollParser : public QObject
{
    Q_OBJECT
public:
    explicit ProtocollParser(QObject *parent = 0);

signals:

public slots:
    void inncommingData(QByteArray Array);

private:
    void processRX(unsigned char RxByte);
    void processDataPayload(ST_MSG DataPayload);
};

#endif // PROTOCOLLPARSER_H
