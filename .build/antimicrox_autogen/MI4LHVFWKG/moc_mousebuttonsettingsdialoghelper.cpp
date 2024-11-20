/****************************************************************************
** Meta object code from reading C++ file 'mousebuttonsettingsdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/mousedialog/uihelpers/mousebuttonsettingsdialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousebuttonsettingsdialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MouseButtonSettingsDialogHelper_t {
    QByteArrayData data[12];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MouseButtonSettingsDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MouseButtonSettingsDialogHelper_t qt_meta_stringdata_MouseButtonSettingsDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MouseButtonSettingsDialogHelper"
QT_MOC_LITERAL(1, 32, 29), // "updateExtraAccelerationStatus"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 7), // "checked"
QT_MOC_LITERAL(4, 71, 33), // "updateExtraAccelerationMultip..."
QT_MOC_LITERAL(5, 105, 5), // "value"
QT_MOC_LITERAL(6, 111, 26), // "updateStartMultiPercentage"
QT_MOC_LITERAL(7, 138, 23), // "updateMinAccelThreshold"
QT_MOC_LITERAL(8, 162, 23), // "updateMaxAccelThreshold"
QT_MOC_LITERAL(9, 186, 24), // "updateAccelExtraDuration"
QT_MOC_LITERAL(10, 211, 25), // "updateReleaseSpringRadius"
QT_MOC_LITERAL(11, 237, 26) // "updateSpringRelativeStatus"

    },
    "MouseButtonSettingsDialogHelper\0"
    "updateExtraAccelerationStatus\0\0checked\0"
    "updateExtraAccelerationMultiplier\0"
    "value\0updateStartMultiPercentage\0"
    "updateMinAccelThreshold\0updateMaxAccelThreshold\0"
    "updateAccelExtraDuration\0"
    "updateReleaseSpringRadius\0"
    "updateSpringRelativeStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseButtonSettingsDialogHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void MouseButtonSettingsDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MouseButtonSettingsDialogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateExtraAccelerationStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateExtraAccelerationMultiplier((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->updateStartMultiPercentage((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->updateMinAccelThreshold((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateMaxAccelThreshold((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->updateAccelExtraDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->updateReleaseSpringRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateSpringRelativeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MouseButtonSettingsDialogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MouseButtonSettingsDialogHelper.data,
    qt_meta_data_MouseButtonSettingsDialogHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MouseButtonSettingsDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseButtonSettingsDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MouseButtonSettingsDialogHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MouseButtonSettingsDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
