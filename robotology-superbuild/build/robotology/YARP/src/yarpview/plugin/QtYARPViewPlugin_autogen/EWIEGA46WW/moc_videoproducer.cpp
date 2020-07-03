/****************************************************************************
** Meta object code from reading C++ file 'videoproducer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../robotology/YARP/src/yarpview/plugin/videoproducer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoproducer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoProducer_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoProducer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoProducer_t qt_meta_stringdata_VideoProducer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoProducer"
QT_MOC_LITERAL(1, 14, 19), // "resizeWindowRequest"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "onNewVideoContentReceived"
QT_MOC_LITERAL(4, 61, 12), // "QVideoFrame*"
QT_MOC_LITERAL(5, 74, 5), // "frame"
QT_MOC_LITERAL(6, 80, 12), // "videoSurface"
QT_MOC_LITERAL(7, 93, 22), // "QAbstractVideoSurface*"
QT_MOC_LITERAL(8, 116, 10), // "frameWidth"
QT_MOC_LITERAL(9, 127, 11) // "frameHeight"

    },
    "VideoProducer\0resizeWindowRequest\0\0"
    "onNewVideoContentReceived\0QVideoFrame*\0"
    "frame\0videoSurface\0QAbstractVideoSurface*\0"
    "frameWidth\0frameHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoProducer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::Int, 0x00095001,
       9, QMetaType::Int, 0x00095001,

       0        // eod
};

void VideoProducer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoProducer *_t = static_cast<VideoProducer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeWindowRequest(); break;
        case 1: _t->onNewVideoContentReceived((*reinterpret_cast< QVideoFrame*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VideoProducer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProducer::resizeWindowRequest)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoSurface* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VideoProducer *_t = static_cast<VideoProducer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractVideoSurface**>(_v) = _t->videoSurface(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VideoProducer *_t = static_cast<VideoProducer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVideoSurface(*reinterpret_cast< QAbstractVideoSurface**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VideoProducer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VideoProducer.data,
      qt_meta_data_VideoProducer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoProducer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoProducer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoProducer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoProducer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoProducer::resizeWindowRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
