/****************************************************************************
** Meta object code from reading C++ file 'qtyarpscope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../robotology/YARP/src/yarpscope/plugin/qtyarpscope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtyarpscope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtYARPScope_t {
    QByteArrayData data[24];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtYARPScope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtYARPScope_t qt_meta_stringdata_QtYARPScope = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QtYARPScope"
QT_MOC_LITERAL(1, 12, 14), // "setWindowTitle"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "title"
QT_MOC_LITERAL(4, 34, 17), // "setWindowPosition"
QT_MOC_LITERAL(5, 52, 1), // "x"
QT_MOC_LITERAL(6, 54, 1), // "y"
QT_MOC_LITERAL(7, 56, 13), // "setWindowSize"
QT_MOC_LITERAL(8, 70, 1), // "w"
QT_MOC_LITERAL(9, 72, 1), // "h"
QT_MOC_LITERAL(10, 74, 14), // "intervalLoaded"
QT_MOC_LITERAL(11, 89, 8), // "interval"
QT_MOC_LITERAL(12, 98, 12), // "graphClicked"
QT_MOC_LITERAL(13, 111, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(14, 133, 9), // "plottable"
QT_MOC_LITERAL(15, 143, 20), // "updateCustomPlotSize"
QT_MOC_LITERAL(16, 164, 9), // "onRepaint"
QT_MOC_LITERAL(17, 174, 15), // "parseParameters"
QT_MOC_LITERAL(18, 190, 6), // "params"
QT_MOC_LITERAL(19, 197, 5), // "clear"
QT_MOC_LITERAL(20, 203, 7), // "rescale"
QT_MOC_LITERAL(21, 211, 14), // "changeInterval"
QT_MOC_LITERAL(22, 226, 11), // "playPressed"
QT_MOC_LITERAL(23, 238, 5) // "check"

    },
    "QtYARPScope\0setWindowTitle\0\0title\0"
    "setWindowPosition\0x\0y\0setWindowSize\0"
    "w\0h\0intervalLoaded\0interval\0graphClicked\0"
    "QCPAbstractPlottable*\0plottable\0"
    "updateCustomPlotSize\0onRepaint\0"
    "parseParameters\0params\0clear\0rescale\0"
    "changeInterval\0playPressed\0check"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtYARPScope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,
      10,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    1,   95,    2, 0x02 /* Public */,
      19,    0,   98,    2, 0x02 /* Public */,
      20,    0,   99,    2, 0x02 /* Public */,
      21,    1,  100,    2, 0x02 /* Public */,
      22,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QStringList,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void QtYARPScope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtYARPScope *_t = static_cast<QtYARPScope *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setWindowPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setWindowSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->intervalLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1]))); break;
        case 5: _t->updateCustomPlotSize(); break;
        case 6: _t->onRepaint(); break;
        case 7: { bool _r = _t->parseParameters((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->clear(); break;
        case 9: _t->rescale(); break;
        case 10: _t->changeInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->playPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtYARPScope::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtYARPScope::setWindowTitle)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtYARPScope::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtYARPScope::setWindowPosition)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtYARPScope::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtYARPScope::setWindowSize)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QtYARPScope::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtYARPScope::intervalLoaded)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QtYARPScope::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_QtYARPScope.data,
      qt_meta_data_QtYARPScope,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtYARPScope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtYARPScope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtYARPScope.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QtYARPScope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QtYARPScope::setWindowTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtYARPScope::setWindowPosition(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtYARPScope::setWindowSize(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtYARPScope::intervalLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
