/****************************************************************************
** Meta object code from reading C++ file 'gamecontrollermappingdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/uihelpers/gamecontrollermappingdialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecontrollermappingdialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameControllerMappingDialogHelper_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameControllerMappingDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameControllerMappingDialogHelper_t qt_meta_stringdata_GameControllerMappingDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 33), // "GameControllerMappingDialogHe..."
QT_MOC_LITERAL(1, 34, 14), // "raiseDeadZones"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "deadZone"
QT_MOC_LITERAL(4, 59, 14), // "setupDeadZones"
QT_MOC_LITERAL(5, 74, 22) // "restoreDeviceDeadZones"

    },
    "GameControllerMappingDialogHelper\0"
    "raiseDeadZones\0\0deadZone\0setupDeadZones\0"
    "restoreDeviceDeadZones"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameControllerMappingDialogHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       1,    1,   35,    2, 0x0a /* Public */,
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameControllerMappingDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameControllerMappingDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->raiseDeadZones(); break;
        case 1: _t->raiseDeadZones((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setupDeadZones(); break;
        case 3: _t->restoreDeviceDeadZones(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameControllerMappingDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameControllerMappingDialogHelper.data,
    qt_meta_data_GameControllerMappingDialogHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameControllerMappingDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameControllerMappingDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameControllerMappingDialogHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameControllerMappingDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
