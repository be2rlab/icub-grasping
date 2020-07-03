/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "onUpdateTimer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "onPortCreated"
QT_MOC_LITERAL(4, 40, 17), // "onOpenErrorDialog"
QT_MOC_LITERAL(5, 58, 18), // "onCalibratingTimer"
QT_MOC_LITERAL(6, 77, 11), // "onCalibrate"
QT_MOC_LITERAL(7, 89, 12), // "onThreashold"
QT_MOC_LITERAL(8, 102, 14), // "onBinarization"
QT_MOC_LITERAL(9, 117, 8), // "btnState"
QT_MOC_LITERAL(10, 126, 8), // "onSmooth"
QT_MOC_LITERAL(11, 135, 20), // "onSmoothValueChanged"
QT_MOC_LITERAL(12, 156, 20), // "onSmoothValuePressed"
QT_MOC_LITERAL(13, 177, 21), // "onSmoothValueReleased"
QT_MOC_LITERAL(14, 199, 21), // "onSpinNeighborChanged"
QT_MOC_LITERAL(15, 221, 28), // "onSpinCompContactGainChanged"
QT_MOC_LITERAL(16, 250, 21), // "onSpinCompGainChanged"
QT_MOC_LITERAL(17, 272, 22), // "onSpinThresholdChanged"
QT_MOC_LITERAL(18, 295, 19) // "onSampleFreqChanged"

    },
    "MainWindow\0onUpdateTimer\0\0onPortCreated\0"
    "onOpenErrorDialog\0onCalibratingTimer\0"
    "onCalibrate\0onThreashold\0onBinarization\0"
    "btnState\0onSmooth\0onSmoothValueChanged\0"
    "onSmoothValuePressed\0onSmoothValueReleased\0"
    "onSpinNeighborChanged\0"
    "onSpinCompContactGainChanged\0"
    "onSpinCompGainChanged\0onSpinThresholdChanged\0"
    "onSampleFreqChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       5,    0,   99,    2, 0x08 /* Private */,
       6,    0,  100,    2, 0x08 /* Private */,
       7,    0,  101,    2, 0x08 /* Private */,
       8,    1,  102,    2, 0x08 /* Private */,
      10,    1,  105,    2, 0x08 /* Private */,
      11,    1,  108,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      16,    1,  119,    2, 0x08 /* Private */,
      17,    1,  122,    2, 0x08 /* Private */,
      18,    1,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUpdateTimer(); break;
        case 1: _t->onPortCreated(); break;
        case 2: _t->onOpenErrorDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onCalibratingTimer(); break;
        case 4: _t->onCalibrate(); break;
        case 5: _t->onThreashold(); break;
        case 6: _t->onBinarization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onSmooth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onSmoothValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSmoothValuePressed(); break;
        case 10: _t->onSmoothValueReleased(); break;
        case 11: _t->onSpinNeighborChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->onSpinCompContactGainChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->onSpinCompGainChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->onSpinThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onSampleFreqChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
