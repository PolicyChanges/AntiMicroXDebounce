/****************************************************************************
** Meta object code from reading C++ file 'joyaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joyaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joyaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyAxis_t {
    QByteArrayData data[22];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyAxis_t qt_meta_stringdata_JoyAxis = {
    {
QT_MOC_LITERAL(0, 0, 7), // "JoyAxis"
QT_MOC_LITERAL(1, 8, 6), // "active"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "value"
QT_MOC_LITERAL(4, 22, 8), // "released"
QT_MOC_LITERAL(5, 31, 5), // "moved"
QT_MOC_LITERAL(6, 37, 24), // "throttleChangePropogated"
QT_MOC_LITERAL(7, 62, 5), // "index"
QT_MOC_LITERAL(8, 68, 15), // "throttleChanged"
QT_MOC_LITERAL(9, 84, 15), // "axisNameChanged"
QT_MOC_LITERAL(10, 100, 15), // "propertyUpdated"
QT_MOC_LITERAL(11, 116, 20), // "hapticTriggerChanged"
QT_MOC_LITERAL(12, 137, 5), // "reset"
QT_MOC_LITERAL(13, 143, 23), // "propogateThrottleChange"
QT_MOC_LITERAL(14, 167, 11), // "setDeadZone"
QT_MOC_LITERAL(15, 179, 15), // "setMaxZoneValue"
QT_MOC_LITERAL(16, 195, 11), // "setAxisName"
QT_MOC_LITERAL(17, 207, 8), // "tempName"
QT_MOC_LITERAL(18, 216, 30), // "setButtonsSpringRelativeStatus"
QT_MOC_LITERAL(19, 247, 24), // "setButtonsEasingDuration"
QT_MOC_LITERAL(20, 272, 34), // "establishPropertyUpdatedConne..."
QT_MOC_LITERAL(21, 307, 35) // "disconnectPropertyUpdatedConn..."

    },
    "JoyAxis\0active\0\0value\0released\0moved\0"
    "throttleChangePropogated\0index\0"
    "throttleChanged\0axisNameChanged\0"
    "propertyUpdated\0hapticTriggerChanged\0"
    "reset\0propogateThrottleChange\0setDeadZone\0"
    "setMaxZoneValue\0setAxisName\0tempName\0"
    "setButtonsSpringRelativeStatus\0"
    "setButtonsEasingDuration\0"
    "establishPropertyUpdatedConnection\0"
    "disconnectPropertyUpdatedConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyAxis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       8,    0,  116,    2, 0x06 /* Public */,
       9,    0,  117,    2, 0x06 /* Public */,
      10,    0,  118,    2, 0x06 /* Public */,
      11,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  120,    2, 0x0a /* Public */,
      12,    1,  121,    2, 0x0a /* Public */,
      13,    0,  124,    2, 0x0a /* Public */,
      14,    1,  125,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x0a /* Public */,
      16,    1,  131,    2, 0x0a /* Public */,
      18,    1,  134,    2, 0x0a /* Public */,
      19,    1,  137,    2, 0x0a /* Public */,
      20,    0,  140,    2, 0x0a /* Public */,
      21,    0,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->active((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->moved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->throttleChangePropogated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->throttleChanged(); break;
        case 5: _t->axisNameChanged(); break;
        case 6: _t->propertyUpdated(); break;
        case 7: _t->hapticTriggerChanged(); break;
        case 8: _t->reset(); break;
        case 9: _t->reset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->propogateThrottleChange(); break;
        case 11: _t->setDeadZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setMaxZoneValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setAxisName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->setButtonsSpringRelativeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setButtonsEasingDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->establishPropertyUpdatedConnection(); break;
        case 17: _t->disconnectPropertyUpdatedConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoyAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::active)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::released)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::moved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::throttleChangePropogated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::throttleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::axisNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::propertyUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (JoyAxis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoyAxis::hapticTriggerChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JoyAxis.data,
    qt_meta_data_JoyAxis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyAxis.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JoyAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void JoyAxis::active(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoyAxis::released(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoyAxis::moved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoyAxis::throttleChangePropogated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoyAxis::throttleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void JoyAxis::axisNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void JoyAxis::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void JoyAxis::hapticTriggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
