/****************************************************************************
** Meta object code from reading C++ file 'bluetooth_setup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BalancingRobotGui/Bluetooth/bluetooth_setup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetooth_setup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bluetooth_setup_t {
    QByteArrayData data[10];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bluetooth_setup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bluetooth_setup_t qt_meta_stringdata_bluetooth_setup = {
    {
QT_MOC_LITERAL(0, 0, 15), // "bluetooth_setup"
QT_MOC_LITERAL(1, 16, 14), // "PairDevicesNow"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "on_pushButtonScan_clicked"
QT_MOC_LITERAL(4, 58, 27), // "on_pushButtonCancel_clicked"
QT_MOC_LITERAL(5, 86, 9), // "addDevice"
QT_MOC_LITERAL(6, 96, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(7, 117, 12), // "scanFinished"
QT_MOC_LITERAL(8, 130, 12), // "stopScanning"
QT_MOC_LITERAL(9, 143, 23) // "on_pushButtonOk_clicked"

    },
    "bluetooth_setup\0PairDevicesNow\0\0"
    "on_pushButtonScan_clicked\0"
    "on_pushButtonCancel_clicked\0addDevice\0"
    "QBluetoothDeviceInfo\0scanFinished\0"
    "stopScanning\0on_pushButtonOk_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bluetooth_setup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bluetooth_setup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bluetooth_setup *_t = static_cast<bluetooth_setup *>(_o);
        switch (_id) {
        case 0: _t->PairDevicesNow(); break;
        case 1: _t->on_pushButtonScan_clicked(); break;
        case 2: _t->on_pushButtonCancel_clicked(); break;
        case 3: _t->addDevice((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 4: _t->scanFinished(); break;
        case 5: _t->stopScanning(); break;
        case 6: _t->on_pushButtonOk_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (bluetooth_setup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetooth_setup::PairDevicesNow)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject bluetooth_setup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_bluetooth_setup.data,
      qt_meta_data_bluetooth_setup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bluetooth_setup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bluetooth_setup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bluetooth_setup.stringdata))
        return static_cast<void*>(const_cast< bluetooth_setup*>(this));
    return QDialog::qt_metacast(_clname);
}

int bluetooth_setup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void bluetooth_setup::PairDevicesNow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
