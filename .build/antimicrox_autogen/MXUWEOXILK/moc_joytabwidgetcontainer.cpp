/****************************************************************************
** Meta object code from reading C++ file 'joytabwidgetcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/joytabwidgetcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joytabwidgetcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoyTabWidgetContainer_t {
    QByteArrayData data[12];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoyTabWidgetContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoyTabWidgetContainer_t qt_meta_stringdata_JoyTabWidgetContainer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "JoyTabWidgetContainer"
QT_MOC_LITERAL(1, 22, 14), // "disableFlashes"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "InputDevice*"
QT_MOC_LITERAL(4, 51, 8), // "joystick"
QT_MOC_LITERAL(5, 60, 13), // "enableFlashes"
QT_MOC_LITERAL(6, 74, 5), // "flash"
QT_MOC_LITERAL(7, 80, 7), // "unflash"
QT_MOC_LITERAL(8, 88, 10), // "unflashAll"
QT_MOC_LITERAL(9, 99, 10), // "unflashTab"
QT_MOC_LITERAL(10, 110, 13), // "JoyTabWidget*"
QT_MOC_LITERAL(11, 124, 9) // "tabWidget"

    },
    "JoyTabWidgetContainer\0disableFlashes\0"
    "\0InputDevice*\0joystick\0enableFlashes\0"
    "flash\0unflash\0unflashAll\0unflashTab\0"
    "JoyTabWidget*\0tabWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyTabWidgetContainer[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void JoyTabWidgetContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoyTabWidgetContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->disableFlashes((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 1: _t->enableFlashes((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 2: _t->flash((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 3: _t->unflash((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 4: _t->unflashAll(); break;
        case 5: _t->unflashTab((*reinterpret_cast< JoyTabWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JoyTabWidgetContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_JoyTabWidgetContainer.data,
    qt_meta_data_JoyTabWidgetContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JoyTabWidgetContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyTabWidgetContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoyTabWidgetContainer.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int JoyTabWidgetContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
