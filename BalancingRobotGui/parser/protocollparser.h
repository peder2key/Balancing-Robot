#ifndef PROTOCOLLPARSER_H
#define PROTOCOLLPARSER_H

#include <QObject>
#include <QDebug>

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
};

#endif // PROTOCOLLPARSER_H
