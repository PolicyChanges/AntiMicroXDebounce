/****************************************************************************
** Meta object code from reading C++ file 'joyaxiscontextmenuhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/uihelpers/joyaxiscontextmenuhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joyaxiscontextmenuhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyAxisContextMenuHelper_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyAxisContextMenuHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyAxisContextMenuHelper_t qt_meta_stringdata_JoyAxisContextMenuHelper = {
    {
QT_MOC_LITERAL(0, 0, 24), // "JoyAxisContextMenuHelper"
QT_MOC_LITERAL(1, 25, 16), // "setNAssignedSlot"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "code"
QT_MOC_LITERAL(4, 48, 5), // "alias"
QT_MOC_LITERAL(5, 54, 33), // "JoyButtonSlot::JoySlotInputAc..."
QT_MOC_LITERAL(6, 88, 4), // "mode"
QT_MOC_LITERAL(7, 93, 16), // "setPAssignedSlot"
QT_MOC_LITERAL(8, 110, 24) // "clearAndResetAxisButtons"

    },
    "JoyAxisContextMenuHelper\0setNAssignedSlot\0"
    "\0code\0alias\0JoyButtonSlot::JoySlotInputAction\0"
    "mode\0setPAssignedSlot\0clearAndResetAxisButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyAxisContextMenuHelper[] = {

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
       1,    3,   39,    2, 0x0a /* Public */,
       1,    2,   46,    2, 0x2a /* Public | MethodCloned */,
       7,    3,   51,    2, 0x0a /* Public */,
       7,    2,   58,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void JoyAxisContextMenuHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyAxisContextMenuHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setNAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[3]))); break;
        case 1: _t->setNAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setPAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[3]))); break;
        case 3: _t->setPAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->clearAndResetAxisButtons(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyAxisContextMenuHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JoyAxisContextMenuHelper.data,
    qt_meta_data_JoyAxisContextMenuHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyAxisContextMenuHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyAxisContextMenuHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyAxisContextMenuHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JoyAxisContextMenuHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
