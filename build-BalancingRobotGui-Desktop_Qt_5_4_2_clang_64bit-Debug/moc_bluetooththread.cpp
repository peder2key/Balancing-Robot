/****************************************************************************
** Meta object code from reading C++ file 'bluetooththread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BalancingRobotGui/Bluetooth/bluetooththread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetooththread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bluetooththread_t {
    QByteArrayData data[15];
    char stringdata[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bluetooththread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bluetooththread_t qt_meta_stringdata_bluetooththread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "bluetooththread"
QT_MOC_LITERAL(1, 16, 9), // "readyRead"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "Array"
QT_MOC_LITERAL(4, 33, 15), // "startConnecting"
QT_MOC_LITERAL(5, 49, 14), // "Doneconnecting"
QT_MOC_LITERAL(6, 64, 17), // "DoneDisconnecting"
QT_MOC_LITERAL(7, 82, 15), // "failedToConnect"
QT_MOC_LITERAL(8, 98, 13), // "pairDeviceNow"
QT_MOC_LITERAL(9, 112, 10), // "writeBytes"
QT_MOC_LITERAL(10, 123, 5), // "array"
QT_MOC_LITERAL(11, 129, 5), // "error"
QT_MOC_LITERAL(12, 135, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(13, 165, 9), // "connected"
QT_MOC_LITERAL(14, 175, 12) // "disconnected"

    },
    "bluetooththread\0readyRead\0\0Array\0"
    "startConnecting\0Doneconnecting\0"
    "DoneDisconnecting\0failedToConnect\0"
    "pairDeviceNow\0writeBytes\0array\0error\0"
    "QBluetoothSocket::SocketError\0connected\0"
    "disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bluetooththread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   76,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
       1,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bluetooththread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bluetooththread *_t = static_cast<bluetooththread *>(_o);
        switch (_id) {
        case 0: _t->readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->startConnecting(); break;
        case 2: _t->Doneconnecting(); break;
        case 3: _t->DoneDisconnecting(); break;
        case 4: _t->failedToConnect(); break;
        case 5: _t->pairDeviceNow(); break;
        case 6: _t->writeBytes((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->readyRead(); break;
        case 8: _t->error((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->connected(); break;
        case 10: _t->disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (bluetooththread::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooththread::readyRead)) {
                *result = 0;
            }
        }
        {
            typedef void (bluetooththread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooththread::startConnecting)) {
                *result = 1;
            }
        }
        {
            typedef void (bluetooththread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooththread::Doneconnecting)) {
                *result = 2;
            }
        }
        {
            typedef void (bluetooththread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooththread::DoneDisconnecting)) {
                *result = 3;
            }
        }
        {
            typedef void (bluetooththread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooththread::failedToConnect)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject bluetooththread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_bluetooththread.data,
      qt_meta_data_bluetooththread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bluetooththread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bluetooththread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bluetooththread.stringdata))
        return static_cast<void*>(const_cast< bluetooththread*>(this));
    return QThread::qt_metacast(_clname);
}

int bluetooththread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void bluetooththread::readyRead(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bluetooththread::startConnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void bluetooththread::Doneconnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void bluetooththread::DoneDisconnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void bluetooththread::failedToConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
