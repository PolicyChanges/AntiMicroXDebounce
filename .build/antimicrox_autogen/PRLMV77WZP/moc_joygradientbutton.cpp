/****************************************************************************
** Meta object code from reading C++ file 'joygradientbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joybuttontypes/joygradientbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joygradientbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyGradientButton_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyGradientButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyGradientButton_t qt_meta_stringdata_JoyGradientButton = {
    {
QT_MOC_LITERAL(0, 0, 17), // "JoyGradientButton"
QT_MOC_LITERAL(1, 18, 10), // "turboEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "wheelEventVertical"
QT_MOC_LITERAL(4, 49, 20) // "wheelEventHorizontal"

    },
    "JoyGradientButton\0turboEvent\0\0"
    "wheelEventVertical\0wheelEventHorizontal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyGradientButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyGradientButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyGradientButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->turboEvent(); break;
        case 1: _t->wheelEventVertical(); break;
        case 2: _t->wheelEventHorizontal(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject JoyGradientButton::staticMetaObject = { {
    QMetaObject::SuperData::link<JoyButton::staticMetaObject>(),
    qt_meta_stringdata_JoyGradientButton.data,
    qt_meta_data_JoyGradientButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyGradientButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyGradientButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyGradientButton.stringdata0))
        return static_cast<void*>(this);
    return JoyButton::qt_metacast(_clname);
}

int JoyGradientButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JoyButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
