/****************************************************************************
** Meta object code from reading C++ file 'joycontrolstickeditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/joycontrolstickeditdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joycontrolstickeditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyControlStickEditDialog_t {
    QByteArrayData data[19];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyControlStickEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyControlStickEditDialog_t qt_meta_stringdata_JoyControlStickEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "JoyControlStickEditDialog"
QT_MOC_LITERAL(1, 26, 16), // "implementPresets"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "index"
QT_MOC_LITERAL(4, 50, 14), // "implementModes"
QT_MOC_LITERAL(5, 65, 17), // "refreshStickStats"
QT_MOC_LITERAL(6, 83, 1), // "x"
QT_MOC_LITERAL(7, 85, 1), // "y"
QT_MOC_LITERAL(8, 87, 15), // "updateMouseMode"
QT_MOC_LITERAL(9, 103, 12), // "checkMaxZone"
QT_MOC_LITERAL(10, 116, 5), // "value"
QT_MOC_LITERAL(11, 122, 23), // "openMouseSettingsDialog"
QT_MOC_LITERAL(12, 146, 24), // "enableMouseSettingButton"
QT_MOC_LITERAL(13, 171, 26), // "updateWindowTitleStickName"
QT_MOC_LITERAL(14, 198, 18), // "changeCircleAdjust"
QT_MOC_LITERAL(15, 217, 23), // "updateStickDelaySpinBox"
QT_MOC_LITERAL(16, 241, 22), // "updateStickDelaySlider"
QT_MOC_LITERAL(17, 264, 22), // "openModifierEditDialog"
QT_MOC_LITERAL(18, 287, 21) // "changeModifierSummary"

    },
    "JoyControlStickEditDialog\0implementPresets\0"
    "\0index\0implementModes\0refreshStickStats\0"
    "x\0y\0updateMouseMode\0checkMaxZone\0value\0"
    "openMouseSettingsDialog\0"
    "enableMouseSettingButton\0"
    "updateWindowTitleStickName\0"
    "changeCircleAdjust\0updateStickDelaySpinBox\0"
    "updateStickDelaySlider\0openModifierEditDialog\0"
    "changeModifierSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyControlStickEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    2,   85,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
       9,    1,   93,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      16,    1,  105,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyControlStickEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyControlStickEditDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->implementPresets((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->implementModes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->refreshStickStats((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateMouseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->checkMaxZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->openMouseSettingsDialog(); break;
        case 6: _t->enableMouseSettingButton(); break;
        case 7: _t->updateWindowTitleStickName(); break;
        case 8: _t->changeCircleAdjust((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateStickDelaySpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateStickDelaySlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->openModifierEditDialog(); break;
        case 12: _t->changeModifierSummary(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyControlStickEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_JoyControlStickEditDialog.data,
    qt_meta_data_JoyControlStickEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyControlStickEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyControlStickEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyControlStickEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int JoyControlStickEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
