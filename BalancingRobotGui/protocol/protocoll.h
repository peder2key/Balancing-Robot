#ifndef PROTOCOLL_H
#define PROTOCOLL_H

#include <QObject>

class protocoll : public QObject
{
    Q_OBJECT
public:
    explicit protocoll(QObject *parent = 0);

signals:

public slots:

signals:
    void writeBytes(QByteArray Array);

public slots:

};

#endif // PROTOCOLL_H
