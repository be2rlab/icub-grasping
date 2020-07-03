/****************************************************************************
** Meta object code from reading C++ file 'builderscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src-builder/builderscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'builderscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuilderScene_t {
    QByteArrayData data[18];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuilderScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuilderScene_t qt_meta_stringdata_BuilderScene = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BuilderScene"
QT_MOC_LITERAL(1, 13, 16), // "addedApplication"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "app"
QT_MOC_LITERAL(4, 35, 11), // "addedModule"
QT_MOC_LITERAL(5, 47, 3), // "mod"
QT_MOC_LITERAL(6, 51, 16), // "addNewConnection"
QT_MOC_LITERAL(7, 68, 5), // "start"
QT_MOC_LITERAL(8, 74, 3), // "end"
QT_MOC_LITERAL(9, 78, 10), // "snapToGrid"
QT_MOC_LITERAL(10, 89, 4), // "snap"
QT_MOC_LITERAL(11, 94, 24), // "onNewConnectionRequested"
QT_MOC_LITERAL(12, 119, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(13, 134, 4), // "item"
QT_MOC_LITERAL(14, 139, 20), // "onNewConnectionAdded"
QT_MOC_LITERAL(15, 160, 14), // "onSceneChanged"
QT_MOC_LITERAL(16, 175, 13), // "QList<QRectF>"
QT_MOC_LITERAL(17, 189, 5) // "rects"

    },
    "BuilderScene\0addedApplication\0\0app\0"
    "addedModule\0mod\0addNewConnection\0start\0"
    "end\0snapToGrid\0snap\0onNewConnectionRequested\0"
    "QGraphicsItem*\0item\0onNewConnectionAdded\0"
    "onSceneChanged\0QList<QRectF>\0rects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuilderScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       4,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x0a /* Public */,
      11,    2,   67,    2, 0x0a /* Public */,
      14,    2,   72,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QPointF,    3,    2,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QPointF,    5,    2,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 12,    2,   13,
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 12,    2,   13,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void BuilderScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuilderScene *_t = static_cast<BuilderScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addedApplication((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 1: _t->addedModule((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 2: _t->addNewConnection((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 3: _t->snapToGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onNewConnectionRequested((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 5: _t->onNewConnectionAdded((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 6: _t->onSceneChanged((*reinterpret_cast< QList<QRectF>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BuilderScene::*_t)(void * , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderScene::addedApplication)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BuilderScene::*_t)(void * , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderScene::addedModule)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BuilderScene::*_t)(void * , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderScene::addNewConnection)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BuilderScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_BuilderScene.data,
      qt_meta_data_BuilderScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BuilderScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuilderScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuilderScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int BuilderScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BuilderScene::addedApplication(void * _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BuilderScene::addedModule(void * _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BuilderScene::addNewConnection(void * _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
