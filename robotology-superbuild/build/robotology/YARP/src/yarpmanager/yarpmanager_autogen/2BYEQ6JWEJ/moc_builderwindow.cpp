/****************************************************************************
** Meta object code from reading C++ file 'builderwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src-builder/builderwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'builderwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BuilderWindow_t {
    QByteArrayData data[29];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BuilderWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BuilderWindow_t qt_meta_stringdata_BuilderWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BuilderWindow"
QT_MOC_LITERAL(1, 14, 18), // "refreshApplication"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "setModuleSelected"
QT_MOC_LITERAL(4, 52, 10), // "QList<int>"
QT_MOC_LITERAL(5, 63, 21), // "setConnectionSelected"
QT_MOC_LITERAL(6, 85, 8), // "modified"
QT_MOC_LITERAL(7, 94, 7), // "onMoved"
QT_MOC_LITERAL(8, 102, 10), // "onModified"
QT_MOC_LITERAL(9, 113, 8), // "onZoomIn"
QT_MOC_LITERAL(10, 122, 9), // "onZoomOut"
QT_MOC_LITERAL(11, 132, 13), // "onRestoreZoom"
QT_MOC_LITERAL(12, 146, 6), // "onSnap"
QT_MOC_LITERAL(13, 153, 10), // "onShowGrid"
QT_MOC_LITERAL(14, 164, 16), // "onModuleSelected"
QT_MOC_LITERAL(15, 181, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(16, 196, 2), // "it"
QT_MOC_LITERAL(17, 199, 20), // "onConnectionSelected"
QT_MOC_LITERAL(18, 220, 21), // "onApplicationSelected"
QT_MOC_LITERAL(19, 242, 18), // "initApplicationTab"
QT_MOC_LITERAL(20, 261, 11), // "onAddModule"
QT_MOC_LITERAL(21, 273, 12), // "BuilderItem*"
QT_MOC_LITERAL(22, 286, 3), // "pos"
QT_MOC_LITERAL(23, 290, 18), // "onAddedApplication"
QT_MOC_LITERAL(24, 309, 3), // "app"
QT_MOC_LITERAL(25, 313, 18), // "onAddNewConnection"
QT_MOC_LITERAL(26, 332, 12), // "connectionId"
QT_MOC_LITERAL(27, 345, 15), // "onAddSourcePort"
QT_MOC_LITERAL(28, 361, 20) // "onAddDestinationPort"

    },
    "BuilderWindow\0refreshApplication\0\0"
    "setModuleSelected\0QList<int>\0"
    "setConnectionSelected\0modified\0onMoved\0"
    "onModified\0onZoomIn\0onZoomOut\0"
    "onRestoreZoom\0onSnap\0onShowGrid\0"
    "onModuleSelected\0QGraphicsItem*\0it\0"
    "onConnectionSelected\0onApplicationSelected\0"
    "initApplicationTab\0onAddModule\0"
    "BuilderItem*\0pos\0onAddedApplication\0"
    "app\0onAddNewConnection\0connectionId\0"
    "onAddSourcePort\0onAddDestinationPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BuilderWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    1,  120,    2, 0x06 /* Public */,
       5,    1,  123,    2, 0x06 /* Public */,
       6,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  129,    2, 0x08 /* Private */,
       8,    0,  130,    2, 0x08 /* Private */,
       9,    0,  131,    2, 0x08 /* Private */,
      10,    0,  132,    2, 0x08 /* Private */,
      11,    0,  133,    2, 0x08 /* Private */,
      12,    1,  134,    2, 0x08 /* Private */,
      13,    1,  137,    2, 0x08 /* Private */,
      14,    1,  140,    2, 0x08 /* Private */,
      17,    1,  143,    2, 0x08 /* Private */,
      18,    1,  146,    2, 0x08 /* Private */,
      19,    0,  149,    2, 0x08 /* Private */,
      20,    2,  150,    2, 0x08 /* Private */,
      23,    2,  155,    2, 0x08 /* Private */,
      25,    3,  160,    2, 0x08 /* Private */,
      25,    2,  167,    2, 0x28 /* Private | MethodCloned */,
      27,    2,  172,    2, 0x08 /* Private */,
      28,    2,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    0x80000000 | 21, QMetaType::VoidStar, QMetaType::QPointF,    2,   22,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QPointF,   24,   22,
    0x80000000 | 21, QMetaType::VoidStar, QMetaType::VoidStar, QMetaType::Int,    2,    2,   26,
    0x80000000 | 21, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,
    0x80000000 | 21, QMetaType::QString, QMetaType::QPointF,    2,   22,
    0x80000000 | 21, QMetaType::QString, QMetaType::QPointF,    2,   22,

       0        // eod
};

void BuilderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuilderWindow *_t = static_cast<BuilderWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshApplication(); break;
        case 1: _t->setModuleSelected((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->setConnectionSelected((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 3: _t->modified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onMoved(); break;
        case 5: _t->onModified(); break;
        case 6: _t->onZoomIn(); break;
        case 7: _t->onZoomOut(); break;
        case 8: _t->onRestoreZoom(); break;
        case 9: _t->onSnap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onModuleSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 12: _t->onConnectionSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 13: _t->onApplicationSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 14: _t->initApplicationTab(); break;
        case 15: { BuilderItem* _r = _t->onAddModule((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< BuilderItem**>(_a[0]) = std::move(_r); }  break;
        case 16: _t->onAddedApplication((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 17: { BuilderItem* _r = _t->onAddNewConnection((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< BuilderItem**>(_a[0]) = std::move(_r); }  break;
        case 18: { BuilderItem* _r = _t->onAddNewConnection((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< BuilderItem**>(_a[0]) = std::move(_r); }  break;
        case 19: { BuilderItem* _r = _t->onAddSourcePort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< BuilderItem**>(_a[0]) = std::move(_r); }  break;
        case 20: { BuilderItem* _r = _t->onAddDestinationPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< BuilderItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 13:
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
            typedef void (BuilderWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderWindow::refreshApplication)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BuilderWindow::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderWindow::setModuleSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BuilderWindow::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderWindow::setConnectionSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BuilderWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BuilderWindow::modified)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BuilderWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BuilderWindow.data,
      qt_meta_data_BuilderWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BuilderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuilderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuilderWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BuilderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void BuilderWindow::refreshApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BuilderWindow::setModuleSelected(QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BuilderWindow::setConnectionSelected(QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BuilderWindow::modified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_CustomView_t {
    QByteArrayData data[12];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomView_t qt_meta_stringdata_CustomView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CustomView"
QT_MOC_LITERAL(1, 11, 15), // "pressedNullItem"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "addSourcePort"
QT_MOC_LITERAL(4, 42, 3), // "pos"
QT_MOC_LITERAL(5, 46, 18), // "addDestinationPort"
QT_MOC_LITERAL(6, 65, 8), // "modified"
QT_MOC_LITERAL(7, 74, 9), // "addModule"
QT_MOC_LITERAL(8, 84, 3), // "mod"
QT_MOC_LITERAL(9, 88, 16), // "addNewConnection"
QT_MOC_LITERAL(10, 105, 5), // "start"
QT_MOC_LITERAL(11, 111, 3) // "end"

    },
    "CustomView\0pressedNullItem\0\0addSourcePort\0"
    "pos\0addDestinationPort\0modified\0"
    "addModule\0mod\0addNewConnection\0start\0"
    "end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       5,    2,   50,    2, 0x06 /* Public */,
       6,    0,   55,    2, 0x06 /* Public */,
       7,    2,   56,    2, 0x06 /* Public */,
       9,    2,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    2,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    2,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QPointF,    8,    2,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,   10,   11,

       0        // eod
};

void CustomView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomView *_t = static_cast<CustomView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressedNullItem(); break;
        case 1: _t->addSourcePort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 2: _t->addDestinationPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 3: _t->modified(); break;
        case 4: _t->addModule((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 5: _t->addNewConnection((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CustomView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::pressedNullItem)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CustomView::*_t)(QString , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::addSourcePort)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CustomView::*_t)(QString , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::addDestinationPort)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CustomView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::modified)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CustomView::*_t)(void * , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::addModule)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CustomView::*_t)(void * , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomView::addNewConnection)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject CustomView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_CustomView.data,
      qt_meta_data_CustomView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int CustomView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CustomView::pressedNullItem()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CustomView::addSourcePort(QString _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CustomView::addDestinationPort(QString _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CustomView::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CustomView::addModule(void * _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CustomView::addNewConnection(void * _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
