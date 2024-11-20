/****************************************************************************
** Meta object code from reading C++ file 'calibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/calibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calibration_t {
    QByteArrayData data[22];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calibration_t qt_meta_stringdata_Calibration = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Calibration"
QT_MOC_LITERAL(1, 12, 15), // "propertyUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "saveSettings"
QT_MOC_LITERAL(4, 42, 29), // "startAccelerometerCalibration"
QT_MOC_LITERAL(5, 72, 34), // "startAccelerometerAngleCalibr..."
QT_MOC_LITERAL(6, 107, 25), // "startGyroscopeCalibration"
QT_MOC_LITERAL(7, 133, 31), // "startGyroscopeOffsetCalibration"
QT_MOC_LITERAL(8, 165, 27), // "startStickOffsetCalibration"
QT_MOC_LITERAL(9, 193, 25), // "startStickGainCalibration"
QT_MOC_LITERAL(10, 219, 10), // "closeEvent"
QT_MOC_LITERAL(11, 230, 12), // "QCloseEvent*"
QT_MOC_LITERAL(12, 243, 5), // "event"
QT_MOC_LITERAL(13, 249, 13), // "resetSettings"
QT_MOC_LITERAL(14, 263, 22), // "deviceSelectionChanged"
QT_MOC_LITERAL(15, 286, 5), // "index"
QT_MOC_LITERAL(16, 292, 18), // "onSensorOffsetData"
QT_MOC_LITERAL(17, 311, 1), // "x"
QT_MOC_LITERAL(18, 313, 1), // "y"
QT_MOC_LITERAL(19, 315, 1), // "z"
QT_MOC_LITERAL(20, 317, 17), // "onStickOffsetData"
QT_MOC_LITERAL(21, 335, 15) // "onStickGainData"

    },
    "Calibration\0propertyUpdated\0\0saveSettings\0"
    "startAccelerometerCalibration\0"
    "startAccelerometerAngleCalibration\0"
    "startGyroscopeCalibration\0"
    "startGyroscopeOffsetCalibration\0"
    "startStickOffsetCalibration\0"
    "startStickGainCalibration\0closeEvent\0"
    "QCloseEvent*\0event\0resetSettings\0"
    "deviceSelectionChanged\0index\0"
    "onSensorOffsetData\0x\0y\0z\0onStickOffsetData\0"
    "onStickGainData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calibration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    1,   92,    2, 0x09 /* Protected */,
      13,    0,   95,    2, 0x09 /* Protected */,
      14,    1,   96,    2, 0x09 /* Protected */,
      16,    3,   99,    2, 0x09 /* Protected */,
      20,    2,  106,    2, 0x09 /* Protected */,
      21,    2,  111,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   17,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,

       0        // eod
};

void Calibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calibration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertyUpdated(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->startAccelerometerCalibration(); break;
        case 3: _t->startAccelerometerAngleCalibration(); break;
        case 4: _t->startGyroscopeCalibration(); break;
        case 5: _t->startGyroscopeOffsetCalibration(); break;
        case 6: _t->startStickOffsetCalibration(); break;
        case 7: _t->startStickGainCalibration(); break;
        case 8: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 9: _t->resetSettings(); break;
        case 10: _t->deviceSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onSensorOffsetData((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 12: _t->onStickOffsetData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->onStickGainData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Calibration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::propertyUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calibration::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Calibration.data,
    qt_meta_data_Calibration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calibration.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Calibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Calibration::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
