/****************************************************************************
** Meta object code from reading C++ file 'quicksetdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/quicksetdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quicksetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QuickSetDialog_t {
    QByteArrayData data[14];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickSetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickSetDialog_t qt_meta_stringdata_QuickSetDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QuickSetDialog"
QT_MOC_LITERAL(1, 15, 20), // "showAxisButtonDialog"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "JoyAxisButton*"
QT_MOC_LITERAL(4, 52, 6), // "joybtn"
QT_MOC_LITERAL(5, 59, 16), // "showButtonDialog"
QT_MOC_LITERAL(6, 76, 10), // "JoyButton*"
QT_MOC_LITERAL(7, 87, 21), // "showStickButtonDialog"
QT_MOC_LITERAL(8, 109, 22), // "JoyControlStickButton*"
QT_MOC_LITERAL(9, 132, 15), // "joyctrlstickbtn"
QT_MOC_LITERAL(10, 148, 20), // "showDPadButtonDialog"
QT_MOC_LITERAL(11, 169, 14), // "JoyDPadButton*"
QT_MOC_LITERAL(12, 184, 10), // "joydpadbtn"
QT_MOC_LITERAL(13, 195, 20) // "restoreJoystickState"

    },
    "QuickSetDialog\0showAxisButtonDialog\0"
    "\0JoyAxisButton*\0joybtn\0showButtonDialog\0"
    "JoyButton*\0showStickButtonDialog\0"
    "JoyControlStickButton*\0joyctrlstickbtn\0"
    "showDPadButtonDialog\0JoyDPadButton*\0"
    "joydpadbtn\0restoreJoystickState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickSetDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
      10,    1,   48,    2, 0x08 /* Private */,
      13,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void QuickSetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickSetDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showAxisButtonDialog((*reinterpret_cast< JoyAxisButton*(*)>(_a[1]))); break;
        case 1: _t->showButtonDialog((*reinterpret_cast< JoyButton*(*)>(_a[1]))); break;
        case 2: _t->showStickButtonDialog((*reinterpret_cast< JoyControlStickButton*(*)>(_a[1]))); break;
        case 3: _t->showDPadButtonDialog((*reinterpret_cast< JoyDPadButton*(*)>(_a[1]))); break;
        case 4: _t->restoreJoystickState(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QuickSetDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QuickSetDialog.data,
    qt_meta_data_QuickSetDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuickSetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickSetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickSetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QuickSetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
