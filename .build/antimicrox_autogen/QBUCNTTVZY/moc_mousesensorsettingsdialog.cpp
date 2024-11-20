/****************************************************************************
** Meta object code from reading C++ file 'mousesensorsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/mousedialog/mousesensorsettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousesensorsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MouseSensorSettingsDialog_t {
    QByteArrayData data[10];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MouseSensorSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MouseSensorSettingsDialog_t qt_meta_stringdata_MouseSensorSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "MouseSensorSettingsDialog"
QT_MOC_LITERAL(1, 26, 27), // "updateConfigHorizontalSpeed"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "value"
QT_MOC_LITERAL(4, 61, 25), // "updateConfigVerticalSpeed"
QT_MOC_LITERAL(5, 87, 31), // "updateWheelSpeedHorizontalSpeed"
QT_MOC_LITERAL(6, 119, 29), // "updateWheelSpeedVerticalSpeed"
QT_MOC_LITERAL(7, 149, 15), // "changeMouseMode"
QT_MOC_LITERAL(8, 165, 5), // "index"
QT_MOC_LITERAL(9, 171, 16) // "changeMouseCurve"

    },
    "MouseSensorSettingsDialog\0"
    "updateConfigHorizontalSpeed\0\0value\0"
    "updateConfigVerticalSpeed\0"
    "updateWheelSpeedHorizontalSpeed\0"
    "updateWheelSpeedVerticalSpeed\0"
    "changeMouseMode\0index\0changeMouseCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseSensorSettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void MouseSensorSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MouseSensorSettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateConfigHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateConfigVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateWheelSpeedHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateWheelSpeedVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeMouseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeMouseCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MouseSensorSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MouseSettingsDialog::staticMetaObject>(),
    qt_meta_stringdata_MouseSensorSettingsDialog.data,
    qt_meta_data_MouseSensorSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MouseSensorSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseSensorSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MouseSensorSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return MouseSettingsDialog::qt_metacast(_clname);
}

int MouseSensorSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MouseSettingsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
