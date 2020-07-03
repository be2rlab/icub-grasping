/****************************************************************************
** Meta object code from reading C++ file 'partitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "partitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartItem_t {
    QByteArrayData data[101];
    char stringdata0[1592];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartItem_t qt_meta_stringdata_PartItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PartItem"
QT_MOC_LITERAL(1, 9, 20), // "sendPartJointsValues"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "QList<double>"
QT_MOC_LITERAL(4, 45, 15), // "stoppedSequence"
QT_MOC_LITERAL(5, 61, 13), // "cycleSequence"
QT_MOC_LITERAL(6, 75, 17), // "cycleTimeSequence"
QT_MOC_LITERAL(7, 93, 15), // "runTimeSequence"
QT_MOC_LITERAL(8, 109, 11), // "runSequence"
QT_MOC_LITERAL(9, 121, 15), // "setCurrentIndex"
QT_MOC_LITERAL(10, 137, 17), // "sequenceActivated"
QT_MOC_LITERAL(11, 155, 15), // "sequenceStopped"
QT_MOC_LITERAL(12, 171, 17), // "updateControlMode"
QT_MOC_LITERAL(13, 189, 10), // "updatePart"
QT_MOC_LITERAL(14, 200, 17), // "onViewSpeedValues"
QT_MOC_LITERAL(15, 218, 20), // "onViewMotorPositions"
QT_MOC_LITERAL(16, 239, 16), // "onViewDutyCycles"
QT_MOC_LITERAL(17, 256, 19), // "onViewCurrentValues"
QT_MOC_LITERAL(18, 276, 22), // "onSetPosSliderOptionPI"
QT_MOC_LITERAL(19, 299, 4), // "mode"
QT_MOC_LITERAL(20, 304, 4), // "step"
QT_MOC_LITERAL(21, 309, 22), // "onSetVelSliderOptionPI"
QT_MOC_LITERAL(22, 332, 22), // "onSetTrqSliderOptionPI"
QT_MOC_LITERAL(23, 355, 22), // "onSetCurSliderOptionPI"
QT_MOC_LITERAL(24, 378, 20), // "onViewPositionTarget"
QT_MOC_LITERAL(25, 399, 23), // "onEnableControlVelocity"
QT_MOC_LITERAL(26, 423, 7), // "control"
QT_MOC_LITERAL(27, 431, 20), // "onEnableControlMixed"
QT_MOC_LITERAL(28, 452, 29), // "onEnableControlPositionDirect"
QT_MOC_LITERAL(29, 482, 18), // "onEnableControlPWM"
QT_MOC_LITERAL(30, 501, 22), // "onEnableControlCurrent"
QT_MOC_LITERAL(31, 524, 19), // "onSequenceActivated"
QT_MOC_LITERAL(32, 544, 17), // "onSequenceStopped"
QT_MOC_LITERAL(33, 562, 14), // "onStopSequence"
QT_MOC_LITERAL(34, 577, 23), // "onCycleTimeTimerTimeout"
QT_MOC_LITERAL(35, 601, 19), // "onCycleTimerTimeout"
QT_MOC_LITERAL(36, 621, 17), // "onRunTimerTimeout"
QT_MOC_LITERAL(37, 639, 12), // "onRunTimeout"
QT_MOC_LITERAL(38, 652, 4), // "onGo"
QT_MOC_LITERAL(39, 657, 12), // "SequenceItem"
QT_MOC_LITERAL(40, 670, 14), // "onOpenSequence"
QT_MOC_LITERAL(41, 685, 14), // "onSaveSequence"
QT_MOC_LITERAL(42, 700, 19), // "QList<SequenceItem>"
QT_MOC_LITERAL(43, 720, 6), // "values"
QT_MOC_LITERAL(44, 727, 8), // "fileName"
QT_MOC_LITERAL(45, 736, 17), // "onSequenceRunTime"
QT_MOC_LITERAL(46, 754, 13), // "onSequenceRun"
QT_MOC_LITERAL(47, 768, 15), // "onSequenceCycle"
QT_MOC_LITERAL(48, 784, 19), // "onSequenceCycleTime"
QT_MOC_LITERAL(49, 804, 14), // "onCalibClicked"
QT_MOC_LITERAL(50, 819, 10), // "JointItem*"
QT_MOC_LITERAL(51, 830, 5), // "joint"
QT_MOC_LITERAL(52, 836, 17), // "onJointChangeMode"
QT_MOC_LITERAL(53, 854, 18), // "onJointInteraction"
QT_MOC_LITERAL(54, 873, 11), // "interaction"
QT_MOC_LITERAL(55, 885, 29), // "onSliderDirectPositionCommand"
QT_MOC_LITERAL(56, 915, 6), // "dirpos"
QT_MOC_LITERAL(57, 922, 5), // "index"
QT_MOC_LITERAL(58, 928, 28), // "onSliderMixedPositionCommand"
QT_MOC_LITERAL(59, 957, 3), // "pos"
QT_MOC_LITERAL(60, 961, 28), // "onSliderMixedVelocityCommand"
QT_MOC_LITERAL(61, 990, 3), // "vel"
QT_MOC_LITERAL(62, 994, 21), // "onSliderTorqueCommand"
QT_MOC_LITERAL(63, 1016, 9), // "torqueVal"
QT_MOC_LITERAL(64, 1026, 33), // "onSliderTrajectoryPositionCom..."
QT_MOC_LITERAL(65, 1060, 33), // "onSliderTrajectoryVelocityCom..."
QT_MOC_LITERAL(66, 1094, 8), // "speedVal"
QT_MOC_LITERAL(67, 1103, 18), // "onSliderPWMCommand"
QT_MOC_LITERAL(68, 1122, 7), // "dutyVal"
QT_MOC_LITERAL(69, 1130, 22), // "onSliderCurrentCommand"
QT_MOC_LITERAL(70, 1153, 7), // "current"
QT_MOC_LITERAL(71, 1161, 23), // "onSliderVelocityCommand"
QT_MOC_LITERAL(72, 1185, 29), // "onSequenceWindowDoubleClicked"
QT_MOC_LITERAL(73, 1215, 11), // "sequenceNum"
QT_MOC_LITERAL(74, 1227, 13), // "onHomeClicked"
QT_MOC_LITERAL(75, 1241, 13), // "onIdleClicked"
QT_MOC_LITERAL(76, 1255, 12), // "onRunClicked"
QT_MOC_LITERAL(77, 1268, 12), // "onPidClicked"
QT_MOC_LITERAL(78, 1281, 17), // "onSendPositionPid"
QT_MOC_LITERAL(79, 1299, 10), // "jointIndex"
QT_MOC_LITERAL(80, 1310, 3), // "Pid"
QT_MOC_LITERAL(81, 1314, 6), // "newPid"
QT_MOC_LITERAL(82, 1321, 17), // "onSendVelocityPid"
QT_MOC_LITERAL(83, 1339, 16), // "onSendCurrentPid"
QT_MOC_LITERAL(84, 1356, 26), // "onSendSingleRemoteVariable"
QT_MOC_LITERAL(85, 1383, 11), // "std::string"
QT_MOC_LITERAL(86, 1395, 3), // "key"
QT_MOC_LITERAL(87, 1399, 16), // "yarp::os::Bottle"
QT_MOC_LITERAL(88, 1416, 3), // "val"
QT_MOC_LITERAL(89, 1420, 26), // "onUpdateAllRemoteVariables"
QT_MOC_LITERAL(90, 1447, 15), // "onSendTorquePid"
QT_MOC_LITERAL(91, 1463, 21), // "MotorTorqueParameters"
QT_MOC_LITERAL(92, 1485, 14), // "newTorqueParam"
QT_MOC_LITERAL(93, 1500, 15), // "onSendStiffness"
QT_MOC_LITERAL(94, 1516, 9), // "jointIdex"
QT_MOC_LITERAL(95, 1526, 5), // "stiff"
QT_MOC_LITERAL(96, 1532, 4), // "damp"
QT_MOC_LITERAL(97, 1537, 5), // "force"
QT_MOC_LITERAL(98, 1543, 9), // "onSendPWM"
QT_MOC_LITERAL(99, 1553, 13), // "onRefreshPids"
QT_MOC_LITERAL(100, 1567, 24) // "onDumpAllRemoteVariables"

    },
    "PartItem\0sendPartJointsValues\0\0"
    "QList<double>\0stoppedSequence\0"
    "cycleSequence\0cycleTimeSequence\0"
    "runTimeSequence\0runSequence\0setCurrentIndex\0"
    "sequenceActivated\0sequenceStopped\0"
    "updateControlMode\0updatePart\0"
    "onViewSpeedValues\0onViewMotorPositions\0"
    "onViewDutyCycles\0onViewCurrentValues\0"
    "onSetPosSliderOptionPI\0mode\0step\0"
    "onSetVelSliderOptionPI\0onSetTrqSliderOptionPI\0"
    "onSetCurSliderOptionPI\0onViewPositionTarget\0"
    "onEnableControlVelocity\0control\0"
    "onEnableControlMixed\0onEnableControlPositionDirect\0"
    "onEnableControlPWM\0onEnableControlCurrent\0"
    "onSequenceActivated\0onSequenceStopped\0"
    "onStopSequence\0onCycleTimeTimerTimeout\0"
    "onCycleTimerTimeout\0onRunTimerTimeout\0"
    "onRunTimeout\0onGo\0SequenceItem\0"
    "onOpenSequence\0onSaveSequence\0"
    "QList<SequenceItem>\0values\0fileName\0"
    "onSequenceRunTime\0onSequenceRun\0"
    "onSequenceCycle\0onSequenceCycleTime\0"
    "onCalibClicked\0JointItem*\0joint\0"
    "onJointChangeMode\0onJointInteraction\0"
    "interaction\0onSliderDirectPositionCommand\0"
    "dirpos\0index\0onSliderMixedPositionCommand\0"
    "pos\0onSliderMixedVelocityCommand\0vel\0"
    "onSliderTorqueCommand\0torqueVal\0"
    "onSliderTrajectoryPositionCommand\0"
    "onSliderTrajectoryVelocityCommand\0"
    "speedVal\0onSliderPWMCommand\0dutyVal\0"
    "onSliderCurrentCommand\0current\0"
    "onSliderVelocityCommand\0"
    "onSequenceWindowDoubleClicked\0sequenceNum\0"
    "onHomeClicked\0onIdleClicked\0onRunClicked\0"
    "onPidClicked\0onSendPositionPid\0"
    "jointIndex\0Pid\0newPid\0onSendVelocityPid\0"
    "onSendCurrentPid\0onSendSingleRemoteVariable\0"
    "std::string\0key\0yarp::os::Bottle\0val\0"
    "onUpdateAllRemoteVariables\0onSendTorquePid\0"
    "MotorTorqueParameters\0newTorqueParam\0"
    "onSendStiffness\0jointIdex\0stiff\0damp\0"
    "force\0onSendPWM\0onRefreshPids\0"
    "onDumpAllRemoteVariables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  344,    2, 0x06 /* Public */,
       4,    0,  351,    2, 0x06 /* Public */,
       5,    0,  352,    2, 0x06 /* Public */,
       6,    0,  353,    2, 0x06 /* Public */,
       7,    0,  354,    2, 0x06 /* Public */,
       8,    0,  355,    2, 0x06 /* Public */,
       9,    1,  356,    2, 0x06 /* Public */,
      10,    0,  359,    2, 0x06 /* Public */,
      11,    0,  360,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  361,    2, 0x0a /* Public */,
      13,    0,  362,    2, 0x0a /* Public */,
      14,    1,  363,    2, 0x0a /* Public */,
      15,    1,  366,    2, 0x0a /* Public */,
      16,    1,  369,    2, 0x0a /* Public */,
      17,    1,  372,    2, 0x0a /* Public */,
      18,    2,  375,    2, 0x0a /* Public */,
      21,    2,  380,    2, 0x0a /* Public */,
      22,    2,  385,    2, 0x0a /* Public */,
      23,    2,  390,    2, 0x0a /* Public */,
      24,    1,  395,    2, 0x0a /* Public */,
      25,    1,  398,    2, 0x0a /* Public */,
      27,    1,  401,    2, 0x0a /* Public */,
      28,    1,  404,    2, 0x0a /* Public */,
      29,    1,  407,    2, 0x0a /* Public */,
      30,    1,  410,    2, 0x0a /* Public */,
      31,    0,  413,    2, 0x08 /* Private */,
      32,    0,  414,    2, 0x08 /* Private */,
      33,    0,  415,    2, 0x08 /* Private */,
      34,    0,  416,    2, 0x08 /* Private */,
      35,    0,  417,    2, 0x08 /* Private */,
      36,    0,  418,    2, 0x08 /* Private */,
      37,    0,  419,    2, 0x08 /* Private */,
      38,    1,  420,    2, 0x08 /* Private */,
      40,    0,  423,    2, 0x08 /* Private */,
      41,    2,  424,    2, 0x08 /* Private */,
      45,    1,  429,    2, 0x08 /* Private */,
      46,    1,  432,    2, 0x08 /* Private */,
      47,    1,  435,    2, 0x08 /* Private */,
      48,    1,  438,    2, 0x08 /* Private */,
      49,    1,  441,    2, 0x08 /* Private */,
      52,    2,  444,    2, 0x08 /* Private */,
      53,    2,  449,    2, 0x08 /* Private */,
      55,    2,  454,    2, 0x08 /* Private */,
      58,    2,  459,    2, 0x08 /* Private */,
      60,    2,  464,    2, 0x08 /* Private */,
      62,    2,  469,    2, 0x08 /* Private */,
      64,    2,  474,    2, 0x08 /* Private */,
      65,    2,  479,    2, 0x08 /* Private */,
      67,    2,  484,    2, 0x08 /* Private */,
      69,    2,  489,    2, 0x08 /* Private */,
      71,    2,  494,    2, 0x08 /* Private */,
      72,    1,  499,    2, 0x08 /* Private */,
      74,    1,  502,    2, 0x08 /* Private */,
      75,    1,  505,    2, 0x08 /* Private */,
      76,    1,  508,    2, 0x08 /* Private */,
      77,    1,  511,    2, 0x08 /* Private */,
      78,    2,  514,    2, 0x08 /* Private */,
      82,    2,  519,    2, 0x08 /* Private */,
      83,    2,  524,    2, 0x08 /* Private */,
      84,    2,  529,    2, 0x08 /* Private */,
      89,    0,  534,    2, 0x08 /* Private */,
      90,    3,  535,    2, 0x08 /* Private */,
      93,    4,  542,    2, 0x08 /* Private */,
      98,    2,  551,    2, 0x08 /* Private */,
      99,    1,  556,    2, 0x08 /* Private */,
     100,    0,  559,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   19,   20,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42, QMetaType::QString,   43,   44,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 50,   19,   51,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 50,   54,   51,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   56,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   59,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   61,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   63,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   59,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   66,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   68,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   70,   57,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   66,   57,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 80,   79,   81,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 80,   79,   81,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 80,   79,   81,
    QMetaType::Void, 0x80000000 | 85, 0x80000000 | 87,   86,   88,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 80, 0x80000000 | 91,   79,   81,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,   94,   95,   96,   97,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   79,   68,
    QMetaType::Void, QMetaType::Int,   79,
    QMetaType::Void,

       0        // eod
};

void PartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PartItem *_t = static_cast<PartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPartJointsValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3]))); break;
        case 1: _t->stoppedSequence(); break;
        case 2: _t->cycleSequence(); break;
        case 3: _t->cycleTimeSequence(); break;
        case 4: _t->runTimeSequence(); break;
        case 5: _t->runSequence(); break;
        case 6: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sequenceActivated(); break;
        case 8: _t->sequenceStopped(); break;
        case 9: _t->updateControlMode(); break;
        case 10: { bool _r = _t->updatePart();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->onViewSpeedValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onViewMotorPositions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onViewDutyCycles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onViewCurrentValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->onSetPosSliderOptionPI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 16: _t->onSetVelSliderOptionPI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 17: _t->onSetTrqSliderOptionPI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->onSetCurSliderOptionPI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 19: _t->onViewPositionTarget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->onEnableControlVelocity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->onEnableControlMixed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onEnableControlPositionDirect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->onEnableControlPWM((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->onEnableControlCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->onSequenceActivated(); break;
        case 26: _t->onSequenceStopped(); break;
        case 27: _t->onStopSequence(); break;
        case 28: _t->onCycleTimeTimerTimeout(); break;
        case 29: _t->onCycleTimerTimeout(); break;
        case 30: _t->onRunTimerTimeout(); break;
        case 31: _t->onRunTimeout(); break;
        case 32: _t->onGo((*reinterpret_cast< SequenceItem(*)>(_a[1]))); break;
        case 33: _t->onOpenSequence(); break;
        case 34: _t->onSaveSequence((*reinterpret_cast< QList<SequenceItem>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 35: _t->onSequenceRunTime((*reinterpret_cast< QList<SequenceItem>(*)>(_a[1]))); break;
        case 36: _t->onSequenceRun((*reinterpret_cast< QList<SequenceItem>(*)>(_a[1]))); break;
        case 37: _t->onSequenceCycle((*reinterpret_cast< QList<SequenceItem>(*)>(_a[1]))); break;
        case 38: _t->onSequenceCycleTime((*reinterpret_cast< QList<SequenceItem>(*)>(_a[1]))); break;
        case 39: _t->onCalibClicked((*reinterpret_cast< JointItem*(*)>(_a[1]))); break;
        case 40: _t->onJointChangeMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JointItem*(*)>(_a[2]))); break;
        case 41: _t->onJointInteraction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JointItem*(*)>(_a[2]))); break;
        case 42: _t->onSliderDirectPositionCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->onSliderMixedPositionCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->onSliderMixedVelocityCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->onSliderTorqueCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->onSliderTrajectoryPositionCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->onSliderTrajectoryVelocityCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->onSliderPWMCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->onSliderCurrentCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 50: _t->onSliderVelocityCommand((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->onSequenceWindowDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->onHomeClicked((*reinterpret_cast< JointItem*(*)>(_a[1]))); break;
        case 53: _t->onIdleClicked((*reinterpret_cast< JointItem*(*)>(_a[1]))); break;
        case 54: _t->onRunClicked((*reinterpret_cast< JointItem*(*)>(_a[1]))); break;
        case 55: _t->onPidClicked((*reinterpret_cast< JointItem*(*)>(_a[1]))); break;
        case 56: _t->onSendPositionPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 57: _t->onSendVelocityPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 58: _t->onSendCurrentPid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2]))); break;
        case 59: _t->onSendSingleRemoteVariable((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< yarp::os::Bottle(*)>(_a[2]))); break;
        case 60: _t->onUpdateAllRemoteVariables(); break;
        case 61: _t->onSendTorquePid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Pid(*)>(_a[2])),(*reinterpret_cast< MotorTorqueParameters(*)>(_a[3]))); break;
        case 62: _t->onSendStiffness((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 63: _t->onSendPWM((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 64: _t->onRefreshPids((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->onDumpAllRemoteVariables(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JointItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PartItem::*_t)(int , QList<double> , QList<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::sendPartJointsValues)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::stoppedSequence)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::cycleSequence)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::cycleTimeSequence)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::runTimeSequence)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::runSequence)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::setCurrentIndex)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::sequenceActivated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PartItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartItem::sequenceStopped)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject PartItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PartItem.data,
      qt_meta_data_PartItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    return _id;
}

// SIGNAL 0
void PartItem::sendPartJointsValues(int _t1, QList<double> _t2, QList<double> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartItem::stoppedSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PartItem::cycleSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PartItem::cycleTimeSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PartItem::runTimeSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PartItem::runSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PartItem::setCurrentIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PartItem::sequenceActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PartItem::sequenceStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
