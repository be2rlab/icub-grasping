/****************************************************************************
** Meta object code from reading C++ file 'qticubskinguiplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qticubskinguiplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qticubskinguiplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtICubSkinGuiPlugin_t {
    QByteArrayData data[26];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtICubSkinGuiPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtICubSkinGuiPlugin_t qt_meta_stringdata_QtICubSkinGuiPlugin = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QtICubSkinGuiPlugin"
QT_MOC_LITERAL(1, 20, 4), // "init"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "sendWindowTitle"
QT_MOC_LITERAL(4, 42, 5), // "title"
QT_MOC_LITERAL(5, 48, 14), // "sendWindowSize"
QT_MOC_LITERAL(6, 63, 5), // "width"
QT_MOC_LITERAL(7, 69, 6), // "height"
QT_MOC_LITERAL(8, 76, 13), // "sendWindowPos"
QT_MOC_LITERAL(9, 90, 4), // "xPos"
QT_MOC_LITERAL(10, 95, 4), // "yPos"
QT_MOC_LITERAL(11, 100, 4), // "done"
QT_MOC_LITERAL(12, 105, 11), // "posXChanged"
QT_MOC_LITERAL(13, 117, 11), // "posYChanged"
QT_MOC_LITERAL(14, 129, 12), // "widthChanged"
QT_MOC_LITERAL(15, 142, 13), // "heightChanged"
QT_MOC_LITERAL(16, 156, 18), // "windowTitleChanged"
QT_MOC_LITERAL(17, 175, 9), // "onTimeout"
QT_MOC_LITERAL(18, 185, 6), // "onInit"
QT_MOC_LITERAL(19, 192, 15), // "parseParameters"
QT_MOC_LITERAL(20, 208, 6), // "params"
QT_MOC_LITERAL(21, 215, 11), // "windowTitle"
QT_MOC_LITERAL(22, 227, 4), // "posX"
QT_MOC_LITERAL(23, 232, 4), // "posY"
QT_MOC_LITERAL(24, 237, 11), // "windowWidth"
QT_MOC_LITERAL(25, 249, 12) // "windowHeight"

    },
    "QtICubSkinGuiPlugin\0init\0\0sendWindowTitle\0"
    "title\0sendWindowSize\0width\0height\0"
    "sendWindowPos\0xPos\0yPos\0done\0posXChanged\0"
    "posYChanged\0widthChanged\0heightChanged\0"
    "windowTitleChanged\0onTimeout\0onInit\0"
    "parseParameters\0params\0windowTitle\0"
    "posX\0posY\0windowWidth\0windowHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtICubSkinGuiPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    2,   83,    2, 0x06 /* Public */,
       8,    2,   88,    2, 0x06 /* Public */,
      11,    0,   93,    2, 0x06 /* Public */,
      12,    0,   94,    2, 0x06 /* Public */,
      13,    0,   95,    2, 0x06 /* Public */,
      14,    0,   96,    2, 0x06 /* Public */,
      15,    0,   97,    2, 0x06 /* Public */,
      16,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      19,    1,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QStringList,   20,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      23, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495001,
      25, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       9,
       5,
       6,
       7,
       8,

       0        // eod
};

void QtICubSkinGuiPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtICubSkinGuiPlugin *_t = static_cast<QtICubSkinGuiPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->sendWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendWindowSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sendWindowPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->done(); break;
        case 5: _t->posXChanged(); break;
        case 6: _t->posYChanged(); break;
        case 7: _t->widthChanged(); break;
        case 8: _t->heightChanged(); break;
        case 9: _t->windowTitleChanged(); break;
        case 10: _t->onTimeout(); break;
        case 11: _t->onInit(); break;
        case 12: { bool _r = _t->parseParameters((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::init)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::sendWindowTitle)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::sendWindowSize)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::sendWindowPos)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::done)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::posXChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::posYChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::widthChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::heightChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QtICubSkinGuiPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtICubSkinGuiPlugin::windowTitleChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtICubSkinGuiPlugin *_t = static_cast<QtICubSkinGuiPlugin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->posX(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->posY(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->windowWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->windowHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtICubSkinGuiPlugin::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_QtICubSkinGuiPlugin.data,
      qt_meta_data_QtICubSkinGuiPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtICubSkinGuiPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtICubSkinGuiPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtICubSkinGuiPlugin.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QtICubSkinGuiPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtICubSkinGuiPlugin::init()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtICubSkinGuiPlugin::sendWindowTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtICubSkinGuiPlugin::sendWindowSize(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtICubSkinGuiPlugin::sendWindowPos(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtICubSkinGuiPlugin::done()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtICubSkinGuiPlugin::posXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QtICubSkinGuiPlugin::posYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QtICubSkinGuiPlugin::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtICubSkinGuiPlugin::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtICubSkinGuiPlugin::windowTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
