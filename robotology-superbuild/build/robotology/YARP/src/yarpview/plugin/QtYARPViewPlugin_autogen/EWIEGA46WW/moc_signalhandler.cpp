/****************************************************************************
** Meta object code from reading C++ file 'signalhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../robotology/YARP/src/yarpview/plugin/signalhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SignalHandler_t {
    QByteArrayData data[19];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignalHandler_t qt_meta_stringdata_SignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SignalHandler"
QT_MOC_LITERAL(1, 14, 17), // "internalSendFrame"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QVideoFrame"
QT_MOC_LITERAL(4, 45, 9), // "sendFrame"
QT_MOC_LITERAL(5, 55, 12), // "QVideoFrame*"
QT_MOC_LITERAL(6, 68, 7), // "sendFps"
QT_MOC_LITERAL(7, 76, 7), // "portAvg"
QT_MOC_LITERAL(8, 84, 7), // "portMin"
QT_MOC_LITERAL(9, 92, 7), // "portMax"
QT_MOC_LITERAL(10, 100, 7), // "dispAvg"
QT_MOC_LITERAL(11, 108, 7), // "dispMin"
QT_MOC_LITERAL(12, 116, 7), // "dispMax"
QT_MOC_LITERAL(13, 124, 14), // "selfStartTimer"
QT_MOC_LITERAL(14, 139, 10), // "testSignal"
QT_MOC_LITERAL(15, 150, 20), // "internalReceiveFrame"
QT_MOC_LITERAL(16, 171, 14), // "onTimerElapsed"
QT_MOC_LITERAL(17, 186, 16), // "onSelfStartTimer"
QT_MOC_LITERAL(18, 203, 10) // "onFpsTimer"

    },
    "SignalHandler\0internalSendFrame\0\0"
    "QVideoFrame\0sendFrame\0QVideoFrame*\0"
    "sendFps\0portAvg\0portMin\0portMax\0dispAvg\0"
    "dispMin\0dispMax\0selfStartTimer\0"
    "testSignal\0internalReceiveFrame\0"
    "onTimerElapsed\0onSelfStartTimer\0"
    "onFpsTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    6,   65,    2, 0x06 /* Public */,
      13,    0,   78,    2, 0x06 /* Public */,
      14,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   80,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,
      17,    0,   84,    2, 0x08 /* Private */,
      18,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalHandler *_t = static_cast<SignalHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->internalSendFrame((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 1: _t->sendFrame((*reinterpret_cast< QVideoFrame*(*)>(_a[1]))); break;
        case 2: _t->sendFps((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 3: _t->selfStartTimer(); break;
        case 4: _t->testSignal(); break;
        case 5: _t->internalReceiveFrame((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 6: _t->onTimerElapsed(); break;
        case 7: _t->onSelfStartTimer(); break;
        case 8: _t->onFpsTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignalHandler::*_t)(QVideoFrame );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::internalSendFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)(QVideoFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::sendFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::sendFps)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::selfStartTimer)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::testSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SignalHandler.data,
      qt_meta_data_SignalHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignalHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SignalHandler::internalSendFrame(QVideoFrame _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SignalHandler::sendFrame(QVideoFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SignalHandler::sendFps(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SignalHandler::selfStartTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SignalHandler::testSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
