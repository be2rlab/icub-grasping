/****************************************************************************
** Meta object code from reading C++ file 'logtab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "logtab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogTab_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogTab_t qt_meta_stringdata_LogTab = {
    {
QT_MOC_LITERAL(0, 0, 6), // "LogTab"
QT_MOC_LITERAL(1, 7, 9), // "updateLog"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "from_beginning"
QT_MOC_LITERAL(4, 33, 7), // "ctxMenu"
QT_MOC_LITERAL(5, 41, 3), // "pos"
QT_MOC_LITERAL(6, 45, 11), // "expandLines"
QT_MOC_LITERAL(7, 57, 27) // "on_copy_to_clipboard_action"

    },
    "LogTab\0updateLog\0\0from_beginning\0"
    "ctxMenu\0pos\0expandLines\0"
    "on_copy_to_clipboard_action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       1,    0,   42,    2, 0x28 /* Private | MethodCloned */,
       4,    1,   43,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogTab *_t = static_cast<LogTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateLog(); break;
        case 2: _t->ctxMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->expandLines(); break;
        case 4: _t->on_copy_to_clipboard_action(); break;
        default: ;
        }
    }
}

const QMetaObject LogTab::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_LogTab.data,
      qt_meta_data_LogTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogTab.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int LogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
