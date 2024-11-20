/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[74];
    char stringdata0[1181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "joystickRefreshRequested"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "readConfig"
QT_MOC_LITERAL(4, 48, 5), // "index"
QT_MOC_LITERAL(5, 54, 14), // "mappingUpdated"
QT_MOC_LITERAL(6, 69, 7), // "mapping"
QT_MOC_LITERAL(7, 77, 12), // "InputDevice*"
QT_MOC_LITERAL(8, 90, 6), // "device"
QT_MOC_LITERAL(9, 97, 26), // "checkEachTenMinutesBattery"
QT_MOC_LITERAL(10, 124, 34), // "QMap<SDL_JoystickID,InputDevi..."
QT_MOC_LITERAL(11, 159, 9), // "joysticks"
QT_MOC_LITERAL(12, 169, 11), // "fillButtons"
QT_MOC_LITERAL(13, 181, 16), // "makeJoystickTabs"
QT_MOC_LITERAL(14, 198, 23), // "alterConfigFromSettings"
QT_MOC_LITERAL(15, 222, 13), // "fillButtonsID"
QT_MOC_LITERAL(16, 236, 8), // "joystick"
QT_MOC_LITERAL(17, 245, 14), // "fillButtonsMap"
QT_MOC_LITERAL(18, 260, 20), // "startJoystickRefresh"
QT_MOC_LITERAL(19, 281, 10), // "hideWindow"
QT_MOC_LITERAL(20, 292, 13), // "saveAppConfig"
QT_MOC_LITERAL(21, 306, 13), // "loadAppConfig"
QT_MOC_LITERAL(22, 320, 12), // "forceRefresh"
QT_MOC_LITERAL(23, 333, 13), // "removeJoyTabs"
QT_MOC_LITERAL(24, 347, 11), // "quitProgram"
QT_MOC_LITERAL(25, 359, 18), // "changeWindowStatus"
QT_MOC_LITERAL(26, 378, 23), // "refreshTabHelperThreads"
QT_MOC_LITERAL(27, 402, 20), // "testMappingUpdateNow"
QT_MOC_LITERAL(28, 423, 12), // "removeJoyTab"
QT_MOC_LITERAL(29, 436, 14), // "SDL_JoystickID"
QT_MOC_LITERAL(30, 451, 8), // "deviceID"
QT_MOC_LITERAL(31, 460, 9), // "addJoyTab"
QT_MOC_LITERAL(32, 470, 22), // "selectControllerJoyTab"
QT_MOC_LITERAL(33, 493, 4), // "GUID"
QT_MOC_LITERAL(34, 498, 24), // "handleInstanceDisconnect"
QT_MOC_LITERAL(35, 523, 19), // "refreshTrayIconMenu"
QT_MOC_LITERAL(36, 543, 19), // "trayIconClickAction"
QT_MOC_LITERAL(37, 563, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(38, 597, 6), // "reason"
QT_MOC_LITERAL(39, 604, 14), // "mainMenuChange"
QT_MOC_LITERAL(40, 619, 6), // "QMenu*"
QT_MOC_LITERAL(41, 626, 8), // "tempMenu"
QT_MOC_LITERAL(42, 635, 19), // "disableFlashActions"
QT_MOC_LITERAL(43, 655, 18), // "enableFlashActions"
QT_MOC_LITERAL(44, 674, 16), // "joystickTrayShow"
QT_MOC_LITERAL(45, 691, 8), // "tempmenu"
QT_MOC_LITERAL(46, 700, 25), // "singleTrayProfileMenuShow"
QT_MOC_LITERAL(47, 726, 26), // "profileTrayActionTriggered"
QT_MOC_LITERAL(48, 753, 8), // "QAction*"
QT_MOC_LITERAL(49, 762, 6), // "action"
QT_MOC_LITERAL(50, 769, 7), // "checked"
QT_MOC_LITERAL(51, 777, 16), // "populateTrayIcon"
QT_MOC_LITERAL(52, 794, 15), // "openAboutDialog"
QT_MOC_LITERAL(53, 810, 24), // "openJoystickStatusWindow"
QT_MOC_LITERAL(54, 835, 20), // "openKeyCheckerDialog"
QT_MOC_LITERAL(55, 856, 14), // "openGitHubPage"
QT_MOC_LITERAL(56, 871, 14), // "openIssuesPage"
QT_MOC_LITERAL(57, 886, 12), // "openWikiPage"
QT_MOC_LITERAL(58, 899, 15), // "openCalibration"
QT_MOC_LITERAL(59, 915, 26), // "propogateNameDisplayStatus"
QT_MOC_LITERAL(60, 942, 13), // "JoyTabWidget*"
QT_MOC_LITERAL(61, 956, 9), // "tabwidget"
QT_MOC_LITERAL(62, 966, 12), // "displayNames"
QT_MOC_LITERAL(63, 979, 14), // "changeLanguage"
QT_MOC_LITERAL(64, 994, 8), // "language"
QT_MOC_LITERAL(65, 1003, 22), // "openMainSettingsDialog"
QT_MOC_LITERAL(66, 1026, 25), // "showStickAssignmentDialog"
QT_MOC_LITERAL(67, 1052, 20), // "checkHideEmptyOption"
QT_MOC_LITERAL(68, 1073, 22), // "propogateMappingUpdate"
QT_MOC_LITERAL(69, 1096, 15), // "autoprofileLoad"
QT_MOC_LITERAL(70, 1112, 16), // "AutoProfileInfo*"
QT_MOC_LITERAL(71, 1129, 4), // "info"
QT_MOC_LITERAL(72, 1134, 28), // "checkAutoProfileWatcherTimer"
QT_MOC_LITERAL(73, 1163, 17) // "updateMenuOptions"

    },
    "MainWindow\0joystickRefreshRequested\0"
    "\0readConfig\0index\0mappingUpdated\0"
    "mapping\0InputDevice*\0device\0"
    "checkEachTenMinutesBattery\0"
    "QMap<SDL_JoystickID,InputDevice*>*\0"
    "joysticks\0fillButtons\0makeJoystickTabs\0"
    "alterConfigFromSettings\0fillButtonsID\0"
    "joystick\0fillButtonsMap\0startJoystickRefresh\0"
    "hideWindow\0saveAppConfig\0loadAppConfig\0"
    "forceRefresh\0removeJoyTabs\0quitProgram\0"
    "changeWindowStatus\0refreshTabHelperThreads\0"
    "testMappingUpdateNow\0removeJoyTab\0"
    "SDL_JoystickID\0deviceID\0addJoyTab\0"
    "selectControllerJoyTab\0GUID\0"
    "handleInstanceDisconnect\0refreshTrayIconMenu\0"
    "trayIconClickAction\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0mainMenuChange\0QMenu*\0tempMenu\0"
    "disableFlashActions\0enableFlashActions\0"
    "joystickTrayShow\0tempmenu\0"
    "singleTrayProfileMenuShow\0"
    "profileTrayActionTriggered\0QAction*\0"
    "action\0checked\0populateTrayIcon\0"
    "openAboutDialog\0openJoystickStatusWindow\0"
    "openKeyCheckerDialog\0openGitHubPage\0"
    "openIssuesPage\0openWikiPage\0openCalibration\0"
    "propogateNameDisplayStatus\0JoyTabWidget*\0"
    "tabwidget\0displayNames\0changeLanguage\0"
    "language\0openMainSettingsDialog\0"
    "showStickAssignmentDialog\0"
    "checkHideEmptyOption\0propogateMappingUpdate\0"
    "autoprofileLoad\0AutoProfileInfo*\0info\0"
    "checkAutoProfileWatcherTimer\0"
    "updateMenuOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x06 /* Public */,
       5,    2,  258,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  263,    2, 0x0a /* Public */,
      12,    0,  266,    2, 0x0a /* Public */,
      13,    0,  267,    2, 0x0a /* Public */,
      14,    0,  268,    2, 0x0a /* Public */,
      15,    1,  269,    2, 0x0a /* Public */,
      17,    1,  272,    2, 0x0a /* Public */,
      18,    0,  275,    2, 0x0a /* Public */,
      19,    0,  276,    2, 0x0a /* Public */,
      20,    0,  277,    2, 0x0a /* Public */,
      21,    1,  278,    2, 0x0a /* Public */,
      21,    0,  281,    2, 0x2a /* Public | MethodCloned */,
      23,    0,  282,    2, 0x0a /* Public */,
      24,    0,  283,    2, 0x0a /* Public */,
      25,    0,  284,    2, 0x0a /* Public */,
      26,    0,  285,    2, 0x0a /* Public */,
      27,    2,  286,    2, 0x0a /* Public */,
      28,    1,  291,    2, 0x0a /* Public */,
      31,    1,  294,    2, 0x0a /* Public */,
      32,    1,  297,    2, 0x0a /* Public */,
      34,    0,  300,    2, 0x0a /* Public */,
      35,    0,  301,    2, 0x08 /* Private */,
      36,    1,  302,    2, 0x08 /* Private */,
      39,    1,  305,    2, 0x08 /* Private */,
      42,    0,  308,    2, 0x08 /* Private */,
      43,    0,  309,    2, 0x08 /* Private */,
      44,    1,  310,    2, 0x08 /* Private */,
      46,    0,  313,    2, 0x08 /* Private */,
      47,    2,  314,    2, 0x08 /* Private */,
      51,    0,  319,    2, 0x08 /* Private */,
      52,    0,  320,    2, 0x08 /* Private */,
      53,    0,  321,    2, 0x08 /* Private */,
      54,    0,  322,    2, 0x08 /* Private */,
      55,    0,  323,    2, 0x08 /* Private */,
      56,    0,  324,    2, 0x08 /* Private */,
      57,    0,  325,    2, 0x08 /* Private */,
      58,    0,  326,    2, 0x08 /* Private */,
      59,    2,  327,    2, 0x08 /* Private */,
      63,    1,  332,    2, 0x08 /* Private */,
      65,    0,  335,    2, 0x08 /* Private */,
      66,    0,  336,    2, 0x08 /* Private */,
      67,    0,  337,    2, 0x08 /* Private */,
      68,    2,  338,    2, 0x08 /* Private */,
      69,    1,  343,    2, 0x08 /* Private */,
      72,    0,  346,    2, 0x08 /* Private */,
      73,    0,  347,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   16,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    4,    8,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   45,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, QMetaType::Bool,   49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60, QMetaType::Bool,   61,   62,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->joystickRefreshRequested(); break;
        case 1: _t->readConfig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mappingUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 3: _t->checkEachTenMinutesBattery((*reinterpret_cast< QMap<SDL_JoystickID,InputDevice*>*(*)>(_a[1]))); break;
        case 4: _t->fillButtons(); break;
        case 5: _t->makeJoystickTabs(); break;
        case 6: _t->alterConfigFromSettings(); break;
        case 7: _t->fillButtonsID((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 8: _t->fillButtonsMap((*reinterpret_cast< QMap<SDL_JoystickID,InputDevice*>*(*)>(_a[1]))); break;
        case 9: _t->startJoystickRefresh(); break;
        case 10: _t->hideWindow(); break;
        case 11: _t->saveAppConfig(); break;
        case 12: _t->loadAppConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->loadAppConfig(); break;
        case 14: _t->removeJoyTabs(); break;
        case 15: _t->quitProgram(); break;
        case 16: _t->changeWindowStatus(); break;
        case 17: _t->refreshTabHelperThreads(); break;
        case 18: _t->testMappingUpdateNow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 19: _t->removeJoyTab((*reinterpret_cast< SDL_JoystickID(*)>(_a[1]))); break;
        case 20: _t->addJoyTab((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 21: _t->selectControllerJoyTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->handleInstanceDisconnect(); break;
        case 23: _t->refreshTrayIconMenu(); break;
        case 24: _t->trayIconClickAction((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 25: _t->mainMenuChange((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 26: _t->disableFlashActions(); break;
        case 27: _t->enableFlashActions(); break;
        case 28: _t->joystickTrayShow((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 29: _t->singleTrayProfileMenuShow(); break;
        case 30: _t->profileTrayActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->populateTrayIcon(); break;
        case 32: _t->openAboutDialog(); break;
        case 33: _t->openJoystickStatusWindow(); break;
        case 34: _t->openKeyCheckerDialog(); break;
        case 35: _t->openGitHubPage(); break;
        case 36: _t->openIssuesPage(); break;
        case 37: _t->openWikiPage(); break;
        case 38: _t->openCalibration(); break;
        case 39: _t->propogateNameDisplayStatus((*reinterpret_cast< JoyTabWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->changeLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->openMainSettingsDialog(); break;
        case 42: _t->showStickAssignmentDialog(); break;
        case 43: _t->checkHideEmptyOption(); break;
        case 44: _t->propogateMappingUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 45: _t->autoprofileLoad((*reinterpret_cast< AutoProfileInfo*(*)>(_a[1]))); break;
        case 46: _t->checkAutoProfileWatcherTimer(); break;
        case 47: _t->updateMenuOptions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::joystickRefreshRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::readConfig)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString , InputDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::mappingUpdated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::joystickRefreshRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::readConfig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::mappingUpdated(QString _t1, InputDevice * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
