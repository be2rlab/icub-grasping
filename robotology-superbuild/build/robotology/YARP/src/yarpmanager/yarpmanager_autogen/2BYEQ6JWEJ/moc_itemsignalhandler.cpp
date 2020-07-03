/****************************************************************************
** Meta object code from reading C++ file 'itemsignalhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src-builder/itemsignalhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemsignalhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemSignalHandler_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemSignalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemSignalHandler_t qt_meta_stringdata_ItemSignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ItemSignalHandler"
QT_MOC_LITERAL(1, 18, 16), // "addNewConnection"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(4, 51, 2), // "it"
QT_MOC_LITERAL(5, 54, 20), // "requestNewConnection"
QT_MOC_LITERAL(6, 75, 14), // "moduleSelected"
QT_MOC_LITERAL(7, 90, 20), // "connectctionSelected"
QT_MOC_LITERAL(8, 111, 19), // "applicationSelected"
QT_MOC_LITERAL(9, 131, 8), // "modified"
QT_MOC_LITERAL(10, 140, 5), // "moved"
QT_MOC_LITERAL(11, 146, 20), // "onConnectionSelected"
QT_MOC_LITERAL(12, 167, 16), // "onModuleSelected"
QT_MOC_LITERAL(13, 184, 21), // "onApplicationSelected"
QT_MOC_LITERAL(14, 206, 24), // "onConnectionComboChanged"
QT_MOC_LITERAL(15, 231, 17) // "onEditingFinished"

    },
    "ItemSignalHandler\0addNewConnection\0\0"
    "QGraphicsItem*\0it\0requestNewConnection\0"
    "moduleSelected\0connectctionSelected\0"
    "applicationSelected\0modified\0moved\0"
    "onConnectionSelected\0onModuleSelected\0"
    "onApplicationSelected\0onConnectionComboChanged\0"
    "onEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemSignalHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    2,   79,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,
       7,    1,   87,    2, 0x06 /* Public */,
       8,    1,   90,    2, 0x06 /* Public */,
       9,    0,   93,    2, 0x06 /* Public */,
      10,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   95,    2, 0x0a /* Public */,
      12,    1,   98,    2, 0x0a /* Public */,
      13,    1,  101,    2, 0x0a /* Public */,
      14,    1,  104,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 3,    2,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ItemSignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemSignalHandler *_t = static_cast<ItemSignalHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNewConnection((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 1: _t->requestNewConnection((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 2: _t->moduleSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->connectctionSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 4: _t->applicationSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 5: _t->modified(); break;
        case 6: _t->moved(); break;
        case 7: _t->onConnectionSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 8: _t->onModuleSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 9: _t->onApplicationSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 10: _t->onConnectionComboChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ItemSignalHandler::*_t)(QPointF , QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::addNewConnection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)(QPointF , QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::requestNewConnection)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::moduleSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::connectctionSelected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::applicationSelected)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::modified)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ItemSignalHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemSignalHandler::moved)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ItemSignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ItemSignalHandler.data,
      qt_meta_data_ItemSignalHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ItemSignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemSignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemSignalHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ItemSignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ItemSignalHandler::addNewConnection(QPointF _t1, QGraphicsItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ItemSignalHandler::requestNewConnection(QPointF _t1, QGraphicsItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemSignalHandler::moduleSelected(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemSignalHandler::connectctionSelected(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemSignalHandler::applicationSelected(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ItemSignalHandler::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ItemSignalHandler::moved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
