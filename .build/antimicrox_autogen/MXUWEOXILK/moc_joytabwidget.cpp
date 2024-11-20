/****************************************************************************
** Meta object code from reading C++ file 'joytabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/joytabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joytabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyTabWidget_t {
    QByteArrayData data[69];
    char stringdata0[1169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyTabWidget_t qt_meta_stringdata_JoyTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "JoyTabWidget"
QT_MOC_LITERAL(1, 13, 21), // "joystickConfigChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 25), // "joystickAxisRefreshLabels"
QT_MOC_LITERAL(5, 68, 9), // "axisIndex"
QT_MOC_LITERAL(6, 78, 19), // "namesDisplayChanged"
QT_MOC_LITERAL(7, 98, 6), // "status"
QT_MOC_LITERAL(8, 105, 15), // "forceTabUnflash"
QT_MOC_LITERAL(9, 121, 13), // "JoyTabWidget*"
QT_MOC_LITERAL(10, 135, 9), // "tabWidget"
QT_MOC_LITERAL(11, 145, 14), // "mappingUpdated"
QT_MOC_LITERAL(12, 160, 7), // "mapping"
QT_MOC_LITERAL(13, 168, 12), // "InputDevice*"
QT_MOC_LITERAL(14, 181, 6), // "device"
QT_MOC_LITERAL(15, 188, 20), // "openConfigFileDialog"
QT_MOC_LITERAL(16, 209, 11), // "fillButtons"
QT_MOC_LITERAL(17, 221, 18), // "saveDeviceSettings"
QT_MOC_LITERAL(18, 240, 4), // "sync"
QT_MOC_LITERAL(19, 245, 18), // "loadDeviceSettings"
QT_MOC_LITERAL(20, 264, 17), // "changeNameDisplay"
QT_MOC_LITERAL(21, 282, 12), // "displayNames"
QT_MOC_LITERAL(22, 295, 16), // "changeCurrentSet"
QT_MOC_LITERAL(23, 312, 14), // "loadConfigFile"
QT_MOC_LITERAL(24, 327, 12), // "fileLocation"
QT_MOC_LITERAL(25, 340, 14), // "refreshButtons"
QT_MOC_LITERAL(26, 355, 14), // "saveConfigFile"
QT_MOC_LITERAL(27, 370, 13), // "resetJoystick"
QT_MOC_LITERAL(28, 384, 12), // "saveAsConfig"
QT_MOC_LITERAL(29, 397, 12), // "removeConfig"
QT_MOC_LITERAL(30, 410, 15), // "changeJoyConfig"
QT_MOC_LITERAL(31, 426, 14), // "showAxisDialog"
QT_MOC_LITERAL(32, 441, 16), // "showButtonDialog"
QT_MOC_LITERAL(33, 458, 25), // "showStickAssignmentDialog"
QT_MOC_LITERAL(34, 484, 18), // "showQuickSetDialog"
QT_MOC_LITERAL(35, 503, 18), // "showKeyDelayDialog"
QT_MOC_LITERAL(36, 522, 18), // "showSetNamesDialog"
QT_MOC_LITERAL(37, 541, 11), // "toggleNames"
QT_MOC_LITERAL(38, 553, 17), // "updateBatteryIcon"
QT_MOC_LITERAL(39, 571, 12), // "changeSetOne"
QT_MOC_LITERAL(40, 584, 12), // "changeSetTwo"
QT_MOC_LITERAL(41, 597, 14), // "changeSetThree"
QT_MOC_LITERAL(42, 612, 13), // "changeSetFour"
QT_MOC_LITERAL(43, 626, 13), // "changeSetFive"
QT_MOC_LITERAL(44, 640, 12), // "changeSetSix"
QT_MOC_LITERAL(45, 653, 14), // "changeSetSeven"
QT_MOC_LITERAL(46, 668, 14), // "changeSetEight"
QT_MOC_LITERAL(47, 683, 30), // "displayProfileEditNotification"
QT_MOC_LITERAL(48, 714, 29), // "removeProfileEditNotification"
QT_MOC_LITERAL(49, 744, 22), // "checkForUnsavedProfile"
QT_MOC_LITERAL(50, 767, 8), // "newindex"
QT_MOC_LITERAL(51, 776, 17), // "checkStickDisplay"
QT_MOC_LITERAL(52, 794, 18), // "checkSensorDisplay"
QT_MOC_LITERAL(53, 813, 22), // "checkDPadButtonDisplay"
QT_MOC_LITERAL(54, 836, 22), // "checkAxisButtonDisplay"
QT_MOC_LITERAL(55, 859, 18), // "checkButtonDisplay"
QT_MOC_LITERAL(56, 878, 22), // "checkStickEmptyDisplay"
QT_MOC_LITERAL(57, 901, 23), // "checkSensorEmptyDisplay"
QT_MOC_LITERAL(58, 925, 27), // "checkDPadButtonEmptyDisplay"
QT_MOC_LITERAL(59, 953, 27), // "checkAxisButtonEmptyDisplay"
QT_MOC_LITERAL(60, 981, 23), // "checkButtonEmptyDisplay"
QT_MOC_LITERAL(61, 1005, 26), // "editCurrentProfileItemText"
QT_MOC_LITERAL(62, 1032, 4), // "text"
QT_MOC_LITERAL(63, 1037, 21), // "refreshCopySetActions"
QT_MOC_LITERAL(64, 1059, 14), // "performSetCopy"
QT_MOC_LITERAL(65, 1074, 21), // "disableCopyCurrentSet"
QT_MOC_LITERAL(66, 1096, 17), // "refreshSetButtons"
QT_MOC_LITERAL(67, 1114, 31), // "openGameControllerMappingWindow"
QT_MOC_LITERAL(68, 1146, 22) // "propogateMappingUpdate"

    },
    "JoyTabWidget\0joystickConfigChanged\0\0"
    "index\0joystickAxisRefreshLabels\0"
    "axisIndex\0namesDisplayChanged\0status\0"
    "forceTabUnflash\0JoyTabWidget*\0tabWidget\0"
    "mappingUpdated\0mapping\0InputDevice*\0"
    "device\0openConfigFileDialog\0fillButtons\0"
    "saveDeviceSettings\0sync\0loadDeviceSettings\0"
    "changeNameDisplay\0displayNames\0"
    "changeCurrentSet\0loadConfigFile\0"
    "fileLocation\0refreshButtons\0saveConfigFile\0"
    "resetJoystick\0saveAsConfig\0removeConfig\0"
    "changeJoyConfig\0showAxisDialog\0"
    "showButtonDialog\0showStickAssignmentDialog\0"
    "showQuickSetDialog\0showKeyDelayDialog\0"
    "showSetNamesDialog\0toggleNames\0"
    "updateBatteryIcon\0changeSetOne\0"
    "changeSetTwo\0changeSetThree\0changeSetFour\0"
    "changeSetFive\0changeSetSix\0changeSetSeven\0"
    "changeSetEight\0displayProfileEditNotification\0"
    "removeProfileEditNotification\0"
    "checkForUnsavedProfile\0newindex\0"
    "checkStickDisplay\0checkSensorDisplay\0"
    "checkDPadButtonDisplay\0checkAxisButtonDisplay\0"
    "checkButtonDisplay\0checkStickEmptyDisplay\0"
    "checkSensorEmptyDisplay\0"
    "checkDPadButtonEmptyDisplay\0"
    "checkAxisButtonEmptyDisplay\0"
    "checkButtonEmptyDisplay\0"
    "editCurrentProfileItemText\0text\0"
    "refreshCopySetActions\0performSetCopy\0"
    "disableCopyCurrentSet\0refreshSetButtons\0"
    "openGameControllerMappingWindow\0"
    "propogateMappingUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  294,    2, 0x06 /* Public */,
       4,    1,  297,    2, 0x06 /* Public */,
       6,    1,  300,    2, 0x06 /* Public */,
       8,    1,  303,    2, 0x06 /* Public */,
      11,    2,  306,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  311,    2, 0x0a /* Public */,
      16,    0,  312,    2, 0x0a /* Public */,
      17,    1,  313,    2, 0x0a /* Public */,
      17,    0,  316,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  317,    2, 0x0a /* Public */,
      20,    1,  318,    2, 0x0a /* Public */,
      22,    1,  321,    2, 0x0a /* Public */,
      23,    1,  324,    2, 0x0a /* Public */,
      25,    0,  327,    2, 0x0a /* Public */,
      26,    0,  328,    2, 0x08 /* Private */,
      27,    0,  329,    2, 0x08 /* Private */,
      28,    0,  330,    2, 0x08 /* Private */,
      29,    0,  331,    2, 0x08 /* Private */,
      30,    1,  332,    2, 0x08 /* Private */,
      31,    0,  335,    2, 0x08 /* Private */,
      32,    0,  336,    2, 0x08 /* Private */,
      33,    0,  337,    2, 0x08 /* Private */,
      34,    0,  338,    2, 0x08 /* Private */,
      35,    0,  339,    2, 0x08 /* Private */,
      36,    0,  340,    2, 0x08 /* Private */,
      37,    0,  341,    2, 0x08 /* Private */,
      38,    0,  342,    2, 0x08 /* Private */,
      39,    0,  343,    2, 0x08 /* Private */,
      40,    0,  344,    2, 0x08 /* Private */,
      41,    0,  345,    2, 0x08 /* Private */,
      42,    0,  346,    2, 0x08 /* Private */,
      43,    0,  347,    2, 0x08 /* Private */,
      44,    0,  348,    2, 0x08 /* Private */,
      45,    0,  349,    2, 0x08 /* Private */,
      46,    0,  350,    2, 0x08 /* Private */,
      47,    0,  351,    2, 0x08 /* Private */,
      48,    0,  352,    2, 0x08 /* Private */,
      49,    1,  353,    2, 0x08 /* Private */,
      49,    0,  356,    2, 0x28 /* Private | MethodCloned */,
      51,    0,  357,    2, 0x08 /* Private */,
      52,    0,  358,    2, 0x08 /* Private */,
      53,    0,  359,    2, 0x08 /* Private */,
      54,    0,  360,    2, 0x08 /* Private */,
      55,    0,  361,    2, 0x08 /* Private */,
      56,    0,  362,    2, 0x08 /* Private */,
      57,    0,  363,    2, 0x08 /* Private */,
      58,    0,  364,    2, 0x08 /* Private */,
      59,    0,  365,    2, 0x08 /* Private */,
      60,    0,  366,    2, 0x08 /* Private */,
      61,    1,  367,    2, 0x08 /* Private */,
      63,    0,  370,    2, 0x08 /* Private */,
      64,    0,  371,    2, 0x08 /* Private */,
      65,    0,  372,    2, 0x08 /* Private */,
      66,    0,  373,    2, 0x08 /* Private */,
      67,    0,  374,    2, 0x08 /* Private */,
      68,    2,  375,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
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
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,

       0        // eod
};

void JoyTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->joystickConfigChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->joystickAxisRefreshLabels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->namesDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->forceTabUnflash((*reinterpret_cast< JoyTabWidget*(*)>(_a[1]))); break;
        case 4: _t->mappingUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 5: _t->openConfigFileDialog(); break;
        case 6: _t->fillButtons(); break;
        case 7: _t->saveDeviceSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->saveDeviceSettings(); break;
        case 9: _t->loadDeviceSettings(); break;
        case 10: _t->changeNameDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->changeCurrentSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->loadConfigFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->refreshButtons(); break;
        case 14: _t->saveConfigFile(); break;
        case 15: _t->resetJoystick(); break;
        case 16: _t->saveAsConfig(); break;
        case 17: _t->removeConfig(); break;
        case 18: _t->changeJoyConfig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->showAxisDialog(); break;
        case 20: _t->showButtonDialog(); break;
        case 21: _t->showStickAssignmentDialog(); break;
        case 22: _t->showQuickSetDialog(); break;
        case 23: _t->showKeyDelayDialog(); break;
        case 24: _t->showSetNamesDialog(); break;
        case 25: _t->toggleNames(); break;
        case 26: _t->updateBatteryIcon(); break;
        case 27: _t->changeSetOne(); break;
        case 28: _t->changeSetTwo(); break;
        case 29: _t->changeSetThree(); break;
        case 30: _t->changeSetFour(); break;
        case 31: _t->changeSetFive(); break;
        case 32: _t->changeSetSix(); break;
        case 33: _t->changeSetSeven(); break;
        case 34: _t->changeSetEight(); break;
        case 35: _t->displayProfileEditNotification(); break;
        case 36: _t->removeProfileEditNotification(); break;
        case 37: _t->checkForUnsavedProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->checkForUnsavedProfile(); break;
        case 39: _t->checkStickDisplay(); break;
        case 40: _t->checkSensorDisplay(); break;
        case 41: _t->checkDPadButtonDisplay(); break;
        case 42: _t->checkAxisButtonDisplay(); break;
        case 43: _t->checkButtonDisplay(); break;
        case 44: _t->checkStickEmptyDisplay(); break;
        case 45: _t->checkSensorEmptyDisplay(); break;
        case 46: _t->checkDPadButtonEmptyDisplay(); break;
        case 47: _t->checkAxisButtonEmptyDisplay(); break;
        case 48: _t->checkButtonEmptyDisplay(); break;
        case 49: _t->editCurrentProfileItemText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->refreshCopySetActions(); break;
        case 51: _t->performSetCopy(); break;
        case 52: _t->disableCopyCurrentSet(); break;
        case 53: _t->refreshSetButtons(); break;
        case 54: _t->openGameControllerMappingWindow(); break;
        case 55: _t->propogateMappingUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyTabWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoyTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyTabWidget::joystickConfigChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JoyTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyTabWidget::joystickAxisRefreshLabels)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JoyTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyTabWidget::namesDisplayChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JoyTabWidget::*)(JoyTabWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyTabWidget::forceTabUnflash)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JoyTabWidget::*)(QString , InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyTabWidget::mappingUpdated)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_JoyTabWidget.data,
    qt_meta_data_JoyTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int JoyTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}

// SIGNAL 0
void JoyTabWidget::joystickConfigChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoyTabWidget::joystickAxisRefreshLabels(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoyTabWidget::namesDisplayChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoyTabWidget::forceTabUnflash(JoyTabWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoyTabWidget::mappingUpdated(QString _t1, InputDevice * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
