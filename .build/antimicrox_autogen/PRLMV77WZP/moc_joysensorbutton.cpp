/****************************************************************************
** Meta object code from reading C++ file 'joysensorbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joybuttontypes/joysensorbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joysensorbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoySensorButton_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoySensorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoySensorButton_t qt_meta_stringdata_JoySensorButton = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JoySensorButton"
QT_MOC_LITERAL(1, 16, 20), // "setAssignmentChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "JoySensorDirection"
QT_MOC_LITERAL(4, 57, 9), // "direction"
QT_MOC_LITERAL(5, 67, 13), // "JoySensorType"
QT_MOC_LITERAL(6, 81, 4), // "type"
QT_MOC_LITERAL(7, 86, 14), // "associated_set"
QT_MOC_LITERAL(8, 101, 4) // "mode"

    },
    "JoySensorButton\0setAssignmentChanged\0"
    "\0JoySensorDirection\0direction\0"
    "JoySensorType\0type\0associated_set\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoySensorButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    4,    6,    7,    8,

       0        // eod
};

void JoySensorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoySensorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAssignmentChanged((*reinterpret_cast< JoySensorDirection(*)>(_a[1])),(*reinterpret_cast< JoySensorType(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorDirection >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoySensorType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoySensorButton::*)(JoySensorDirection , JoySensorType , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoySensorButton::setAssignmentChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoySensorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<JoyGradientButton::staticMetaObject>(),
    qt_meta_stringdata_JoySensorButton.data,
    qt_meta_data_JoySensorButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoySensorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoySensorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoySensorButton.stringdata0))
        return static_cast<void*>(this);
    return JoyGradientButton::qt_metacast(_clname);
}

int JoySensorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JoyGradientButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void JoySensorButton::setAssignmentChanged(JoySensorDirection _t1, JoySensorType _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
