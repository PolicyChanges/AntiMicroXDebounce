/****************************************************************************
** Meta object code from reading C++ file 'joycontrolstickcontextmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joycontrolstickcontextmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joycontrolstickcontextmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyControlStickContextMenu_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyControlStickContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyControlStickContextMenu_t qt_meta_stringdata_JoyControlStickContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 26), // "JoyControlStickContextMenu"
QT_MOC_LITERAL(1, 27, 14), // "setStickPreset"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "QAction*"
QT_MOC_LITERAL(4, 52, 6), // "action"
QT_MOC_LITERAL(5, 59, 12), // "setStickMode"
QT_MOC_LITERAL(6, 72, 23) // "openMouseSettingsDialog"

    },
    "JoyControlStickContextMenu\0setStickPreset\0"
    "\0QAction*\0action\0setStickMode\0"
    "openMouseSettingsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyControlStickContextMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void JoyControlStickContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyControlStickContextMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setStickPreset((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->setStickMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->openMouseSettingsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyControlStickContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_JoyControlStickContextMenu.data,
    qt_meta_data_JoyControlStickContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyControlStickContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyControlStickContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyControlStickContextMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int JoyControlStickContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
