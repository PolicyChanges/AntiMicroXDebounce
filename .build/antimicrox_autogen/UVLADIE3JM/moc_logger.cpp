/****************************************************************************
** Meta object code from reading C++ file 'logger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/logger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Logger_t {
    QByteArrayData data[16];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Logger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Logger_t qt_meta_stringdata_Logger = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Logger"
QT_MOC_LITERAL(1, 7, 10), // "logMessage"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "message"
QT_MOC_LITERAL(4, 27, 16), // "Logger::LogLevel"
QT_MOC_LITERAL(5, 44, 5), // "level"
QT_MOC_LITERAL(6, 50, 6), // "lineno"
QT_MOC_LITERAL(7, 57, 8), // "filename"
QT_MOC_LITERAL(8, 66, 8), // "LogLevel"
QT_MOC_LITERAL(9, 75, 8), // "LOG_NONE"
QT_MOC_LITERAL(10, 84, 9), // "LOG_ERROR"
QT_MOC_LITERAL(11, 94, 11), // "LOG_WARNING"
QT_MOC_LITERAL(12, 106, 8), // "LOG_INFO"
QT_MOC_LITERAL(13, 115, 11), // "LOG_VERBOSE"
QT_MOC_LITERAL(14, 127, 9), // "LOG_DEBUG"
QT_MOC_LITERAL(15, 137, 7) // "LOG_MAX"

    },
    "Logger\0logMessage\0\0message\0Logger::LogLevel\0"
    "level\0lineno\0filename\0LogLevel\0LOG_NONE\0"
    "LOG_ERROR\0LOG_WARNING\0LOG_INFO\0"
    "LOG_VERBOSE\0LOG_DEBUG\0LOG_MAX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Logger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::UInt, QMetaType::QString,    3,    5,    6,    7,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    7,   33,

 // enum data: key, value
       9, uint(Logger::LOG_NONE),
      10, uint(Logger::LOG_ERROR),
      11, uint(Logger::LOG_WARNING),
      12, uint(Logger::LOG_INFO),
      13, uint(Logger::LOG_VERBOSE),
      14, uint(Logger::LOG_DEBUG),
      15, uint(Logger::LOG_MAX),

       0        // eod
};

void Logger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Logger *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Logger::LogLevel(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Logger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Logger.data,
    qt_meta_data_Logger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Logger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Logger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Logger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Logger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_LogHelper_t {
    QByteArrayData data[8];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogHelper_t qt_meta_stringdata_LogHelper = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LogHelper"
QT_MOC_LITERAL(1, 10, 10), // "logMessage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "message"
QT_MOC_LITERAL(4, 30, 16), // "Logger::LogLevel"
QT_MOC_LITERAL(5, 47, 5), // "level"
QT_MOC_LITERAL(6, 53, 6), // "lineno"
QT_MOC_LITERAL(7, 60, 8) // "filename"

    },
    "LogHelper\0logMessage\0\0message\0"
    "Logger::LogLevel\0level\0lineno\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::UInt, QMetaType::QString,    3,    5,    6,    7,

       0        // eod
};

void LogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Logger::LogLevel(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogHelper::*)(const QString & , const Logger::LogLevel , const uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogHelper::logMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogHelper.data,
    qt_meta_data_LogHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void LogHelper::logMessage(const QString & _t1, const Logger::LogLevel _t2, const uint _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StreamPrinter_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamPrinter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamPrinter_t qt_meta_stringdata_StreamPrinter = {
    {
QT_MOC_LITERAL(0, 0, 13) // "StreamPrinter"

    },
    "StreamPrinter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamPrinter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void StreamPrinter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject StreamPrinter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StreamPrinter.data,
    qt_meta_data_StreamPrinter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StreamPrinter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamPrinter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamPrinter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StreamPrinter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
