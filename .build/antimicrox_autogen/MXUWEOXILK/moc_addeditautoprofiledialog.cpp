/****************************************************************************
** Meta object code from reading C++ file 'addeditautoprofiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/addeditautoprofiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addeditautoprofiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddEditAutoProfileDialog_t {
    QByteArrayData data[18];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddEditAutoProfileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddEditAutoProfileDialog_t qt_meta_stringdata_AddEditAutoProfileDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AddEditAutoProfileDialog"
QT_MOC_LITERAL(1, 25, 15), // "captureFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "openProfileBrowseDialog"
QT_MOC_LITERAL(4, 66, 27), // "openApplicationBrowseDialog"
QT_MOC_LITERAL(5, 94, 26), // "saveAutoProfileInformation"
QT_MOC_LITERAL(6, 121, 23), // "checkForReservedUniques"
QT_MOC_LITERAL(7, 145, 5), // "index"
QT_MOC_LITERAL(8, 151, 21), // "checkForDefaultStatus"
QT_MOC_LITERAL(9, 173, 20), // "windowPropAssignment"
QT_MOC_LITERAL(10, 194, 25), // "CapturedWindowInfoDialog*"
QT_MOC_LITERAL(11, 220, 6), // "dialog"
QT_MOC_LITERAL(12, 227, 20), // "checkDefaultCheckbox"
QT_MOC_LITERAL(13, 248, 4), // "text"
QT_MOC_LITERAL(14, 253, 21), // "showCaptureHelpWindow"
QT_MOC_LITERAL(15, 275, 21), // "checkForGrabbedWindow"
QT_MOC_LITERAL(16, 297, 25), // "UnixCaptureWindowUtility*"
QT_MOC_LITERAL(17, 323, 4) // "util"

    },
    "AddEditAutoProfileDialog\0captureFinished\0"
    "\0openProfileBrowseDialog\0"
    "openApplicationBrowseDialog\0"
    "saveAutoProfileInformation\0"
    "checkForReservedUniques\0index\0"
    "checkForDefaultStatus\0windowPropAssignment\0"
    "CapturedWindowInfoDialog*\0dialog\0"
    "checkDefaultCheckbox\0text\0"
    "showCaptureHelpWindow\0checkForGrabbedWindow\0"
    "UnixCaptureWindowUtility*\0util"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddEditAutoProfileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void AddEditAutoProfileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddEditAutoProfileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->captureFinished(); break;
        case 1: _t->openProfileBrowseDialog(); break;
        case 2: _t->openApplicationBrowseDialog(); break;
        case 3: _t->saveAutoProfileInformation(); break;
        case 4: _t->checkForReservedUniques((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->checkForDefaultStatus(); break;
        case 6: _t->windowPropAssignment((*reinterpret_cast< CapturedWindowInfoDialog*(*)>(_a[1]))); break;
        case 7: _t->checkDefaultCheckbox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showCaptureHelpWindow(); break;
        case 9: _t->checkForGrabbedWindow((*reinterpret_cast< UnixCaptureWindowUtility*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddEditAutoProfileDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddEditAutoProfileDialog::captureFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddEditAutoProfileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddEditAutoProfileDialog.data,
    qt_meta_data_AddEditAutoProfileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddEditAutoProfileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddEditAutoProfileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddEditAutoProfileDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddEditAutoProfileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AddEditAutoProfileDialog::captureFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
