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
    QByteArrayData data[60];
    char stringdata0[1119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "sig_enableControlVelocity"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "sig_enableControlMixed"
QT_MOC_LITERAL(4, 61, 31), // "sig_enableControlPositionDirect"
QT_MOC_LITERAL(5, 93, 20), // "sig_enableControlPWM"
QT_MOC_LITERAL(6, 114, 24), // "sig_enableControlCurrent"
QT_MOC_LITERAL(7, 139, 19), // "sig_viewSpeedValues"
QT_MOC_LITERAL(8, 159, 21), // "sig_viewCurrentValues"
QT_MOC_LITERAL(9, 181, 22), // "sig_viewMotorPositions"
QT_MOC_LITERAL(10, 204, 18), // "sig_viewDutyCycles"
QT_MOC_LITERAL(11, 223, 24), // "sig_setPosSliderOptionMW"
QT_MOC_LITERAL(12, 248, 24), // "sig_setVelSliderOptionMW"
QT_MOC_LITERAL(13, 273, 24), // "sig_setTrqSliderOptionMW"
QT_MOC_LITERAL(14, 298, 22), // "sig_viewPositionTarget"
QT_MOC_LITERAL(15, 321, 17), // "sig_internalClose"
QT_MOC_LITERAL(16, 339, 19), // "onSequenceActivated"
QT_MOC_LITERAL(17, 359, 17), // "onSequenceStopped"
QT_MOC_LITERAL(18, 377, 12), // "onSaveAllSeq"
QT_MOC_LITERAL(19, 390, 12), // "onLoadAllSeq"
QT_MOC_LITERAL(20, 403, 12), // "onStopAllSeq"
QT_MOC_LITERAL(21, 416, 20), // "onCurrentPartChanged"
QT_MOC_LITERAL(22, 437, 5), // "index"
QT_MOC_LITERAL(23, 443, 17), // "onOpenSequenceTab"
QT_MOC_LITERAL(24, 461, 15), // "onRunSinglePart"
QT_MOC_LITERAL(25, 477, 13), // "onRunAllParts"
QT_MOC_LITERAL(26, 491, 15), // "onRunTimeAllSeq"
QT_MOC_LITERAL(27, 507, 11), // "onRunAllSeq"
QT_MOC_LITERAL(28, 519, 13), // "onCycleAllSeq"
QT_MOC_LITERAL(29, 533, 17), // "onCycleTimeAllSeq"
QT_MOC_LITERAL(30, 551, 8), // "onUpdate"
QT_MOC_LITERAL(31, 560, 14), // "onIdleAllParts"
QT_MOC_LITERAL(32, 575, 16), // "onIdleSinglePart"
QT_MOC_LITERAL(33, 592, 16), // "onHomeSinglePart"
QT_MOC_LITERAL(34, 609, 14), // "onHomeAllParts"
QT_MOC_LITERAL(35, 624, 32), // "onHomeSinglePartToCustomPosition"
QT_MOC_LITERAL(36, 657, 16), // "yarp::os::Bottle"
QT_MOC_LITERAL(37, 674, 15), // "positionElement"
QT_MOC_LITERAL(38, 690, 30), // "onHomeAllPartsToCustomPosition"
QT_MOC_LITERAL(39, 721, 17), // "onCalibSinglePart"
QT_MOC_LITERAL(40, 739, 7), // "onGoAll"
QT_MOC_LITERAL(41, 747, 16), // "onExecuteScript1"
QT_MOC_LITERAL(42, 764, 16), // "onExecuteScript2"
QT_MOC_LITERAL(43, 781, 19), // "onViewGlobalToolbar"
QT_MOC_LITERAL(44, 801, 17), // "onViewPartToolbar"
QT_MOC_LITERAL(45, 819, 12), // "onViewSpeeds"
QT_MOC_LITERAL(46, 832, 14), // "onViewCurrents"
QT_MOC_LITERAL(47, 847, 20), // "onViewMotorPositions"
QT_MOC_LITERAL(48, 868, 16), // "onViewDutyCycles"
QT_MOC_LITERAL(49, 885, 20), // "onViewPositionTarget"
QT_MOC_LITERAL(50, 906, 23), // "onEnableControlVelocity"
QT_MOC_LITERAL(51, 930, 3), // "val"
QT_MOC_LITERAL(52, 934, 20), // "onEnableControlMixed"
QT_MOC_LITERAL(53, 955, 29), // "onEnableControlPositionDirect"
QT_MOC_LITERAL(54, 985, 18), // "onEnableControlPWM"
QT_MOC_LITERAL(55, 1004, 22), // "onEnableControlCurrent"
QT_MOC_LITERAL(56, 1027, 22), // "onSliderOptionsClicked"
QT_MOC_LITERAL(57, 1050, 22), // "onSetPosSliderOptionMW"
QT_MOC_LITERAL(58, 1073, 22), // "onSetVelSliderOptionMW"
QT_MOC_LITERAL(59, 1096, 22) // "onSetTrqSliderOptionMW"

    },
    "MainWindow\0sig_enableControlVelocity\0"
    "\0sig_enableControlMixed\0"
    "sig_enableControlPositionDirect\0"
    "sig_enableControlPWM\0sig_enableControlCurrent\0"
    "sig_viewSpeedValues\0sig_viewCurrentValues\0"
    "sig_viewMotorPositions\0sig_viewDutyCycles\0"
    "sig_setPosSliderOptionMW\0"
    "sig_setVelSliderOptionMW\0"
    "sig_setTrqSliderOptionMW\0"
    "sig_viewPositionTarget\0sig_internalClose\0"
    "onSequenceActivated\0onSequenceStopped\0"
    "onSaveAllSeq\0onLoadAllSeq\0onStopAllSeq\0"
    "onCurrentPartChanged\0index\0onOpenSequenceTab\0"
    "onRunSinglePart\0onRunAllParts\0"
    "onRunTimeAllSeq\0onRunAllSeq\0onCycleAllSeq\0"
    "onCycleTimeAllSeq\0onUpdate\0onIdleAllParts\0"
    "onIdleSinglePart\0onHomeSinglePart\0"
    "onHomeAllParts\0onHomeSinglePartToCustomPosition\0"
    "yarp::os::Bottle\0positionElement\0"
    "onHomeAllPartsToCustomPosition\0"
    "onCalibSinglePart\0onGoAll\0onExecuteScript1\0"
    "onExecuteScript2\0onViewGlobalToolbar\0"
    "onViewPartToolbar\0onViewSpeeds\0"
    "onViewCurrents\0onViewMotorPositions\0"
    "onViewDutyCycles\0onViewPositionTarget\0"
    "onEnableControlVelocity\0val\0"
    "onEnableControlMixed\0onEnableControlPositionDirect\0"
    "onEnableControlPWM\0onEnableControlCurrent\0"
    "onSliderOptionsClicked\0onSetPosSliderOptionMW\0"
    "onSetVelSliderOptionMW\0onSetTrqSliderOptionMW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       3,    1,  287,    2, 0x06 /* Public */,
       4,    1,  290,    2, 0x06 /* Public */,
       5,    1,  293,    2, 0x06 /* Public */,
       6,    1,  296,    2, 0x06 /* Public */,
       7,    1,  299,    2, 0x06 /* Public */,
       8,    1,  302,    2, 0x06 /* Public */,
       9,    1,  305,    2, 0x06 /* Public */,
      10,    1,  308,    2, 0x06 /* Public */,
      11,    2,  311,    2, 0x06 /* Public */,
      12,    2,  316,    2, 0x06 /* Public */,
      13,    2,  321,    2, 0x06 /* Public */,
      14,    1,  326,    2, 0x06 /* Public */,
      15,    0,  329,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  330,    2, 0x08 /* Private */,
      17,    0,  331,    2, 0x08 /* Private */,
      18,    0,  332,    2, 0x08 /* Private */,
      19,    0,  333,    2, 0x08 /* Private */,
      20,    0,  334,    2, 0x08 /* Private */,
      21,    1,  335,    2, 0x08 /* Private */,
      23,    0,  338,    2, 0x08 /* Private */,
      24,    0,  339,    2, 0x08 /* Private */,
      25,    0,  340,    2, 0x08 /* Private */,
      26,    0,  341,    2, 0x08 /* Private */,
      27,    0,  342,    2, 0x08 /* Private */,
      28,    0,  343,    2, 0x08 /* Private */,
      29,    0,  344,    2, 0x08 /* Private */,
      30,    0,  345,    2, 0x08 /* Private */,
      31,    0,  346,    2, 0x08 /* Private */,
      32,    0,  347,    2, 0x08 /* Private */,
      33,    0,  348,    2, 0x08 /* Private */,
      34,    0,  349,    2, 0x08 /* Private */,
      35,    1,  350,    2, 0x08 /* Private */,
      38,    1,  353,    2, 0x08 /* Private */,
      39,    0,  356,    2, 0x08 /* Private */,
      40,    0,  357,    2, 0x08 /* Private */,
      41,    0,  358,    2, 0x08 /* Private */,
      42,    0,  359,    2, 0x08 /* Private */,
      43,    1,  360,    2, 0x08 /* Private */,
      44,    1,  363,    2, 0x08 /* Private */,
      45,    1,  366,    2, 0x08 /* Private */,
      46,    1,  369,    2, 0x08 /* Private */,
      47,    1,  372,    2, 0x08 /* Private */,
      48,    1,  375,    2, 0x08 /* Private */,
      49,    1,  378,    2, 0x08 /* Private */,
      50,    1,  381,    2, 0x08 /* Private */,
      52,    1,  384,    2, 0x08 /* Private */,
      53,    1,  387,    2, 0x08 /* Private */,
      54,    1,  390,    2, 0x08 /* Private */,
      55,    1,  393,    2, 0x08 /* Private */,
      56,    0,  396,    2, 0x08 /* Private */,
      57,    2,  397,    2, 0x08 /* Private */,
      58,    2,  402,    2, 0x08 /* Private */,
      59,    2,  407,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_enableControlVelocity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sig_enableControlMixed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sig_enableControlPositionDirect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sig_enableControlPWM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sig_enableControlCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sig_viewSpeedValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sig_viewCurrentValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sig_viewMotorPositions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->sig_viewDutyCycles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->sig_setPosSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->sig_setVelSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->sig_setTrqSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->sig_viewPositionTarget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->sig_internalClose(); break;
        case 14: _t->onSequenceActivated(); break;
        case 15: _t->onSequenceStopped(); break;
        case 16: _t->onSaveAllSeq(); break;
        case 17: _t->onLoadAllSeq(); break;
        case 18: _t->onStopAllSeq(); break;
        case 19: _t->onCurrentPartChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->onOpenSequenceTab(); break;
        case 21: _t->onRunSinglePart(); break;
        case 22: _t->onRunAllParts(); break;
        case 23: _t->onRunTimeAllSeq(); break;
        case 24: _t->onRunAllSeq(); break;
        case 25: _t->onCycleAllSeq(); break;
        case 26: _t->onCycleTimeAllSeq(); break;
        case 27: _t->onUpdate(); break;
        case 28: _t->onIdleAllParts(); break;
        case 29: _t->onIdleSinglePart(); break;
        case 30: _t->onHomeSinglePart(); break;
        case 31: _t->onHomeAllParts(); break;
        case 32: _t->onHomeSinglePartToCustomPosition((*reinterpret_cast< const yarp::os::Bottle(*)>(_a[1]))); break;
        case 33: _t->onHomeAllPartsToCustomPosition((*reinterpret_cast< const yarp::os::Bottle(*)>(_a[1]))); break;
        case 34: _t->onCalibSinglePart(); break;
        case 35: _t->onGoAll(); break;
        case 36: _t->onExecuteScript1(); break;
        case 37: _t->onExecuteScript2(); break;
        case 38: _t->onViewGlobalToolbar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->onViewPartToolbar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->onViewSpeeds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->onViewCurrents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->onViewMotorPositions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->onViewDutyCycles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->onViewPositionTarget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->onEnableControlVelocity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->onEnableControlMixed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->onEnableControlPositionDirect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->onEnableControlPWM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->onEnableControlCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->onSliderOptionsClicked(); break;
        case 51: _t->onSetPosSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 52: _t->onSetVelSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 53: _t->onSetTrqSliderOptionMW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_enableControlVelocity)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_enableControlMixed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_enableControlPositionDirect)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_enableControlPWM)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_enableControlCurrent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_viewSpeedValues)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_viewCurrentValues)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_viewMotorPositions)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_viewDutyCycles)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_setPosSliderOptionMW)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_setVelSliderOptionMW)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_setTrqSliderOptionMW)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_viewPositionTarget)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_internalClose)) {
                *result = 13;
                return;
            }
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
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sig_enableControlVelocity(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sig_enableControlMixed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::sig_enableControlPositionDirect(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::sig_enableControlPWM(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sig_enableControlCurrent(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::sig_viewSpeedValues(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sig_viewCurrentValues(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::sig_viewMotorPositions(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::sig_viewDutyCycles(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::sig_setPosSliderOptionMW(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::sig_setVelSliderOptionMW(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::sig_setTrqSliderOptionMW(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::sig_viewPositionTarget(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::sig_internalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
struct qt_meta_stringdata_ModesTreeWidget_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModesTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModesTreeWidget_t qt_meta_stringdata_ModesTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ModesTreeWidget"

    },
    "ModesTreeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModesTreeWidget[] = {

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

void ModesTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModesTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_ModesTreeWidget.data,
      qt_meta_data_ModesTreeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModesTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModesTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModesTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int ModesTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
