/****************************************************************************
** Meta object code from reading C++ file 'axisvaluebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/axisvaluebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'axisvaluebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AxisValueBox_t {
    QByteArrayData data[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AxisValueBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AxisValueBox_t qt_meta_stringdata_AxisValueBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AxisValueBox"
QT_MOC_LITERAL(1, 13, 11), // "setThrottle"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "throttle"
QT_MOC_LITERAL(4, 35, 8), // "setValue"
QT_MOC_LITERAL(5, 44, 5), // "value"
QT_MOC_LITERAL(6, 50, 8), // "JoyAxis*"
QT_MOC_LITERAL(7, 59, 4), // "axis"
QT_MOC_LITERAL(8, 64, 11), // "setDeadZone"
QT_MOC_LITERAL(9, 76, 8), // "deadZone"
QT_MOC_LITERAL(10, 85, 10), // "setMaxZone"
QT_MOC_LITERAL(11, 96, 7) // "maxZone"

    },
    "AxisValueBox\0setThrottle\0\0throttle\0"
    "setValue\0value\0JoyAxis*\0axis\0setDeadZone\0"
    "deadZone\0setMaxZone\0maxZone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AxisValueBox[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       4,    2,   55,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       8,    2,   63,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      10,    2,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    9,

       0        // eod
};

void AxisValueBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AxisValueBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setThrottle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< JoyAxis*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setDeadZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDeadZone((*reinterpret_cast< JoyAxis*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setMaxZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setMaxZone((*reinterpret_cast< JoyAxis*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AxisValueBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AxisValueBox.data,
    qt_meta_data_AxisValueBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AxisValueBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AxisValueBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AxisValueBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AxisValueBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
