/****************************************************************************
** Meta object code from reading C++ file 'dpadeditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/dpadeditdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpadeditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DPadEditDialog_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DPadEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DPadEditDialog_t qt_meta_stringdata_DPadEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DPadEditDialog"
QT_MOC_LITERAL(1, 15, 16), // "implementPresets"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 14), // "implementModes"
QT_MOC_LITERAL(5, 54, 23), // "openMouseSettingsDialog"
QT_MOC_LITERAL(6, 78, 24), // "enableMouseSettingButton"
QT_MOC_LITERAL(7, 103, 25), // "updateWindowTitleDPadName"
QT_MOC_LITERAL(8, 129, 22), // "updateDPadDelaySpinBox"
QT_MOC_LITERAL(9, 152, 5), // "value"
QT_MOC_LITERAL(10, 158, 21) // "updateDPadDelaySlider"

    },
    "DPadEditDialog\0implementPresets\0\0index\0"
    "implementModes\0openMouseSettingsDialog\0"
    "enableMouseSettingButton\0"
    "updateWindowTitleDPadName\0"
    "updateDPadDelaySpinBox\0value\0"
    "updateDPadDelaySlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DPadEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void DPadEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DPadEditDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->implementPresets((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->implementModes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->openMouseSettingsDialog(); break;
        case 3: _t->enableMouseSettingButton(); break;
        case 4: _t->updateWindowTitleDPadName(); break;
        case 5: _t->updateDPadDelaySpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateDPadDelaySlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DPadEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DPadEditDialog.data,
    qt_meta_data_DPadEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DPadEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DPadEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DPadEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DPadEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
