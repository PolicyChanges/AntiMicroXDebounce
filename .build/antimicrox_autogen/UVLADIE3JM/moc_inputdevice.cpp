/****************************************************************************
** Meta object code from reading C++ file 'inputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/inputdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputDevice_t {
    QByteArrayData data[95];
    char stringdata0[1596];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputDevice_t qt_meta_stringdata_InputDevice = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InputDevice"
QT_MOC_LITERAL(1, 12, 18), // "setChangeActivated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 24), // "setAxisThrottleActivated"
QT_MOC_LITERAL(5, 63, 7), // "clicked"
QT_MOC_LITERAL(6, 71, 8), // "released"
QT_MOC_LITERAL(7, 80, 14), // "rawButtonClick"
QT_MOC_LITERAL(8, 95, 16), // "rawButtonRelease"
QT_MOC_LITERAL(9, 112, 18), // "rawAxisButtonClick"
QT_MOC_LITERAL(10, 131, 4), // "axis"
QT_MOC_LITERAL(11, 136, 11), // "buttonindex"
QT_MOC_LITERAL(12, 148, 20), // "rawAxisButtonRelease"
QT_MOC_LITERAL(13, 169, 18), // "rawDPadButtonClick"
QT_MOC_LITERAL(14, 188, 4), // "dpad"
QT_MOC_LITERAL(15, 193, 20), // "rawDPadButtonRelease"
QT_MOC_LITERAL(16, 214, 16), // "rawAxisActivated"
QT_MOC_LITERAL(17, 231, 5), // "value"
QT_MOC_LITERAL(18, 237, 15), // "rawAxisReleased"
QT_MOC_LITERAL(19, 253, 12), // "rawAxisMoved"
QT_MOC_LITERAL(20, 266, 14), // "profileUpdated"
QT_MOC_LITERAL(21, 281, 15), // "propertyUpdated"
QT_MOC_LITERAL(22, 297, 17), // "profileNameEdited"
QT_MOC_LITERAL(23, 315, 4), // "text"
QT_MOC_LITERAL(24, 320, 18), // "requestProfileLoad"
QT_MOC_LITERAL(25, 339, 8), // "location"
QT_MOC_LITERAL(26, 348, 11), // "requestWait"
QT_MOC_LITERAL(27, 360, 5), // "reset"
QT_MOC_LITERAL(28, 366, 13), // "transferReset"
QT_MOC_LITERAL(29, 380, 13), // "reInitButtons"
QT_MOC_LITERAL(30, 394, 20), // "resetButtonDownCount"
QT_MOC_LITERAL(31, 415, 18), // "setActiveSetNumber"
QT_MOC_LITERAL(32, 434, 26), // "changeSetButtonAssociation"
QT_MOC_LITERAL(33, 461, 12), // "button_index"
QT_MOC_LITERAL(34, 474, 9), // "originset"
QT_MOC_LITERAL(35, 484, 6), // "newset"
QT_MOC_LITERAL(36, 491, 4), // "mode"
QT_MOC_LITERAL(37, 496, 30), // "changeSetAxisButtonAssociation"
QT_MOC_LITERAL(38, 527, 10), // "axis_index"
QT_MOC_LITERAL(39, 538, 31), // "changeSetStickButtonAssociation"
QT_MOC_LITERAL(40, 570, 11), // "stick_index"
QT_MOC_LITERAL(41, 582, 32), // "changeSetSensorButtonAssociation"
QT_MOC_LITERAL(42, 615, 18), // "JoySensorDirection"
QT_MOC_LITERAL(43, 634, 9), // "direction"
QT_MOC_LITERAL(44, 644, 13), // "JoySensorType"
QT_MOC_LITERAL(45, 658, 4), // "type"
QT_MOC_LITERAL(46, 663, 30), // "changeSetDPadButtonAssociation"
QT_MOC_LITERAL(47, 694, 10), // "dpad_index"
QT_MOC_LITERAL(48, 705, 31), // "changeSetVDPadButtonAssociation"
QT_MOC_LITERAL(49, 737, 21), // "setDeviceKeyPressTime"
QT_MOC_LITERAL(50, 759, 12), // "newPressTime"
QT_MOC_LITERAL(51, 772, 13), // "profileEdited"
QT_MOC_LITERAL(52, 786, 14), // "setProfileName"
QT_MOC_LITERAL(53, 801, 12), // "haltServices"
QT_MOC_LITERAL(54, 814, 12), // "finalRemoval"
QT_MOC_LITERAL(55, 827, 16), // "buttonClickEvent"
QT_MOC_LITERAL(56, 844, 18), // "buttonReleaseEvent"
QT_MOC_LITERAL(57, 863, 20), // "dpadButtonClickEvent"
QT_MOC_LITERAL(58, 884, 22), // "dpadButtonReleaseEvent"
QT_MOC_LITERAL(59, 907, 34), // "establishPropertyUpdatedConne..."
QT_MOC_LITERAL(60, 942, 35), // "disconnectPropertyUpdatedConn..."
QT_MOC_LITERAL(61, 978, 18), // "propogateSetChange"
QT_MOC_LITERAL(62, 997, 30), // "propogateSetAxisThrottleChange"
QT_MOC_LITERAL(63, 1028, 15), // "buttonDownEvent"
QT_MOC_LITERAL(64, 1044, 8), // "setindex"
QT_MOC_LITERAL(65, 1053, 13), // "buttonUpEvent"
QT_MOC_LITERAL(66, 1067, 18), // "axisActivatedEvent"
QT_MOC_LITERAL(67, 1086, 9), // "axisindex"
QT_MOC_LITERAL(68, 1096, 17), // "axisReleasedEvent"
QT_MOC_LITERAL(69, 1114, 19), // "axisButtonDownEvent"
QT_MOC_LITERAL(70, 1134, 17), // "axisButtonUpEvent"
QT_MOC_LITERAL(71, 1152, 19), // "dpadButtonDownEvent"
QT_MOC_LITERAL(72, 1172, 9), // "dpadindex"
QT_MOC_LITERAL(73, 1182, 17), // "dpadButtonUpEvent"
QT_MOC_LITERAL(74, 1200, 20), // "stickButtonDownEvent"
QT_MOC_LITERAL(75, 1221, 10), // "stickindex"
QT_MOC_LITERAL(76, 1232, 18), // "stickButtonUpEvent"
QT_MOC_LITERAL(77, 1251, 21), // "sensorButtonDownEvent"
QT_MOC_LITERAL(78, 1273, 19), // "sensorButtonUpEvent"
QT_MOC_LITERAL(79, 1293, 20), // "updateSetButtonNames"
QT_MOC_LITERAL(80, 1314, 24), // "updateSetAxisButtonNames"
QT_MOC_LITERAL(81, 1339, 9), // "axisIndex"
QT_MOC_LITERAL(82, 1349, 11), // "buttonIndex"
QT_MOC_LITERAL(83, 1361, 25), // "updateSetStickButtonNames"
QT_MOC_LITERAL(84, 1387, 10), // "stickIndex"
QT_MOC_LITERAL(85, 1398, 26), // "updateSetSensorButtonNames"
QT_MOC_LITERAL(86, 1425, 24), // "updateSetDPadButtonNames"
QT_MOC_LITERAL(87, 1450, 9), // "dpadIndex"
QT_MOC_LITERAL(88, 1460, 25), // "updateSetVDPadButtonNames"
QT_MOC_LITERAL(89, 1486, 10), // "vdpadIndex"
QT_MOC_LITERAL(90, 1497, 18), // "updateSetAxisNames"
QT_MOC_LITERAL(91, 1516, 19), // "updateSetStickNames"
QT_MOC_LITERAL(92, 1536, 20), // "updateSetSensorNames"
QT_MOC_LITERAL(93, 1557, 18), // "updateSetDPadNames"
QT_MOC_LITERAL(94, 1576, 19) // "updateSetVDPadNames"

    },
    "InputDevice\0setChangeActivated\0\0index\0"
    "setAxisThrottleActivated\0clicked\0"
    "released\0rawButtonClick\0rawButtonRelease\0"
    "rawAxisButtonClick\0axis\0buttonindex\0"
    "rawAxisButtonRelease\0rawDPadButtonClick\0"
    "dpad\0rawDPadButtonRelease\0rawAxisActivated\0"
    "value\0rawAxisReleased\0rawAxisMoved\0"
    "profileUpdated\0propertyUpdated\0"
    "profileNameEdited\0text\0requestProfileLoad\0"
    "location\0requestWait\0reset\0transferReset\0"
    "reInitButtons\0resetButtonDownCount\0"
    "setActiveSetNumber\0changeSetButtonAssociation\0"
    "button_index\0originset\0newset\0mode\0"
    "changeSetAxisButtonAssociation\0"
    "axis_index\0changeSetStickButtonAssociation\0"
    "stick_index\0changeSetSensorButtonAssociation\0"
    "JoySensorDirection\0direction\0JoySensorType\0"
    "type\0changeSetDPadButtonAssociation\0"
    "dpad_index\0changeSetVDPadButtonAssociation\0"
    "setDeviceKeyPressTime\0newPressTime\0"
    "profileEdited\0setProfileName\0haltServices\0"
    "finalRemoval\0buttonClickEvent\0"
    "buttonReleaseEvent\0dpadButtonClickEvent\0"
    "dpadButtonReleaseEvent\0"
    "establishPropertyUpdatedConnection\0"
    "disconnectPropertyUpdatedConnection\0"
    "propogateSetChange\0propogateSetAxisThrottleChange\0"
    "buttonDownEvent\0setindex\0buttonUpEvent\0"
    "axisActivatedEvent\0axisindex\0"
    "axisReleasedEvent\0axisButtonDownEvent\0"
    "axisButtonUpEvent\0dpadButtonDownEvent\0"
    "dpadindex\0dpadButtonUpEvent\0"
    "stickButtonDownEvent\0stickindex\0"
    "stickButtonUpEvent\0sensorButtonDownEvent\0"
    "sensorButtonUpEvent\0updateSetButtonNames\0"
    "updateSetAxisButtonNames\0axisIndex\0"
    "buttonIndex\0updateSetStickButtonNames\0"
    "stickIndex\0updateSetSensorButtonNames\0"
    "updateSetDPadButtonNames\0dpadIndex\0"
    "updateSetVDPadButtonNames\0vdpadIndex\0"
    "updateSetAxisNames\0updateSetStickNames\0"
    "updateSetSensorNames\0updateSetDPadNames\0"
    "updateSetVDPadNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  339,    2, 0x06 /* Public */,
       4,    1,  342,    2, 0x06 /* Public */,
       5,    1,  345,    2, 0x06 /* Public */,
       6,    1,  348,    2, 0x06 /* Public */,
       7,    1,  351,    2, 0x06 /* Public */,
       8,    1,  354,    2, 0x06 /* Public */,
       9,    2,  357,    2, 0x06 /* Public */,
      12,    2,  362,    2, 0x06 /* Public */,
      13,    2,  367,    2, 0x06 /* Public */,
      15,    2,  372,    2, 0x06 /* Public */,
      16,    2,  377,    2, 0x06 /* Public */,
      18,    2,  382,    2, 0x06 /* Public */,
      19,    2,  387,    2, 0x06 /* Public */,
      20,    0,  392,    2, 0x06 /* Public */,
      21,    0,  393,    2, 0x06 /* Public */,
      22,    1,  394,    2, 0x06 /* Public */,
      24,    1,  397,    2, 0x06 /* Public */,
      26,    0,  400,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  401,    2, 0x0a /* Public */,
      28,    0,  402,    2, 0x0a /* Public */,
      29,    0,  403,    2, 0x0a /* Public */,
      30,    0,  404,    2, 0x0a /* Public */,
      31,    1,  405,    2, 0x0a /* Public */,
      32,    4,  408,    2, 0x0a /* Public */,
      37,    5,  417,    2, 0x0a /* Public */,
      39,    5,  428,    2, 0x0a /* Public */,
      41,    5,  439,    2, 0x0a /* Public */,
      46,    5,  450,    2, 0x0a /* Public */,
      48,    5,  461,    2, 0x0a /* Public */,
      49,    1,  472,    2, 0x0a /* Public */,
      51,    0,  475,    2, 0x0a /* Public */,
      52,    1,  476,    2, 0x0a /* Public */,
      53,    0,  479,    2, 0x0a /* Public */,
      54,    0,  480,    2, 0x0a /* Public */,
      55,    1,  481,    2, 0x0a /* Public */,
      56,    1,  484,    2, 0x0a /* Public */,
      57,    1,  487,    2, 0x0a /* Public */,
      58,    1,  490,    2, 0x0a /* Public */,
      59,    0,  493,    2, 0x0a /* Public */,
      60,    0,  494,    2, 0x0a /* Public */,
      61,    1,  495,    2, 0x09 /* Protected */,
      62,    2,  498,    2, 0x09 /* Protected */,
      63,    2,  503,    2, 0x09 /* Protected */,
      65,    2,  508,    2, 0x09 /* Protected */,
      66,    3,  513,    2, 0x09 /* Protected */,
      68,    3,  520,    2, 0x09 /* Protected */,
      69,    3,  527,    2, 0x09 /* Protected */,
      70,    3,  534,    2, 0x09 /* Protected */,
      71,    3,  541,    2, 0x09 /* Protected */,
      73,    3,  548,    2, 0x09 /* Protected */,
      74,    3,  555,    2, 0x09 /* Protected */,
      76,    3,  562,    2, 0x09 /* Protected */,
      77,    3,  569,    2, 0x09 /* Protected */,
      78,    3,  576,    2, 0x09 /* Protected */,
      79,    1,  583,    2, 0x09 /* Protected */,
      80,    2,  586,    2, 0x09 /* Protected */,
      83,    2,  591,    2, 0x09 /* Protected */,
      85,    2,  596,    2, 0x09 /* Protected */,
      86,    2,  601,    2, 0x09 /* Protected */,
      88,    2,  606,    2, 0x09 /* Protected */,
      90,    1,  611,    2, 0x09 /* Protected */,
      91,    1,  614,    2, 0x09 /* Protected */,
      92,    1,  617,    2, 0x09 /* Protected */,
      93,    1,  620,    2, 0x09 /* Protected */,
      94,    1,  623,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   34,   35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   38,   34,   35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   40,   34,   35,   36,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 44, QMetaType::Int, QMetaType::Int, QMetaType::Int,   43,   45,   34,   35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   47,   34,   35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   47,   34,   35,   36,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   64,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   64,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   67,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   67,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   67,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   67,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   72,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   72,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   75,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   75,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 44, 0x80000000 | 42,   64,   45,   43,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 44, 0x80000000 | 42,   64,   45,   43,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   81,   82,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   84,   82,
    QMetaType::Void, 0x80000000 | 44, 0x80000000 | 42,   45,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   87,   82,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   89,   82,
    QMetaType::Void, QMetaType::Int,   81,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   89,

       0        // eod
};

void InputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setChangeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setAxisThrottleActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rawButtonClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->rawButtonRelease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->rawAxisButtonClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->rawAxisButtonRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->rawDPadButtonClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->rawDPadButtonRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->rawAxisActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->rawAxisReleased((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->rawAxisMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->profileUpdated(); break;
        case 14: _t->propertyUpdated(); break;
        case 15: _t->profileNameEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->requestProfileLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->requestWait(); break;
        case 18: _t->reset(); break;
        case 19: _t->transferReset(); break;
        case 20: _t->reInitButtons(); break;
        case 21: _t->resetButtonDownCount(); break;
        case 22: _t->setActiveSetNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->changeSetButtonAssociation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 24: _t->changeSetAxisButtonAssociation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 25: _t->changeSetStickButtonAssociation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 26: _t->changeSetSensorButtonAssociation((*reinterpret_cast< JoySensorDirection(*)>(_a[1])),(*reinterpret_cast< JoySensorType(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 27: _t->changeSetDPadButtonAssociation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 28: _t->changeSetVDPadButtonAssociation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 29: _t->setDeviceKeyPressTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->profileEdited(); break;
        case 31: _t->setProfileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->haltServices(); break;
        case 33: _t->finalRemoval(); break;
        case 34: _t->buttonClickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->buttonReleaseEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->dpadButtonClickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->dpadButtonReleaseEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->establishPropertyUpdatedConnection(); break;
        case 39: _t->disconnectPropertyUpdatedConnection(); break;
        case 40: _t->propogateSetChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->propogateSetAxisThrottleChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->buttonDownEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->buttonUpEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->axisActivatedEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 45: _t->axisReleasedEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->axisButtonDownEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 47: _t->axisButtonUpEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 48: _t->dpadButtonDownEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 49: _t->dpadButtonUpEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 50: _t->stickButtonDownEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 51: _t->stickButtonUpEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 52: _t->sensorButtonDownEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoySensorType(*)>(_a[2])),(*reinterpret_cast< JoySensorDirection(*)>(_a[3]))); break;
        case 53: _t->sensorButtonUpEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoySensorType(*)>(_a[2])),(*reinterpret_cast< JoySensorDirection(*)>(_a[3]))); break;
        case 54: _t->updateSetButtonNames((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->updateSetAxisButtonNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->updateSetStickButtonNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->updateSetSensorButtonNames((*reinterpret_cast< JoySensorType(*)>(_a[1])),(*reinterpret_cast< JoySensorDirection(*)>(_a[2]))); break;
        case 58: _t->updateSetDPadButtonNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 59: _t->updateSetVDPadButtonNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->updateSetAxisNames((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->updateSetStickNames((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->updateSetSensorNames((*reinterpret_cast< JoySensorType(*)>(_a[1]))); break;
        case 63: _t->updateSetDPadNames((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->updateSetVDPadNames((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorDirection >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorDirection >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorDirection >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorDirection >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::setChangeActivated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::setAxisThrottleActivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::released)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawButtonClick)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawButtonRelease)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawAxisButtonClick)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawAxisButtonRelease)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawDPadButtonClick)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawDPadButtonRelease)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawAxisActivated)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawAxisReleased)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::rawAxisMoved)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::profileUpdated)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::propertyUpdated)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::profileNameEdited)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::requestProfileLoad)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (InputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDevice::requestWait)) {
                *result = 17;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InputDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InputDevice.data,
    qt_meta_data_InputDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void InputDevice::setChangeActivated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputDevice::setAxisThrottleActivated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputDevice::clicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputDevice::released(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InputDevice::rawButtonClick(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputDevice::rawButtonRelease(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputDevice::rawAxisButtonClick(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void InputDevice::rawAxisButtonRelease(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void InputDevice::rawDPadButtonClick(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void InputDevice::rawDPadButtonRelease(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void InputDevice::rawAxisActivated(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void InputDevice::rawAxisReleased(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void InputDevice::rawAxisMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void InputDevice::profileUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void InputDevice::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void InputDevice::profileNameEdited(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void InputDevice::requestProfileLoad(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void InputDevice::requestWait()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
