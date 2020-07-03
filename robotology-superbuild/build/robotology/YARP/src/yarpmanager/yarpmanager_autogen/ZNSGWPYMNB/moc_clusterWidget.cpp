/****************************************************************************
** Meta object code from reading C++ file 'clusterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src-manager/clusterWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clusterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClusterWidget_t {
    QByteArrayData data[15];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClusterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClusterWidget_t qt_meta_stringdata_ClusterWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClusterWidget"
QT_MOC_LITERAL(1, 14, 8), // "logError"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "logMessage"
QT_MOC_LITERAL(4, 35, 10), // "onCheckAll"
QT_MOC_LITERAL(5, 46, 13), // "onCheckServer"
QT_MOC_LITERAL(6, 60, 11), // "onRunServer"
QT_MOC_LITERAL(7, 72, 12), // "onStopServer"
QT_MOC_LITERAL(8, 85, 12), // "onKillServer"
QT_MOC_LITERAL(9, 98, 13), // "onRunSelected"
QT_MOC_LITERAL(10, 112, 14), // "onStopSelected"
QT_MOC_LITERAL(11, 127, 14), // "onKillSelected"
QT_MOC_LITERAL(12, 142, 9), // "onExecute"
QT_MOC_LITERAL(13, 152, 22), // "onNodeSelectionChanged"
QT_MOC_LITERAL(14, 175, 20) // "onExecuteTextChanged"

    },
    "ClusterWidget\0logError\0\0logMessage\0"
    "onCheckAll\0onCheckServer\0onRunServer\0"
    "onStopServer\0onKillServer\0onRunSelected\0"
    "onStopSelected\0onKillSelected\0onExecute\0"
    "onNodeSelectionChanged\0onExecuteTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClusterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   85,    2, 0x08 /* Private */,
       5,    0,   86,    2, 0x08 /* Private */,
       6,    0,   87,    2, 0x08 /* Private */,
       7,    0,   88,    2, 0x08 /* Private */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClusterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClusterWidget *_t = static_cast<ClusterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onCheckAll(); break;
        case 3: _t->onCheckServer(); break;
        case 4: _t->onRunServer(); break;
        case 5: _t->onStopServer(); break;
        case 6: _t->onKillServer(); break;
        case 7: _t->onRunSelected(); break;
        case 8: _t->onStopSelected(); break;
        case 9: _t->onKillSelected(); break;
        case 10: _t->onExecute(); break;
        case 11: _t->onNodeSelectionChanged(); break;
        case 12: _t->onExecuteTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ClusterWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterWidget::logError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ClusterWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClusterWidget::logMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ClusterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClusterWidget.data,
      qt_meta_data_ClusterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClusterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClusterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClusterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClusterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ClusterWidget::logError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClusterWidget::logMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
