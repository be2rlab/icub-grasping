/****************************************************************************
** Meta object code from reading C++ file 'plotter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../robotology/YARP/src/yarpscope/plugin/plotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Graph_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graph_t qt_meta_stringdata_Graph = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Graph"
QT_MOC_LITERAL(1, 6, 13), // "valuesChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 19) // "acquiredDataChanged"

    },
    "Graph\0valuesChanged\0\0acquiredDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Graph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Graph *_t = static_cast<Graph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->acquiredDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Graph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Graph::valuesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Graph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Graph::acquiredDataChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Graph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Graph.data,
      qt_meta_data_Graph,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Graph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Graph.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Graph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Graph::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Graph::acquiredDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Connection_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connection_t qt_meta_stringdata_Connection = {
    {
QT_MOC_LITERAL(0, 0, 10) // "Connection"

    },
    "Connection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Connection.data,
      qt_meta_data_Connection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Plotter_t {
    QByteArrayData data[16];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plotter_t qt_meta_stringdata_Plotter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Plotter"
QT_MOC_LITERAL(1, 8, 15), // "maxValueChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "minValueChanged"
QT_MOC_LITERAL(4, 41, 19), // "internalAppendGraph"
QT_MOC_LITERAL(5, 61, 5), // "index"
QT_MOC_LITERAL(6, 67, 5), // "title"
QT_MOC_LITERAL(7, 73, 5), // "color"
QT_MOC_LITERAL(8, 79, 4), // "type"
QT_MOC_LITERAL(9, 84, 4), // "size"
QT_MOC_LITERAL(10, 89, 11), // "buffer_size"
QT_MOC_LITERAL(11, 101, 21), // "plotSampleSizeChanged"
QT_MOC_LITERAL(12, 123, 23), // "duplicateLastGraphValue"
QT_MOC_LITERAL(13, 147, 10), // "graphIndex"
QT_MOC_LITERAL(14, 158, 10), // "onInteract"
QT_MOC_LITERAL(15, 169, 9) // "onTimeout"

    },
    "Plotter\0maxValueChanged\0\0minValueChanged\0"
    "internalAppendGraph\0index\0title\0color\0"
    "type\0size\0buffer_size\0plotSampleSizeChanged\0"
    "duplicateLastGraphValue\0graphIndex\0"
    "onInteract\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plotter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    6,   51,    2, 0x06 /* Public */,
      11,    0,   64,    2, 0x06 /* Public */,
      12,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   68,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plotter *_t = static_cast<Plotter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxValueChanged(); break;
        case 1: _t->minValueChanged(); break;
        case 2: _t->internalAppendGraph((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->plotSampleSizeChanged(); break;
        case 4: _t->duplicateLastGraphValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onInteract(); break;
        case 6: _t->onTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Plotter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::maxValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Plotter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::minValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Plotter::*_t)(int , QString , QString , QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::internalAppendGraph)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Plotter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::plotSampleSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Plotter::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::duplicateLastGraphValue)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Plotter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Plotter.data,
      qt_meta_data_Plotter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plotter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Plotter::maxValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Plotter::minValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Plotter::internalAppendGraph(int _t1, QString _t2, QString _t3, QString _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Plotter::plotSampleSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Plotter::duplicateLastGraphValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
