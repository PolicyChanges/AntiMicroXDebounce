/****************************************************************************
** Meta object code from reading C++ file 'localantimicroserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/localantimicroserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localantimicroserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalAntiMicroServer_t {
    QByteArrayData data[8];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalAntiMicroServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalAntiMicroServer_t qt_meta_stringdata_LocalAntiMicroServer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LocalAntiMicroServer"
QT_MOC_LITERAL(1, 21, 16), // "clientdisconnect"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "showHiddenWindow"
QT_MOC_LITERAL(4, 56, 16), // "startLocalServer"
QT_MOC_LITERAL(5, 73, 23), // "handleOutsideConnection"
QT_MOC_LITERAL(6, 97, 22), // "handleSocketDisconnect"
QT_MOC_LITERAL(7, 120, 5) // "close"

    },
    "LocalAntiMicroServer\0clientdisconnect\0"
    "\0showHiddenWindow\0startLocalServer\0"
    "handleOutsideConnection\0handleSocketDisconnect\0"
    "close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalAntiMicroServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LocalAntiMicroServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalAntiMicroServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clientdisconnect(); break;
        case 1: _t->showHiddenWindow(); break;
        case 2: _t->startLocalServer(); break;
        case 3: _t->handleOutsideConnection(); break;
        case 4: _t->handleSocketDisconnect(); break;
        case 5: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalAntiMicroServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAntiMicroServer::clientdisconnect)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalAntiMicroServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAntiMicroServer::showHiddenWindow)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LocalAntiMicroServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LocalAntiMicroServer.data,
    qt_meta_data_LocalAntiMicroServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalAntiMicroServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalAntiMicroServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalAntiMicroServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocalAntiMicroServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LocalAntiMicroServer::clientdisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LocalAntiMicroServer::showHiddenWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
