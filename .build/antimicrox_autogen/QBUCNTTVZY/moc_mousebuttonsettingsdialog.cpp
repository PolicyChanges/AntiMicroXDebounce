/****************************************************************************
** Meta object code from reading C++ file 'mousebuttonsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/mousedialog/mousebuttonsettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousebuttonsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MouseButtonSettingsDialog_t {
    QByteArrayData data[13];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MouseButtonSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MouseButtonSettingsDialog_t qt_meta_stringdata_MouseButtonSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "MouseButtonSettingsDialog"
QT_MOC_LITERAL(1, 26, 15), // "changeMouseMode"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 16), // "changeMouseCurve"
QT_MOC_LITERAL(5, 66, 27), // "updateConfigHorizontalSpeed"
QT_MOC_LITERAL(6, 94, 5), // "value"
QT_MOC_LITERAL(7, 100, 25), // "updateConfigVerticalSpeed"
QT_MOC_LITERAL(8, 126, 17), // "updateSpringWidth"
QT_MOC_LITERAL(9, 144, 18), // "updateSpringHeight"
QT_MOC_LITERAL(10, 163, 17), // "updateSensitivity"
QT_MOC_LITERAL(11, 181, 37), // "updateAccelerationCurvePreset..."
QT_MOC_LITERAL(12, 219, 28) // "updateExtraAccelerationCurve"

    },
    "MouseButtonSettingsDialog\0changeMouseMode\0"
    "\0index\0changeMouseCurve\0"
    "updateConfigHorizontalSpeed\0value\0"
    "updateConfigVerticalSpeed\0updateSpringWidth\0"
    "updateSpringHeight\0updateSensitivity\0"
    "updateAccelerationCurvePresetComboBox\0"
    "updateExtraAccelerationCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseButtonSettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       5,    1,   65,    2, 0x0a /* Public */,
       7,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MouseButtonSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MouseButtonSettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeMouseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeMouseCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateConfigHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateConfigVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateSpringWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateSpringHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateSensitivity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateAccelerationCurvePresetComboBox(); break;
        case 8: _t->updateExtraAccelerationCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MouseButtonSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MouseSettingsDialog::staticMetaObject>(),
    qt_meta_stringdata_MouseButtonSettingsDialog.data,
    qt_meta_data_MouseButtonSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MouseButtonSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseButtonSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MouseButtonSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return MouseSettingsDialog::qt_metacast(_clname);
}

int MouseButtonSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MouseSettingsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
