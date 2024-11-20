/****************************************************************************
** Meta object code from reading C++ file 'sensorpushbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/sensorpushbuttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensorpushbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SensorPushButtonGroup_t {
    QByteArrayData data[9];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SensorPushButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SensorPushButtonGroup_t qt_meta_stringdata_SensorPushButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SensorPushButtonGroup"
QT_MOC_LITERAL(1, 22, 17), // "buttonSlotChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "toggleNameDisplay"
QT_MOC_LITERAL(4, 59, 21), // "propagateSlotsChanged"
QT_MOC_LITERAL(5, 81, 22), // "openSensorButtonDialog"
QT_MOC_LITERAL(6, 104, 26), // "JoySensorButtonPushButton*"
QT_MOC_LITERAL(7, 131, 10), // "pushbutton"
QT_MOC_LITERAL(8, 142, 16) // "showSensorDialog"

    },
    "SensorPushButtonGroup\0buttonSlotChanged\0"
    "\0toggleNameDisplay\0propagateSlotsChanged\0"
    "openSensorButtonDialog\0"
    "JoySensorButtonPushButton*\0pushbutton\0"
    "showSensorDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SensorPushButtonGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void SensorPushButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SensorPushButtonGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonSlotChanged(); break;
        case 1: _t->toggleNameDisplay(); break;
        case 2: _t->propagateSlotsChanged(); break;
        case 3: _t->openSensorButtonDialog((*reinterpret_cast< JoySensorButtonPushButton*(*)>(_a[1]))); break;
        case 4: _t->showSensorDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SensorPushButtonGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorPushButtonGroup::buttonSlotChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SensorPushButtonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QGridLayout::staticMetaObject>(),
    qt_meta_stringdata_SensorPushButtonGroup.data,
    qt_meta_data_SensorPushButtonGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SensorPushButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SensorPushButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SensorPushButtonGroup.stringdata0))
        return static_cast<void*>(this);
    return QGridLayout::qt_metacast(_clname);
}

int SensorPushButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGridLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SensorPushButtonGroup::buttonSlotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
