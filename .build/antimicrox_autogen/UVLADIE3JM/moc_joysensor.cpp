/****************************************************************************
** Meta object code from reading C++ file 'joysensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joysensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joysensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoySensor_t {
    QByteArrayData data[24];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoySensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoySensor_t qt_meta_stringdata_JoySensor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "JoySensor"
QT_MOC_LITERAL(1, 10, 5), // "moved"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "xaxis"
QT_MOC_LITERAL(4, 23, 5), // "yaxis"
QT_MOC_LITERAL(5, 29, 5), // "zaxis"
QT_MOC_LITERAL(6, 35, 6), // "active"
QT_MOC_LITERAL(7, 42, 8), // "released"
QT_MOC_LITERAL(8, 51, 15), // "deadZoneChanged"
QT_MOC_LITERAL(9, 67, 5), // "value"
QT_MOC_LITERAL(10, 73, 20), // "diagonalRangeChanged"
QT_MOC_LITERAL(11, 94, 14), // "maxZoneChanged"
QT_MOC_LITERAL(12, 109, 18), // "sensorDelayChanged"
QT_MOC_LITERAL(13, 128, 17), // "sensorNameChanged"
QT_MOC_LITERAL(14, 146, 15), // "propertyUpdated"
QT_MOC_LITERAL(15, 162, 5), // "reset"
QT_MOC_LITERAL(16, 168, 11), // "setDeadZone"
QT_MOC_LITERAL(17, 180, 10), // "setMaxZone"
QT_MOC_LITERAL(18, 191, 16), // "setDiagonalRange"
QT_MOC_LITERAL(19, 208, 14), // "setSensorDelay"
QT_MOC_LITERAL(20, 223, 13), // "setSensorName"
QT_MOC_LITERAL(21, 237, 8), // "tempName"
QT_MOC_LITERAL(22, 246, 34), // "establishPropertyUpdatedConne..."
QT_MOC_LITERAL(23, 281, 17) // "delayTimerExpired"

    },
    "JoySensor\0moved\0\0xaxis\0yaxis\0zaxis\0"
    "active\0released\0deadZoneChanged\0value\0"
    "diagonalRangeChanged\0maxZoneChanged\0"
    "sensorDelayChanged\0sensorNameChanged\0"
    "propertyUpdated\0reset\0setDeadZone\0"
    "setMaxZone\0setDiagonalRange\0setSensorDelay\0"
    "setSensorName\0tempName\0"
    "establishPropertyUpdatedConnection\0"
    "delayTimerExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoySensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   99,    2, 0x06 /* Public */,
       6,    3,  106,    2, 0x06 /* Public */,
       7,    3,  113,    2, 0x06 /* Public */,
       8,    1,  120,    2, 0x06 /* Public */,
      10,    1,  123,    2, 0x06 /* Public */,
      11,    1,  126,    2, 0x06 /* Public */,
      12,    1,  129,    2, 0x06 /* Public */,
      13,    0,  132,    2, 0x06 /* Public */,
      14,    0,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  134,    2, 0x0a /* Public */,
      16,    1,  135,    2, 0x0a /* Public */,
      17,    1,  138,    2, 0x0a /* Public */,
      18,    1,  141,    2, 0x0a /* Public */,
      19,    1,  144,    2, 0x0a /* Public */,
      20,    1,  147,    2, 0x0a /* Public */,
      22,    0,  150,    2, 0x0a /* Public */,
      23,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoySensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoySensor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->active((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->released((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 3: _t->deadZoneChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->diagonalRangeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->maxZoneChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->sensorDelayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sensorNameChanged(); break;
        case 8: _t->propertyUpdated(); break;
        case 9: _t->reset(); break;
        case 10: _t->setDeadZone((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setMaxZone((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setDiagonalRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setSensorDelay((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->setSensorName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->establishPropertyUpdatedConnection(); break;
        case 16: _t->delayTimerExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoySensor::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::moved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::active)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::released)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::deadZoneChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::diagonalRangeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::maxZoneChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::sensorDelayChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::sensorNameChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (JoySensor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensor::propertyUpdated)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoySensor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JoySensor.data,
    qt_meta_data_JoySensor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoySensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoySensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoySensor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JoySensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void JoySensor::moved(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoySensor::active(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoySensor::released(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoySensor::deadZoneChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoySensor::diagonalRangeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoySensor::maxZoneChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoySensor::sensorDelayChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoySensor::sensorNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void JoySensor::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
