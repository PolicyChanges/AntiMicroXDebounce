/****************************************************************************
** Meta object code from reading C++ file 'dpadpushbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/dpadpushbuttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpadpushbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DPadPushButtonGroup_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DPadPushButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DPadPushButtonGroup_t qt_meta_stringdata_DPadPushButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DPadPushButtonGroup"
QT_MOC_LITERAL(1, 20, 17), // "buttonSlotChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "changeButtonLayout"
QT_MOC_LITERAL(4, 58, 17), // "toggleNameDisplay"
QT_MOC_LITERAL(5, 76, 21), // "propogateSlotsChanged"
QT_MOC_LITERAL(6, 98, 20), // "openDPadButtonDialog"
QT_MOC_LITERAL(7, 119, 16), // "JoyButtonWidget*"
QT_MOC_LITERAL(8, 136, 12), // "buttonWidget"
QT_MOC_LITERAL(9, 149, 14) // "showDPadDialog"

    },
    "DPadPushButtonGroup\0buttonSlotChanged\0"
    "\0changeButtonLayout\0toggleNameDisplay\0"
    "propogateSlotsChanged\0openDPadButtonDialog\0"
    "JoyButtonWidget*\0buttonWidget\0"
    "showDPadDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DPadPushButtonGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void DPadPushButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DPadPushButtonGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonSlotChanged(); break;
        case 1: _t->changeButtonLayout(); break;
        case 2: _t->toggleNameDisplay(); break;
        case 3: _t->propogateSlotsChanged(); break;
        case 4: _t->openDPadButtonDialog((*reinterpret_cast< JoyButtonWidget*(*)>(_a[1]))); break;
        case 5: _t->showDPadDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DPadPushButtonGroup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DPadPushButtonGroup::buttonSlotChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DPadPushButtonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QGridLayout::staticMetaObject>(),
    qt_meta_stringdata_DPadPushButtonGroup.data,
    qt_meta_data_DPadPushButtonGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DPadPushButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DPadPushButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DPadPushButtonGroup.stringdata0))
        return static_cast<void*>(this);
    return QGridLayout::qt_metacast(_clname);
}

int DPadPushButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGridLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DPadPushButtonGroup::buttonSlotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
