/****************************************************************************
** Meta object code from reading C++ file 'serial_setup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BalancingRobotGui/Serial/serial_setup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial_setup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_serial_setup_t {
    QByteArrayData data[6];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serial_setup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serial_setup_t qt_meta_stringdata_serial_setup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "serial_setup"
QT_MOC_LITERAL(1, 13, 13), // "connectToPort"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "ValidateCustomBaud"
QT_MOC_LITERAL(4, 47, 23), // "on_pushButtonOK_clicked"
QT_MOC_LITERAL(5, 71, 27) // "on_pushButtonCancel_clicked"

    },
    "serial_setup\0connectToPort\0\0"
    "ValidateCustomBaud\0on_pushButtonOK_clicked\0"
    "on_pushButtonCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serial_setup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serial_setup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        serial_setup *_t = static_cast<serial_setup *>(_o);
        switch (_id) {
        case 0: _t->connectToPort(); break;
        case 1: _t->ValidateCustomBaud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonOK_clicked(); break;
        case 3: _t->on_pushButtonCancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (serial_setup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&serial_setup::connectToPort)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject serial_setup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_serial_setup.data,
      qt_meta_data_serial_setup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *serial_setup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serial_setup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_serial_setup.stringdata))
        return static_cast<void*>(const_cast< serial_setup*>(this));
    return QDialog::qt_metacast(_clname);
}

int serial_setup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void serial_setup::connectToPort()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
