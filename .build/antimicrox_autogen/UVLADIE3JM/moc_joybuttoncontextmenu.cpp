/****************************************************************************
** Meta object code from reading C++ file 'joybuttoncontextmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/joybuttoncontextmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joybuttoncontextmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyButtonContextMenu_t {
    QByteArrayData data[19];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyButtonContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyButtonContextMenu_t qt_meta_stringdata_JoyButtonContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 20), // "JoyButtonContextMenu"
QT_MOC_LITERAL(1, 21, 12), // "switchToggle"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "switchTurbo"
QT_MOC_LITERAL(4, 47, 13), // "switchSetMode"
QT_MOC_LITERAL(5, 61, 8), // "QAction*"
QT_MOC_LITERAL(6, 70, 6), // "action"
QT_MOC_LITERAL(7, 77, 14), // "disableSetMode"
QT_MOC_LITERAL(8, 92, 11), // "clearButton"
QT_MOC_LITERAL(9, 104, 20), // "createActionForGroup"
QT_MOC_LITERAL(10, 125, 13), // "QActionGroup*"
QT_MOC_LITERAL(11, 139, 9), // "tempGroup"
QT_MOC_LITERAL(12, 149, 10), // "actionText"
QT_MOC_LITERAL(13, 160, 6), // "QMenu*"
QT_MOC_LITERAL(14, 167, 11), // "tempSetMenu"
QT_MOC_LITERAL(15, 179, 12), // "setSelection"
QT_MOC_LITERAL(16, 192, 16), // "currentSelection"
QT_MOC_LITERAL(17, 209, 10), // "setDataInc"
QT_MOC_LITERAL(18, 220, 12) // "setCondition"

    },
    "JoyButtonContextMenu\0switchToggle\0\0"
    "switchTurbo\0switchSetMode\0QAction*\0"
    "action\0disableSetMode\0clearButton\0"
    "createActionForGroup\0QActionGroup*\0"
    "tempGroup\0actionText\0QMenu*\0tempSetMenu\0"
    "setSelection\0currentSelection\0setDataInc\0"
    "setCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyButtonContextMenu[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    8,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 13, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,    6,   14,   15,   16,   17,   18,

       0        // eod
};

void JoyButtonContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyButtonContextMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->switchToggle(); break;
        case 1: _t->switchTurbo(); break;
        case 2: _t->switchSetMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->disableSetMode(); break;
        case 4: _t->clearButton(); break;
        case 5: _t->createActionForGroup((*reinterpret_cast< QActionGroup*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3])),(*reinterpret_cast< QMenu*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QActionGroup* >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyButtonContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_JoyButtonContextMenu.data,
    qt_meta_data_JoyButtonContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyButtonContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyButtonContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyButtonContextMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int JoyButtonContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
