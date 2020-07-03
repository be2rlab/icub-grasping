/****************************************************************************
** Meta object code from reading C++ file 'piddlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "piddlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piddlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PidDlg_t {
    QByteArrayData data[29];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PidDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PidDlg_t qt_meta_stringdata_PidDlg = {
    {
QT_MOC_LITERAL(0, 0, 6), // "PidDlg"
QT_MOC_LITERAL(1, 7, 13), // "sendStiffness"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "sendPositionPid"
QT_MOC_LITERAL(4, 38, 10), // "jointIndex"
QT_MOC_LITERAL(5, 49, 3), // "Pid"
QT_MOC_LITERAL(6, 53, 3), // "pid"
QT_MOC_LITERAL(7, 57, 15), // "sendVelocityPid"
QT_MOC_LITERAL(8, 73, 13), // "sendTorquePid"
QT_MOC_LITERAL(9, 87, 21), // "MotorTorqueParameters"
QT_MOC_LITERAL(10, 109, 14), // "newTorqueParam"
QT_MOC_LITERAL(11, 124, 7), // "sendPWM"
QT_MOC_LITERAL(12, 132, 7), // "dutyVal"
QT_MOC_LITERAL(13, 140, 11), // "sendCurrent"
QT_MOC_LITERAL(14, 152, 10), // "currentVal"
QT_MOC_LITERAL(15, 163, 14), // "sendCurrentPid"
QT_MOC_LITERAL(16, 178, 24), // "sendSingleRemoteVariable"
QT_MOC_LITERAL(17, 203, 11), // "std::string"
QT_MOC_LITERAL(18, 215, 3), // "key"
QT_MOC_LITERAL(19, 219, 16), // "yarp::os::Bottle"
QT_MOC_LITERAL(20, 236, 3), // "val"
QT_MOC_LITERAL(21, 240, 11), // "refreshPids"
QT_MOC_LITERAL(22, 252, 24), // "updateAllRemoteVariables"
QT_MOC_LITERAL(23, 277, 19), // "dumpRemoteVariables"
QT_MOC_LITERAL(24, 297, 9), // "onRefresh"
QT_MOC_LITERAL(25, 307, 6), // "onSend"
QT_MOC_LITERAL(26, 314, 8), // "onCancel"
QT_MOC_LITERAL(27, 323, 20), // "onSendRemoteVariable"
QT_MOC_LITERAL(28, 344, 21) // "onDumpRemoteVariables"

    },
    "PidDlg\0sendStiffness\0\0sendPositionPid\0"
    "jointIndex\0Pid\0pid\0sendVelocityPid\0"
    "sendTorquePid\0MotorTorqueParameters\0"
    "newTorqueParam\0sendPWM\0dutyVal\0"
    "sendCurrent\0currentVal\0sendCurrentPid\0"
    "sendSingleRemoteVariable\0std::string\0"
    "key\0yarp::os::Bottle\0val\0refreshPids\0"
    "updateAllRemoteVariables\0dumpRemoteVariables\0"
    "onRefresh\0onSend\0onCancel\0"
    "onSendRemoteVariable\0onDumpRemoteVariables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PidDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   94,    2, 0x06 /* Public */,
       3,    2,  103,    2, 0x06 /* Public */,
       7,    2,  108,    2, 0x06 /* Public */,
       8,    3,  113,    2, 0x06 /* Public */,
      11,    2,  120,    2, 0x06 /* Public */,
      13,    2,  125,    2, 0x06 /* Public */,
      15,    2,  130,    2, 0x06 /* Public */,
      16,    2,  135,    2, 0x06 /* Public */,
      21,    1,  140,    2, 0x06 /* Public */,
      22,    0,  143,    2, 0x06 /* Public */,
      23,    0,  144,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  145,    2, 0x08 /* Private */,
      25,    0,  146,    2, 0x08 /* Private */,
      26,    0,  147,    2, 0x08 /* Private */,
      27,    0,  148,    2, 0x08 /* Private */,
      28,    0,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 9,    4,    2,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    4,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PidDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PidDlg *_t = static_cast<PidDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendStiffness((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->sendPositionPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 2: _t->sendVelocityPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 3: _t->sendTorquePid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2])),(*reinterpret_cast< MotorTorqueParameters(*)>(_a[3]))); break;
        case 4: _t->sendPWM((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->sendCurrent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->sendCurrentPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 7: _t->sendSingleRemoteVariable((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< yarp::os::Bottle(*)>(_a[2]))); break;
        case 8: _t->refreshPids((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateAllRemoteVariables(); break;
        case 10: _t->dumpRemoteVariables(); break;
        case 11: _t->onRefresh(); break;
        case 12: _t->onSend(); break;
        case 13: _t->onCancel(); break;
        case 14: _t->onSendRemoteVariable(); break;
        case 15: _t->onDumpRemoteVariables(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PidDlg::*_t)(int , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendStiffness)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , Pid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendPositionPid)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , Pid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendVelocityPid)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , Pid , MotorTorqueParameters );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendTorquePid)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendPWM)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendCurrent)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int , Pid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendCurrentPid)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(std::string , yarp::os::Bottle );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::sendSingleRemoteVariable)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::refreshPids)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::updateAllRemoteVariables)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PidDlg::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PidDlg::dumpRemoteVariables)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject PidDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PidDlg.data,
      qt_meta_data_PidDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PidDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PidDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PidDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PidDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PidDlg::sendStiffness(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PidDlg::sendPositionPid(int _t1, Pid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PidDlg::sendVelocityPid(int _t1, Pid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PidDlg::sendTorquePid(int _t1, Pid _t2, MotorTorqueParameters _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PidDlg::sendPWM(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PidDlg::sendCurrent(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PidDlg::sendCurrentPid(int _t1, Pid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PidDlg::sendSingleRemoteVariable(std::string _t1, yarp::os::Bottle _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PidDlg::refreshPids(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PidDlg::updateAllRemoteVariables()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PidDlg::dumpRemoteVariables()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
