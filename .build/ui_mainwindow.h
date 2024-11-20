/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "joytabwidgetcontainer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionUpdate_Joysticks;
    QAction *actionHide;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionProperties;
    QAction *actionKeyValue;
    QAction *actionHomePage;
    QAction *actionGitHubPage;
    QAction *actionOptions;
    QAction *actionStick_Pad_Assign;
    QAction *actionWiki;
    QAction *actionIssues;
    QAction *actionCalibration;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *joystick_tabs;
    QVBoxLayout *verticalLayout_3;
    JoyTabWidgetContainer *tabWidget;
    QHBoxLayout *bottombuttonslayout;
    QPushButton *uacPushButton;
    QPushButton *updateButton;
    QMenuBar *menuBar;
    QMenu *menuQuit;
    QMenu *menuOptions;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(650, 580);
        MainWindow->setMinimumSize(QSize(650, 0));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("io.github.antimicrox.antimicrox");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("FlashButtonWidget[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}\n"
"QPushButton#setPushButton1[setActive=\"false\"], QPushButton#setPushButton2[setActive=\"false\"], QPushButton#setPushButton3[setActive=\"false\"], QPushButton#setPushButton4[setActive=\"false\"], QPushButton#setPushButton5[setActive=\"false\"], QPushButton#setPushButton6[setActive=\"false\"], QPushButton#setPushButton7[setActive=\"false\"], QPushButton#setPushButton8[setActive=\"false\"] {\n"
"	background-color: rgb(190, 190, 190);\n"
"}\n"
"\n"
"QStackedWidget#stackedWidget{\n"
"    padding-top: 10px; } QPushButton#namesPushButton[isDisplayingNames=\"true\"] {\n"
"	background-color: rgb(192, 255, 192);\n"
"}"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("application_exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/images/actions/application_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon1);
        actionUpdate_Joysticks = new QAction(MainWindow);
        actionUpdate_Joysticks->setObjectName(QString::fromUtf8("actionUpdate_Joysticks"));
        actionUpdate_Joysticks->setEnabled(true);
        QIcon icon2;
        iconThemeName = QString::fromUtf8("view_refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/images/actions/view_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionUpdate_Joysticks->setIcon(icon2);
        actionHide = new QAction(MainWindow);
        actionHide->setObjectName(QString::fromUtf8("actionHide"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("view_restore");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/images/actions/view_restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHide->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("about_antimicrox");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8(":/images/actions/about_antimicrox.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon4);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("about_qt");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/images/actions/about_qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout_Qt->setIcon(icon5);
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QString::fromUtf8("actionProperties"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("sliders");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/images/actions/sliders.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionProperties->setIcon(icon6);
        actionKeyValue = new QAction(MainWindow);
        actionKeyValue->setObjectName(QString::fromUtf8("actionKeyValue"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("key_checker");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8(":/images/actions/key_checker.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionKeyValue->setIcon(icon7);
        actionHomePage = new QAction(MainWindow);
        actionHomePage->setObjectName(QString::fromUtf8("actionHomePage"));
        actionGitHubPage = new QAction(MainWindow);
        actionGitHubPage->setObjectName(QString::fromUtf8("actionGitHubPage"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("github_page");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8(":/images/actions/github_page.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGitHubPage->setIcon(icon8);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("settings");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8(":/images/actions/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionOptions->setIcon(icon9);
        actionStick_Pad_Assign = new QAction(MainWindow);
        actionStick_Pad_Assign->setObjectName(QString::fromUtf8("actionStick_Pad_Assign"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("stick_pad_assign");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8(":/images/actions/stick_pad_assign.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionStick_Pad_Assign->setIcon(icon10);
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        QIcon icon11;
        iconThemeName = QString::fromUtf8("wiki");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8(":/images/actions/wiki.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionWiki->setIcon(icon11);
        actionIssues = new QAction(MainWindow);
        actionIssues->setObjectName(QString::fromUtf8("actionIssues"));
        QIcon icon12;
        iconThemeName = QString::fromUtf8("issues");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8(":/images/actions/issues.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionIssues->setIcon(icon12);
        actionCalibration = new QAction(MainWindow);
        actionCalibration->setObjectName(QString::fromUtf8("actionCalibration"));
        QIcon icon13;
        iconThemeName = QString::fromUtf8("calibration");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8(":/images/actions/calibration.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCalibration->setIcon(icon13);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 0, -1, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->setLineWidth(1);
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        stackedWidget->addWidget(page1);
        joystick_tabs = new QWidget();
        joystick_tabs->setObjectName(QString::fromUtf8("joystick_tabs"));
        sizePolicy.setHeightForWidth(joystick_tabs->sizePolicy().hasHeightForWidth());
        joystick_tabs->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(joystick_tabs);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new JoyTabWidgetContainer(joystick_tabs);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);

        verticalLayout_3->addWidget(tabWidget);

        stackedWidget->addWidget(joystick_tabs);

        verticalLayout->addWidget(stackedWidget);

        bottombuttonslayout = new QHBoxLayout();
        bottombuttonslayout->setSpacing(6);
        bottombuttonslayout->setObjectName(QString::fromUtf8("bottombuttonslayout"));
        uacPushButton = new QPushButton(centralWidget);
        uacPushButton->setObjectName(QString::fromUtf8("uacPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uacPushButton->sizePolicy().hasHeightForWidth());
        uacPushButton->setSizePolicy(sizePolicy1);
        uacPushButton->setAutoDefault(false);
        uacPushButton->setFlat(false);

        bottombuttonslayout->addWidget(uacPushButton);

        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);
        updateButton->setAutoDefault(false);
        updateButton->setFlat(false);

        bottombuttonslayout->addWidget(updateButton);


        verticalLayout->addLayout(bottombuttonslayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 22));
        menuQuit = new QMenu(menuBar);
        menuQuit->setObjectName(QString::fromUtf8("menuQuit"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuQuit->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuQuit->addAction(actionHide);
        menuQuit->addAction(actionQuit);
        menuOptions->addAction(actionProperties);
        menuOptions->addAction(actionKeyValue);
        menuOptions->addAction(actionCalibration);
        menuOptions->addAction(actionStick_Pad_Assign);
        menuOptions->addAction(actionOptions);
        menuOptions->addAction(actionUpdate_Joysticks);
        menuHelp->addAction(actionGitHubPage);
        menuHelp->addAction(actionIssues);
        menuHelp->addAction(actionWiki);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(quitProgram()));
        QObject::connect(actionUpdate_Joysticks, SIGNAL(triggered()), MainWindow, SLOT(startJoystickRefresh()));
        QObject::connect(actionHide, SIGNAL(triggered()), MainWindow, SLOT(hideWindow()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(openAboutDialog()));
        QObject::connect(actionStick_Pad_Assign, SIGNAL(triggered()), MainWindow, SLOT(showStickAssignmentDialog()));

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(-1);
        uacPushButton->setDefault(false);
        updateButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AntiMicroX", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUpdate_Joysticks->setText(QCoreApplication::translate("MainWindow", "&Update Joysticks", nullptr));
#if QT_CONFIG(shortcut)
        actionUpdate_Joysticks->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHide->setText(QCoreApplication::translate("MainWindow", "&Hide", nullptr));
#if QT_CONFIG(shortcut)
        actionHide->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout_Qt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionProperties->setText(QCoreApplication::translate("MainWindow", "&Properties", nullptr));
#if QT_CONFIG(shortcut)
        actionProperties->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKeyValue->setText(QCoreApplication::translate("MainWindow", "&Key Checker", nullptr));
#if QT_CONFIG(shortcut)
        actionKeyValue->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHomePage->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
#if QT_CONFIG(shortcut)
        actionHomePage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGitHubPage->setText(QCoreApplication::translate("MainWindow", "&GitHub Page", nullptr));
#if QT_CONFIG(shortcut)
        actionGitHubPage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOptions->setText(QCoreApplication::translate("MainWindow", "S&ettings", nullptr));
#if QT_CONFIG(shortcut)
        actionOptions->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStick_Pad_Assign->setText(QCoreApplication::translate("MainWindow", "&Stick/Pad Assign", nullptr));
#if QT_CONFIG(shortcut)
        actionStick_Pad_Assign->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWiki->setText(QCoreApplication::translate("MainWindow", "&Wiki", nullptr));
#if QT_CONFIG(shortcut)
        actionWiki->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIssues->setText(QCoreApplication::translate("MainWindow", "&Issues", nullptr));
#if QT_CONFIG(shortcut)
        actionIssues->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCalibration->setText(QCoreApplication::translate("MainWindow", "&Calibration", nullptr));
#if QT_CONFIG(shortcut)
        actionCalibration->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "No Joysticks have been found.\n"
" Please plug in a joystick and then choose the \"Update Joysticks\" option in the main menu", nullptr));
        uacPushButton->setText(QCoreApplication::translate("MainWindow", "If events are not seen by a game, please click here to run this application as Administrator.", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update Button", nullptr));
        menuQuit->setTitle(QCoreApplication::translate("MainWindow", "&App", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Options", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "He&lp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
