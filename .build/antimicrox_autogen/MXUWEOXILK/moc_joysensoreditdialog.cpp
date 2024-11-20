/****************************************************************************
** Meta object code from reading C++ file 'joysensoreditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/joysensoreditdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joysensoreditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoySensorEditDialog_t {
    QByteArrayData data[15];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoySensorEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoySensorEditDialog_t qt_meta_stringdata_JoySensorEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "JoySensorEditDialog"
QT_MOC_LITERAL(1, 20, 16), // "implementPresets"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 23), // "openMouseSettingsDialog"
QT_MOC_LITERAL(5, 68, 24), // "enableMouseSettingButton"
QT_MOC_LITERAL(6, 93, 17), // "updateSensorStats"
QT_MOC_LITERAL(7, 111, 1), // "x"
QT_MOC_LITERAL(8, 113, 1), // "y"
QT_MOC_LITERAL(9, 115, 1), // "z"
QT_MOC_LITERAL(10, 117, 27), // "updateWindowTitleSensorName"
QT_MOC_LITERAL(11, 145, 24), // "updateSensorDelaySpinBox"
QT_MOC_LITERAL(12, 170, 5), // "value"
QT_MOC_LITERAL(13, 176, 23), // "updateSensorDelaySlider"
QT_MOC_LITERAL(14, 200, 14) // "setSensorDelay"

    },
    "JoySensorEditDialog\0implementPresets\0"
    "\0index\0openMouseSettingsDialog\0"
    "enableMouseSettingButton\0updateSensorStats\0"
    "x\0y\0z\0updateWindowTitleSensorName\0"
    "updateSensorDelaySpinBox\0value\0"
    "updateSensorDelaySlider\0setSensorDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoySensorEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    3,   59,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      14,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   12,

       0        // eod
};

void JoySensorEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoySensorEditDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->implementPresets((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->openMouseSettingsDialog(); break;
        case 2: _t->enableMouseSettingButton(); break;
        case 3: _t->updateSensorStats((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->updateWindowTitleSensorName(); break;
        case 5: _t->updateSensorDelaySpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateSensorDelaySlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setSensorDelay((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoySensorEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_JoySensorEditDialog.data,
    qt_meta_data_JoySensorEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoySensorEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoySensorEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoySensorEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int JoySensorEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
