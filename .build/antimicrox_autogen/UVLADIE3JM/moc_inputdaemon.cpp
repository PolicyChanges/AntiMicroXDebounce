/****************************************************************************
** Meta object code from reading C++ file 'inputdaemon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/inputdaemon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputdaemon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputDaemon_t {
    QByteArrayData data[37];
    char stringdata0[472];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputDaemon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputDaemon_t qt_meta_stringdata_InputDaemon = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InputDaemon"
QT_MOC_LITERAL(1, 12, 17), // "joystickRefreshed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "InputDevice*"
QT_MOC_LITERAL(4, 44, 8), // "joystick"
QT_MOC_LITERAL(5, 53, 18), // "joysticksRefreshed"
QT_MOC_LITERAL(6, 72, 34), // "QMap<SDL_JoystickID,InputDevi..."
QT_MOC_LITERAL(7, 107, 9), // "joysticks"
QT_MOC_LITERAL(8, 117, 8), // "complete"
QT_MOC_LITERAL(9, 126, 13), // "deviceUpdated"
QT_MOC_LITERAL(10, 140, 5), // "index"
QT_MOC_LITERAL(11, 146, 6), // "device"
QT_MOC_LITERAL(12, 153, 13), // "deviceRemoved"
QT_MOC_LITERAL(13, 167, 14), // "SDL_JoystickID"
QT_MOC_LITERAL(14, 182, 8), // "deviceID"
QT_MOC_LITERAL(15, 191, 11), // "deviceAdded"
QT_MOC_LITERAL(16, 203, 3), // "run"
QT_MOC_LITERAL(17, 207, 4), // "quit"
QT_MOC_LITERAL(18, 212, 7), // "refresh"
QT_MOC_LITERAL(19, 220, 15), // "refreshJoystick"
QT_MOC_LITERAL(20, 236, 16), // "refreshJoysticks"
QT_MOC_LITERAL(21, 253, 11), // "startWorker"
QT_MOC_LITERAL(22, 265, 14), // "refreshMapping"
QT_MOC_LITERAL(23, 280, 7), // "mapping"
QT_MOC_LITERAL(24, 288, 12), // "removeDevice"
QT_MOC_LITERAL(25, 301, 14), // "addInputDevice"
QT_MOC_LITERAL(26, 316, 18), // "QMap<QString,int>&"
QT_MOC_LITERAL(27, 335, 7), // "uniques"
QT_MOC_LITERAL(28, 343, 4), // "int&"
QT_MOC_LITERAL(29, 348, 14), // "counterUniques"
QT_MOC_LITERAL(30, 363, 5), // "bool&"
QT_MOC_LITERAL(31, 369, 17), // "duplicatedGamepad"
QT_MOC_LITERAL(32, 387, 14), // "refreshIndexes"
QT_MOC_LITERAL(33, 402, 4), // "stop"
QT_MOC_LITERAL(34, 407, 31), // "resetActiveButtonMouseDistances"
QT_MOC_LITERAL(35, 439, 19), // "updatePollResetRate"
QT_MOC_LITERAL(36, 459, 12) // "tempPollRate"

    },
    "InputDaemon\0joystickRefreshed\0\0"
    "InputDevice*\0joystick\0joysticksRefreshed\0"
    "QMap<SDL_JoystickID,InputDevice*>*\0"
    "joysticks\0complete\0deviceUpdated\0index\0"
    "device\0deviceRemoved\0SDL_JoystickID\0"
    "deviceID\0deviceAdded\0run\0quit\0refresh\0"
    "refreshJoystick\0refreshJoysticks\0"
    "startWorker\0refreshMapping\0mapping\0"
    "removeDevice\0addInputDevice\0"
    "QMap<QString,int>&\0uniques\0int&\0"
    "counterUniques\0bool&\0duplicatedGamepad\0"
    "refreshIndexes\0stop\0resetActiveButtonMouseDistances\0"
    "updatePollResetRate\0tempPollRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputDaemon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       8,    1,  120,    2, 0x06 /* Public */,
       8,    0,  123,    2, 0x06 /* Public */,
       9,    2,  124,    2, 0x06 /* Public */,
      12,    1,  129,    2, 0x06 /* Public */,
      15,    1,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  135,    2, 0x0a /* Public */,
      17,    0,  136,    2, 0x0a /* Public */,
      18,    0,  137,    2, 0x0a /* Public */,
      19,    1,  138,    2, 0x0a /* Public */,
      20,    0,  141,    2, 0x0a /* Public */,
      21,    0,  142,    2, 0x0a /* Public */,
      22,    2,  143,    2, 0x0a /* Public */,
      24,    1,  148,    2, 0x0a /* Public */,
      25,    4,  151,    2, 0x0a /* Public */,
      32,    0,  160,    2, 0x0a /* Public */,
      33,    0,  161,    2, 0x08 /* Private */,
      34,    0,  162,    2, 0x08 /* Private */,
      35,    1,  163,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 3,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   23,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 30,   10,   27,   29,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,

       0        // eod
};

void InputDaemon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputDaemon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->joystickRefreshed((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 1: _t->joysticksRefreshed((*reinterpret_cast< QMap<SDL_JoystickID,InputDevice*>*(*)>(_a[1]))); break;
        case 2: _t->complete((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 3: _t->complete(); break;
        case 4: _t->deviceUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 5: _t->deviceRemoved((*reinterpret_cast< SDL_JoystickID(*)>(_a[1]))); break;
        case 6: _t->deviceAdded((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 7: _t->run(); break;
        case 8: _t->quit(); break;
        case 9: _t->refresh(); break;
        case 10: _t->refreshJoystick((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 11: _t->refreshJoysticks(); break;
        case 12: _t->startWorker(); break;
        case 13: _t->refreshMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 14: _t->removeDevice((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 15: _t->addInputDevice((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QMap<QString,int>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 16: _t->refreshIndexes(); break;
        case 17: _t->stop(); break;
        case 18: _t->resetActiveButtonMouseDistances(); break;
        case 19: _t->updatePollResetRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SDL_JoystickID >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputDaemon::*)(InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::joystickRefreshed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)(QMap<SDL_JoystickID,InputDevice*> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::joysticksRefreshed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)(InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::complete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::complete)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)(int , InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::deviceUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)(SDL_JoystickID );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::deviceRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InputDaemon::*)(InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputDaemon::deviceAdded)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InputDaemon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InputDaemon.data,
    qt_meta_data_InputDaemon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputDaemon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputDaemon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputDaemon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputDaemon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void InputDaemon::joystickRefreshed(InputDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputDaemon::joysticksRefreshed(QMap<SDL_JoystickID,InputDevice*> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputDaemon::complete(InputDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputDaemon::complete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InputDaemon::deviceUpdated(int _t1, InputDevice * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputDaemon::deviceRemoved(SDL_JoystickID _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputDaemon::deviceAdded(InputDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
