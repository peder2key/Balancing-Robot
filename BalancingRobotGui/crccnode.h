#ifndef CRCCNODE_H
#define CRCCNODE_H

#include <QByteArray>

unsigned short CalculateCrc(const char *, unsigned int);
unsigned short nCalculateCrc(const unsigned char* pMessage, unsigned long dwLength, unsigned char byReset);

unsigned short nCalculateCrcChar(const char* pMessage, unsigned long dwLength, unsigned char byReset);

unsigned short DCalculateCrc(unsigned char *msg, unsigned int length_in_bytes);


#endif // CRCCNODE_H
