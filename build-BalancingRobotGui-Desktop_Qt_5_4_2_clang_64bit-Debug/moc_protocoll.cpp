/****************************************************************************
** Meta object code from reading C++ file 'protocoll.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BalancingRobotGui/protocol/protocoll.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocoll.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_protocoll_t {
    QByteArrayData data[6];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_protocoll_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_protocoll_t qt_meta_stringdata_protocoll = {
    {
QT_MOC_LITERAL(0, 0, 9), // "protocoll"
QT_MOC_LITERAL(1, 10, 18), // "writeBytesToSocket"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "Array"
QT_MOC_LITERAL(4, 36, 19), // "wdProtocolWriteData"
QT_MOC_LITERAL(5, 56, 18) // "wdProtocolReadData"

    },
    "protocoll\0writeBytesToSocket\0\0Array\0"
    "wdProtocolWriteData\0wdProtocolReadData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_protocoll[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void protocoll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        protocoll *_t = static_cast<protocoll *>(_o);
        switch (_id) {
        case 0: _t->writeBytesToSocket((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->wdProtocolWriteData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->wdProtocolReadData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (protocoll::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&protocoll::writeBytesToSocket)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject protocoll::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_protocoll.data,
      qt_meta_data_protocoll,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *protocoll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *protocoll::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_protocoll.stringdata))
        return static_cast<void*>(const_cast< protocoll*>(this));
    return QObject::qt_metacast(_clname);
}

int protocoll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void protocoll::writeBytesToSocket(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
