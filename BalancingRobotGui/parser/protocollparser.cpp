#include "protocollparser.h"

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

}

