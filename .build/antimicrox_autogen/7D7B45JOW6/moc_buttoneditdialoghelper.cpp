/****************************************************************************
** Meta object code from reading C++ file 'buttoneditdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/uihelpers/buttoneditdialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttoneditdialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ButtonEditDialogHelper_t {
    QByteArrayData data[10];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonEditDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonEditDialogHelper_t qt_meta_stringdata_ButtonEditDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ButtonEditDialogHelper"
QT_MOC_LITERAL(1, 23, 15), // "setAssignedSlot"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "code"
QT_MOC_LITERAL(4, 45, 33), // "JoyButtonSlot::JoySlotInputAc..."
QT_MOC_LITERAL(5, 79, 4), // "mode"
QT_MOC_LITERAL(6, 84, 5), // "alias"
QT_MOC_LITERAL(7, 90, 5), // "index"
QT_MOC_LITERAL(8, 96, 11), // "setUseTurbo"
QT_MOC_LITERAL(9, 108, 8) // "useTurbo"

    },
    "ButtonEditDialogHelper\0setAssignedSlot\0"
    "\0code\0JoyButtonSlot::JoySlotInputAction\0"
    "mode\0alias\0index\0setUseTurbo\0useTurbo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonEditDialogHelper[] = {

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
       1,    2,   49,    2, 0x0a /* Public */,
       1,    1,   54,    2, 0x2a /* Public | MethodCloned */,
       1,    3,   57,    2, 0x0a /* Public */,
       1,    2,   64,    2, 0x2a /* Public | MethodCloned */,
       1,    4,   69,    2, 0x0a /* Public */,
       1,    3,   78,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 4,    3,    6,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 4,    3,    6,    7,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void ButtonEditDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonEditDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[2]))); break;
        case 1: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[3]))); break;
        case 3: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[4]))); break;
        case 5: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->setUseTurbo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ButtonEditDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ButtonEditDialogHelper.data,
    qt_meta_data_ButtonEditDialogHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ButtonEditDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonEditDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonEditDialogHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ButtonEditDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
