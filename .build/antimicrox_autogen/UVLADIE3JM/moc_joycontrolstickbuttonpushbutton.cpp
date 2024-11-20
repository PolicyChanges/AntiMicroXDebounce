/****************************************************************************
** Meta object code from reading C++ file 'joycontrolstickbuttonpushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joycontrolstickbuttonpushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joycontrolstickbuttonpushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyControlStickButtonPushButton_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyControlStickButtonPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyControlStickButtonPushButton_t qt_meta_stringdata_JoyControlStickButtonPushButton = {
    {
QT_MOC_LITERAL(0, 0, 31), // "JoyControlStickButtonPushButton"
QT_MOC_LITERAL(1, 32, 14), // "disableFlashes"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "enableFlashes"
QT_MOC_LITERAL(4, 62, 15), // "showContextMenu"
QT_MOC_LITERAL(5, 78, 5), // "point"
QT_MOC_LITERAL(6, 84, 10) // "isflashing"

    },
    "JoyControlStickButtonPushButton\0"
    "disableFlashes\0\0enableFlashes\0"
    "showContextMenu\0point\0isflashing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyControlStickButtonPushButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095001,

       0        // eod
};

void JoyControlStickButtonPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyControlStickButtonPushButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->disableFlashes(); break;
        case 1: _t->enableFlashes(); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JoyControlStickButtonPushButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isButtonFlashing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JoyControlStickButtonPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<FlashButtonWidget::staticMetaObject>(),
    qt_meta_stringdata_JoyControlStickButtonPushButton.data,
    qt_meta_data_JoyControlStickButtonPushButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyControlStickButtonPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyControlStickButtonPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyControlStickButtonPushButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButtonWidget::qt_metacast(_clname);
}

int JoyControlStickButtonPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButtonWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
