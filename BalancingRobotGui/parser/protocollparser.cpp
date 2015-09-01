#include "protocollparser.h"

static ST_MSG Msg;

const unsigned char Preamble[] = {"#WD"};

ProtocollParser::ProtocollParser(QObject *parent) : QObject(parent)
{

}

void ProtocollParser::inncommingData(QByteArray Array)
{
    for(int i = 0; i < Array.length(); i++)
    {
        processRX(Array.at(i));
    }
}

void ProtocollParser::processRX(unsigned char RxByte)
{
    static RX_STATE_TYPES rx_state = RX_STATE_IDLE;
    static unsigned short tempCalculatetedCRC = 0;
    static unsigned short counter = 0;

    switch (rx_state) {
    case RX_STATE_IDLE:
        if(RxByte == Preamble[0])
            {
                counter = 1;
                rx_state =  RX_STATE_PREAMBLE;

            }
        break;
    case RX_STATE_PREAMBLE:
        if(RxByte == Preamble[counter++]){
            if(counter == (sizeof(Preamble) -1))
                rx_state = RX_STATE_COMMAND;
        }
        else{
            rx_state = RX_STATE_IDLE;
        }
        break;
    case RX_STATE_COMMAND:
        Msg.byCommand = RxByte;
        nCalculateCrc(&RxByte, 1, 1);
        rx_state = RX_STATE_LENGTH_LSB;
        break;
    case RX_STATE_LENGTH_LSB:
        Msg.Length = 0x00FF & RxByte;
        nCalculateCrc(&RxByte, 1, 0);
        rx_state = RX_STATE_LENGTH_MSB;
        break;
    case RX_STATE_LENGTH_MSB:
        Msg.Length |= 0xFF00 & ((unsigned short)RxByte)<<8;
        Msg.Length -= 1;
        nCalculateCrc(&RxByte, 1, 0);
        counter = 0;
        rx_state = RX_STATE_DATA;
        break;
    case RX_STATE_DATA:
        Msg.Data[counter++] = RxByte;
        tempCalculatetedCRC =  nCalculateCrc(&RxByte, 1, 0);
        rx_state = RX_STATE_DATA;
        if(counter >= Msg.Length)
            rx_state = RX_STATE_CRC_LSB;
        break;
    case RX_STATE_CRC_LSB:
        Msg.Crc = 0x00FF & (((unsigned short)RxByte)<<0);
        rx_state = RX_STATE_CRC_MSB;
        break;
    case RX_STATE_CRC_MSB:
        Msg.Crc |= 0xFF00 & (((unsigned short)RxByte)<<8);
        if(tempCalculatetedCRC == Msg.Crc){
            rx_state = RX_STATE_IDLE;
            processDataPayload(Msg);
            memset(Msg.Data,0,sizeof(Msg.Data));
            //counter implement for success
        }else
            rx_state = RX_STATE_IDLE;
        break;
    case RX_STATE_CRC_OK:
       rx_state = RX_STATE_IDLE;
       break;
    case RX_STATE_CRC_NOT_OK:
        rx_state = RX_STATE_IDLE;
       break;
     default:
       rx_state = RX_STATE_IDLE;
       break;
    }

}

void ProtocollParser::processDataPayload(ST_MSG DataPayload)
{

}

