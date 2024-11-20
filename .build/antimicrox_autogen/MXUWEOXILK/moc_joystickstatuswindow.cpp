/****************************************************************************
** Meta object code from reading C++ file 'joystickstatuswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/joystickstatuswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joystickstatuswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoystickStatusWindow_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickStatusWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickStatusWindow_t qt_meta_stringdata_JoystickStatusWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "JoystickStatusWindow"
QT_MOC_LITERAL(1, 21, 19), // "restoreButtonStates"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "code"
QT_MOC_LITERAL(4, 47, 10), // "obliterate"
QT_MOC_LITERAL(5, 58, 25), // "updateAccelerometerValues"
QT_MOC_LITERAL(6, 84, 6), // "valueX"
QT_MOC_LITERAL(7, 91, 6), // "valueY"
QT_MOC_LITERAL(8, 98, 6), // "valueZ"
QT_MOC_LITERAL(9, 105, 21) // "updateGyroscopeValues"

    },
    "JoystickStatusWindow\0restoreButtonStates\0"
    "\0code\0obliterate\0updateAccelerometerValues\0"
    "valueX\0valueY\0valueZ\0updateGyroscopeValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickStatusWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    3,   38,    2, 0x08 /* Private */,
       9,    3,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,

       0        // eod
};

void JoystickStatusWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoystickStatusWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->restoreButtonStates((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->obliterate(); break;
        case 2: _t->updateAccelerometerValues((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 3: _t->updateGyroscopeValues((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoystickStatusWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_JoystickStatusWindow.data,
    qt_meta_data_JoystickStatusWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoystickStatusWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickStatusWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickStatusWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int JoystickStatusWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
