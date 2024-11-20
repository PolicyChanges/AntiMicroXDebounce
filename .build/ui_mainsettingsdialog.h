/********************************************************************************
** Form generated from reading UI file 'mainsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSETTINGSDIALOG_H
#define UI_MAINSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_17;
    QListWidget *categoriesListWidget;
    QLabel *autoProfileDisabledInfo;
    QStackedWidget *stackedWidget;
    QWidget *General;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *profileDefaultDirLineEdit;
    QPushButton *profileOpenDirPushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *numberRecentProfileSpinBox;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *gamepadPollRateLabel;
    QComboBox *gamepadPollRateComboBox;
    QCheckBox *closeToTrayCheckBox;
    QCheckBox *launchAtWinStartupCheckBox;
    QCheckBox *traySingleProfileListCheckBox;
    QCheckBox *minimizeTaskbarCheckBox;
    QCheckBox *hideEmptyCheckBox;
    QCheckBox *autoLoadPreviousCheckBox;
    QCheckBox *launchInTrayCheckBox;
    QCheckBox *associateProfilesCheckBox;
    QCheckBox *attachNumKeypadCheckbox;
    QCheckBox *showLowBatteryNotification;
    QCheckBox *showEmptyBatteryNotification;
    QSpacerItem *verticalSpacer;
    QGroupBox *keyRepeatGroupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *keyRepeatEnableCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSlider *keyDelayHorizontalSlider;
    QSpinBox *keyDelaySpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSlider *keyRateHorizontalSlider;
    QSpinBox *keyRateSpinBox;
    QWidget *controllerMappingsPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *controllerMappingsTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mappngInsertPushButton;
    QPushButton *mappingDeletePushButton;
    QWidget *languageSettingsPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_6;
    QListWidget *localeListWidget;
    QLabel *label_translation_help;
    QWidget *autoProfileSettingsPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *autoProfileDescription;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *activeCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *deivcesLabel;
    QComboBox *devicesComboBox;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *autoProfileTableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *autoProfileAddPushButton;
    QPushButton *autoProfileEditPushButton;
    QPushButton *autoProfileDeletePushButton;
    QWidget *mouseSettingsPage;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *disableWindowsEnhancedPointCheckBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *smoothingEnableCheckBox;
    QFormLayout *formLayout;
    QLabel *label_6;
    QSpinBox *historySizeSpinBox;
    QLabel *label_7;
    QDoubleSpinBox *weightModifierDoubleSpinBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mouseRefreshRateLabel;
    QComboBox *mouseRefreshRateComboBox;
    QGroupBox *springGroupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *springScreenLabel;
    QComboBox *springScreenComboBox;
    QFrame *extraInfoFrame;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *accelNumTitleLabel;
    QLabel *accelNumLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *accelDenomTitleLabel;
    QLabel *accelDenomLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *accelThresTitleLabel;
    QLabel *accelThresLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetAccelPushButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *Advanced;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_9;
    QLineEdit *logFilePathEdit;
    QPushButton *logFilePushButton;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_10;
    QComboBox *logLevelComboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *logLevelNoteLabel;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *resetBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MainSettingsDialog)
    {
        if (MainSettingsDialog->objectName().isEmpty())
            MainSettingsDialog->setObjectName(QString::fromUtf8("MainSettingsDialog"));
        MainSettingsDialog->setWindowModality(Qt::WindowModality::WindowModal);
        MainSettingsDialog->resize(718, 684);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainSettingsDialog->sizePolicy().hasHeightForWidth());
        MainSettingsDialog->setSizePolicy(sizePolicy);
        MainSettingsDialog->setMinimumSize(QSize(0, 0));
        MainSettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(MainSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        categoriesListWidget = new QListWidget(MainSettingsDialog);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        categoriesListWidget->setObjectName(QString::fromUtf8("categoriesListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoriesListWidget->sizePolicy().hasHeightForWidth());
        categoriesListWidget->setSizePolicy(sizePolicy1);
        categoriesListWidget->setMaximumSize(QSize(180, 16777215));
        categoriesListWidget->setFlow(QListView::Flow::TopToBottom);
        categoriesListWidget->setProperty("isWrapping", QVariant(false));
        categoriesListWidget->setResizeMode(QListView::ResizeMode::Fixed);
        categoriesListWidget->setWordWrap(false);

        verticalLayout_17->addWidget(categoriesListWidget);

        autoProfileDisabledInfo = new QLabel(MainSettingsDialog);
        autoProfileDisabledInfo->setObjectName(QString::fromUtf8("autoProfileDisabledInfo"));
        autoProfileDisabledInfo->setEnabled(true);
        autoProfileDisabledInfo->setWordWrap(true);
        autoProfileDisabledInfo->setOpenExternalLinks(true);

        verticalLayout_17->addWidget(autoProfileDisabledInfo);


        horizontalLayout->addLayout(verticalLayout_17);

        stackedWidget = new QStackedWidget(MainSettingsDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        verticalLayout_3 = new QVBoxLayout(General);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 4, -1, 9);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(General);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        profileDefaultDirLineEdit = new QLineEdit(General);
        profileDefaultDirLineEdit->setObjectName(QString::fromUtf8("profileDefaultDirLineEdit"));
        profileDefaultDirLineEdit->setMaxLength(512);
        profileDefaultDirLineEdit->setFrame(true);
        profileDefaultDirLineEdit->setReadOnly(false);

        horizontalLayout_3->addWidget(profileDefaultDirLineEdit);

        profileOpenDirPushButton = new QPushButton(General);
        profileOpenDirPushButton->setObjectName(QString::fromUtf8("profileOpenDirPushButton"));

        horizontalLayout_3->addWidget(profileOpenDirPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(General);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        numberRecentProfileSpinBox = new QSpinBox(General);
        numberRecentProfileSpinBox->setObjectName(QString::fromUtf8("numberRecentProfileSpinBox"));
        numberRecentProfileSpinBox->setMaximum(100);
        numberRecentProfileSpinBox->setValue(5);

        horizontalLayout_4->addWidget(numberRecentProfileSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 8, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 8);
        gamepadPollRateLabel = new QLabel(General);
        gamepadPollRateLabel->setObjectName(QString::fromUtf8("gamepadPollRateLabel"));

        horizontalLayout_12->addWidget(gamepadPollRateLabel);

        gamepadPollRateComboBox = new QComboBox(General);
        gamepadPollRateComboBox->setObjectName(QString::fromUtf8("gamepadPollRateComboBox"));

        horizontalLayout_12->addWidget(gamepadPollRateComboBox);


        verticalLayout_3->addLayout(horizontalLayout_12);

        closeToTrayCheckBox = new QCheckBox(General);
        closeToTrayCheckBox->setObjectName(QString::fromUtf8("closeToTrayCheckBox"));

        verticalLayout_3->addWidget(closeToTrayCheckBox);

        launchAtWinStartupCheckBox = new QCheckBox(General);
        launchAtWinStartupCheckBox->setObjectName(QString::fromUtf8("launchAtWinStartupCheckBox"));

        verticalLayout_3->addWidget(launchAtWinStartupCheckBox);

        traySingleProfileListCheckBox = new QCheckBox(General);
        traySingleProfileListCheckBox->setObjectName(QString::fromUtf8("traySingleProfileListCheckBox"));

        verticalLayout_3->addWidget(traySingleProfileListCheckBox);

        minimizeTaskbarCheckBox = new QCheckBox(General);
        minimizeTaskbarCheckBox->setObjectName(QString::fromUtf8("minimizeTaskbarCheckBox"));

        verticalLayout_3->addWidget(minimizeTaskbarCheckBox);

        hideEmptyCheckBox = new QCheckBox(General);
        hideEmptyCheckBox->setObjectName(QString::fromUtf8("hideEmptyCheckBox"));

        verticalLayout_3->addWidget(hideEmptyCheckBox);

        autoLoadPreviousCheckBox = new QCheckBox(General);
        autoLoadPreviousCheckBox->setObjectName(QString::fromUtf8("autoLoadPreviousCheckBox"));
        autoLoadPreviousCheckBox->setChecked(true);

        verticalLayout_3->addWidget(autoLoadPreviousCheckBox);

        launchInTrayCheckBox = new QCheckBox(General);
        launchInTrayCheckBox->setObjectName(QString::fromUtf8("launchInTrayCheckBox"));

        verticalLayout_3->addWidget(launchInTrayCheckBox);

        associateProfilesCheckBox = new QCheckBox(General);
        associateProfilesCheckBox->setObjectName(QString::fromUtf8("associateProfilesCheckBox"));
        associateProfilesCheckBox->setChecked(true);

        verticalLayout_3->addWidget(associateProfilesCheckBox);

        attachNumKeypadCheckbox = new QCheckBox(General);
        attachNumKeypadCheckbox->setObjectName(QString::fromUtf8("attachNumKeypadCheckbox"));
        attachNumKeypadCheckbox->setToolTipDuration(-1);

        verticalLayout_3->addWidget(attachNumKeypadCheckbox);

        showLowBatteryNotification = new QCheckBox(General);
        showLowBatteryNotification->setObjectName(QString::fromUtf8("showLowBatteryNotification"));

        verticalLayout_3->addWidget(showLowBatteryNotification);

        showEmptyBatteryNotification = new QCheckBox(General);
        showEmptyBatteryNotification->setObjectName(QString::fromUtf8("showEmptyBatteryNotification"));

        verticalLayout_3->addWidget(showEmptyBatteryNotification);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        keyRepeatGroupBox = new QGroupBox(General);
        keyRepeatGroupBox->setObjectName(QString::fromUtf8("keyRepeatGroupBox"));
        verticalLayout_6 = new QVBoxLayout(keyRepeatGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        keyRepeatEnableCheckBox = new QCheckBox(keyRepeatGroupBox);
        keyRepeatEnableCheckBox->setObjectName(QString::fromUtf8("keyRepeatEnableCheckBox"));

        verticalLayout_6->addWidget(keyRepeatEnableCheckBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(keyRepeatGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        keyDelayHorizontalSlider = new QSlider(keyRepeatGroupBox);
        keyDelayHorizontalSlider->setObjectName(QString::fromUtf8("keyDelayHorizontalSlider"));
        keyDelayHorizontalSlider->setEnabled(false);
        keyDelayHorizontalSlider->setMinimum(250);
        keyDelayHorizontalSlider->setMaximum(1000);
        keyDelayHorizontalSlider->setSingleStep(10);
        keyDelayHorizontalSlider->setPageStep(100);
        keyDelayHorizontalSlider->setValue(660);
        keyDelayHorizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        keyDelayHorizontalSlider->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_8->addWidget(keyDelayHorizontalSlider);

        keyDelaySpinBox = new QSpinBox(keyRepeatGroupBox);
        keyDelaySpinBox->setObjectName(QString::fromUtf8("keyDelaySpinBox"));
        keyDelaySpinBox->setEnabled(false);
        keyDelaySpinBox->setMinimum(250);
        keyDelaySpinBox->setMaximum(1000);
        keyDelaySpinBox->setSingleStep(100);
        keyDelaySpinBox->setValue(660);

        horizontalLayout_8->addWidget(keyDelaySpinBox);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(keyRepeatGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        keyRateHorizontalSlider = new QSlider(keyRepeatGroupBox);
        keyRateHorizontalSlider->setObjectName(QString::fromUtf8("keyRateHorizontalSlider"));
        keyRateHorizontalSlider->setEnabled(false);
        keyRateHorizontalSlider->setMinimum(5);
        keyRateHorizontalSlider->setMaximum(50);
        keyRateHorizontalSlider->setValue(25);
        keyRateHorizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        keyRateHorizontalSlider->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_9->addWidget(keyRateHorizontalSlider);

        keyRateSpinBox = new QSpinBox(keyRepeatGroupBox);
        keyRateSpinBox->setObjectName(QString::fromUtf8("keyRateSpinBox"));
        keyRateSpinBox->setEnabled(false);
        keyRateSpinBox->setMinimum(5);
        keyRateSpinBox->setMaximum(50);
        keyRateSpinBox->setValue(25);

        horizontalLayout_9->addWidget(keyRateSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout_3->addWidget(keyRepeatGroupBox);

        stackedWidget->addWidget(General);
        controllerMappingsPage = new QWidget();
        controllerMappingsPage->setObjectName(QString::fromUtf8("controllerMappingsPage"));
        verticalLayout_2 = new QVBoxLayout(controllerMappingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, -1, 9);
        label = new QLabel(controllerMappingsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        controllerMappingsTableWidget = new QTableWidget(controllerMappingsPage);
        if (controllerMappingsTableWidget->columnCount() < 3)
            controllerMappingsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        controllerMappingsTableWidget->setObjectName(QString::fromUtf8("controllerMappingsTableWidget"));
        controllerMappingsTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        controllerMappingsTableWidget->setWordWrap(true);
        controllerMappingsTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        controllerMappingsTableWidget->horizontalHeader()->setMinimumSectionSize(70);
        controllerMappingsTableWidget->horizontalHeader()->setDefaultSectionSize(200);
        controllerMappingsTableWidget->verticalHeader()->setMinimumSectionSize(50);
        controllerMappingsTableWidget->verticalHeader()->setDefaultSectionSize(50);

        verticalLayout_2->addWidget(controllerMappingsTableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mappngInsertPushButton = new QPushButton(controllerMappingsPage);
        mappngInsertPushButton->setObjectName(QString::fromUtf8("mappngInsertPushButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        mappngInsertPushButton->setIcon(icon);

        horizontalLayout_2->addWidget(mappngInsertPushButton);

        mappingDeletePushButton = new QPushButton(controllerMappingsPage);
        mappingDeletePushButton->setObjectName(QString::fromUtf8("mappingDeletePushButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-remove")));
        mappingDeletePushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mappingDeletePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(controllerMappingsPage);
        languageSettingsPage = new QWidget();
        languageSettingsPage->setObjectName(QString::fromUtf8("languageSettingsPage"));
        verticalLayout_4 = new QVBoxLayout(languageSettingsPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 4, -1, -1);
        label_8 = new QLabel(languageSettingsPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_6 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_6);

        localeListWidget = new QListWidget(languageSettingsPage);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        localeListWidget->setObjectName(QString::fromUtf8("localeListWidget"));

        verticalLayout_4->addWidget(localeListWidget);

        label_translation_help = new QLabel(languageSettingsPage);
        label_translation_help->setObjectName(QString::fromUtf8("label_translation_help"));
        label_translation_help->setTextFormat(Qt::TextFormat::RichText);
        label_translation_help->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(label_translation_help);

        stackedWidget->addWidget(languageSettingsPage);
        autoProfileSettingsPage = new QWidget();
        autoProfileSettingsPage->setObjectName(QString::fromUtf8("autoProfileSettingsPage"));
        verticalLayout_5 = new QVBoxLayout(autoProfileSettingsPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 4, -1, -1);
        autoProfileDescription = new QLabel(autoProfileSettingsPage);
        autoProfileDescription->setObjectName(QString::fromUtf8("autoProfileDescription"));
        autoProfileDescription->setWordWrap(true);

        verticalLayout_5->addWidget(autoProfileDescription);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        activeCheckBox = new QCheckBox(autoProfileSettingsPage);
        activeCheckBox->setObjectName(QString::fromUtf8("activeCheckBox"));

        horizontalLayout_6->addWidget(activeCheckBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        deivcesLabel = new QLabel(autoProfileSettingsPage);
        deivcesLabel->setObjectName(QString::fromUtf8("deivcesLabel"));

        horizontalLayout_5->addWidget(deivcesLabel);

        devicesComboBox = new QComboBox(autoProfileSettingsPage);
        devicesComboBox->addItem(QString());
        devicesComboBox->setObjectName(QString::fromUtf8("devicesComboBox"));

        horizontalLayout_5->addWidget(devicesComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_2);

        autoProfileTableWidget = new QTableWidget(autoProfileSettingsPage);
        if (autoProfileTableWidget->columnCount() < 8)
            autoProfileTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem10);
        autoProfileTableWidget->setObjectName(QString::fromUtf8("autoProfileTableWidget"));
        autoProfileTableWidget->setEnabled(false);
        autoProfileTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        autoProfileTableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        autoProfileTableWidget->setColumnCount(8);
        autoProfileTableWidget->horizontalHeader()->setVisible(false);
        autoProfileTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        autoProfileTableWidget->horizontalHeader()->setDefaultSectionSize(100);
        autoProfileTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        autoProfileTableWidget->horizontalHeader()->setStretchLastSection(true);
        autoProfileTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(autoProfileTableWidget);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        autoProfileAddPushButton = new QPushButton(autoProfileSettingsPage);
        autoProfileAddPushButton->setObjectName(QString::fromUtf8("autoProfileAddPushButton"));
        autoProfileAddPushButton->setEnabled(false);
        autoProfileAddPushButton->setIcon(icon);

        horizontalLayout_7->addWidget(autoProfileAddPushButton);

        autoProfileEditPushButton = new QPushButton(autoProfileSettingsPage);
        autoProfileEditPushButton->setObjectName(QString::fromUtf8("autoProfileEditPushButton"));
        autoProfileEditPushButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        autoProfileEditPushButton->setIcon(icon2);

        horizontalLayout_7->addWidget(autoProfileEditPushButton);

        autoProfileDeletePushButton = new QPushButton(autoProfileSettingsPage);
        autoProfileDeletePushButton->setObjectName(QString::fromUtf8("autoProfileDeletePushButton"));
        autoProfileDeletePushButton->setEnabled(false);
        autoProfileDeletePushButton->setIcon(icon1);

        horizontalLayout_7->addWidget(autoProfileDeletePushButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(autoProfileSettingsPage);
        mouseSettingsPage = new QWidget();
        mouseSettingsPage->setObjectName(QString::fromUtf8("mouseSettingsPage"));
        verticalLayout_9 = new QVBoxLayout(mouseSettingsPage);
        verticalLayout_9->setSpacing(10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 4, -1, -1);
        disableWindowsEnhancedPointCheckBox = new QCheckBox(mouseSettingsPage);
        disableWindowsEnhancedPointCheckBox->setObjectName(QString::fromUtf8("disableWindowsEnhancedPointCheckBox"));

        verticalLayout_9->addWidget(disableWindowsEnhancedPointCheckBox);

        groupBox = new QGroupBox(mouseSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 10, -1, 20);
        smoothingEnableCheckBox = new QCheckBox(groupBox);
        smoothingEnableCheckBox->setObjectName(QString::fromUtf8("smoothingEnableCheckBox"));

        verticalLayout_7->addWidget(smoothingEnableCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        historySizeSpinBox = new QSpinBox(groupBox);
        historySizeSpinBox->setObjectName(QString::fromUtf8("historySizeSpinBox"));
        historySizeSpinBox->setEnabled(false);
        historySizeSpinBox->setMinimum(1);
        historySizeSpinBox->setMaximum(100);
        historySizeSpinBox->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, historySizeSpinBox);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        weightModifierDoubleSpinBox = new QDoubleSpinBox(groupBox);
        weightModifierDoubleSpinBox->setObjectName(QString::fromUtf8("weightModifierDoubleSpinBox"));
        weightModifierDoubleSpinBox->setEnabled(false);
        weightModifierDoubleSpinBox->setMaximum(1.000000000000000);
        weightModifierDoubleSpinBox->setSingleStep(0.100000000000000);
        weightModifierDoubleSpinBox->setValue(0.200000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, weightModifierDoubleSpinBox);


        verticalLayout_7->addLayout(formLayout);


        verticalLayout_9->addWidget(groupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mouseRefreshRateLabel = new QLabel(mouseSettingsPage);
        mouseRefreshRateLabel->setObjectName(QString::fromUtf8("mouseRefreshRateLabel"));

        horizontalLayout_10->addWidget(mouseRefreshRateLabel);

        mouseRefreshRateComboBox = new QComboBox(mouseSettingsPage);
        mouseRefreshRateComboBox->setObjectName(QString::fromUtf8("mouseRefreshRateComboBox"));

        horizontalLayout_10->addWidget(mouseRefreshRateComboBox);


        verticalLayout_9->addLayout(horizontalLayout_10);

        springGroupBox = new QGroupBox(mouseSettingsPage);
        springGroupBox->setObjectName(QString::fromUtf8("springGroupBox"));
        verticalLayout_8 = new QVBoxLayout(springGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 10, -1, 20);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        springScreenLabel = new QLabel(springGroupBox);
        springScreenLabel->setObjectName(QString::fromUtf8("springScreenLabel"));

        horizontalLayout_11->addWidget(springScreenLabel);

        springScreenComboBox = new QComboBox(springGroupBox);
        springScreenComboBox->setObjectName(QString::fromUtf8("springScreenComboBox"));

        horizontalLayout_11->addWidget(springScreenComboBox);


        verticalLayout_8->addLayout(horizontalLayout_11);


        verticalLayout_9->addWidget(springGroupBox);

        extraInfoFrame = new QFrame(mouseSettingsPage);
        extraInfoFrame->setObjectName(QString::fromUtf8("extraInfoFrame"));
        extraInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        extraInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(extraInfoFrame);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        accelNumTitleLabel = new QLabel(extraInfoFrame);
        accelNumTitleLabel->setObjectName(QString::fromUtf8("accelNumTitleLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(accelNumTitleLabel->sizePolicy().hasHeightForWidth());
        accelNumTitleLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(accelNumTitleLabel);

        accelNumLabel = new QLabel(extraInfoFrame);
        accelNumLabel->setObjectName(QString::fromUtf8("accelNumLabel"));
        sizePolicy3.setHeightForWidth(accelNumLabel->sizePolicy().hasHeightForWidth());
        accelNumLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(accelNumLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        accelDenomTitleLabel = new QLabel(extraInfoFrame);
        accelDenomTitleLabel->setObjectName(QString::fromUtf8("accelDenomTitleLabel"));

        horizontalLayout_15->addWidget(accelDenomTitleLabel);

        accelDenomLabel = new QLabel(extraInfoFrame);
        accelDenomLabel->setObjectName(QString::fromUtf8("accelDenomLabel"));

        horizontalLayout_15->addWidget(accelDenomLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        accelThresTitleLabel = new QLabel(extraInfoFrame);
        accelThresTitleLabel->setObjectName(QString::fromUtf8("accelThresTitleLabel"));

        horizontalLayout_14->addWidget(accelThresTitleLabel);

        accelThresLabel = new QLabel(extraInfoFrame);
        accelThresLabel->setObjectName(QString::fromUtf8("accelThresLabel"));

        horizontalLayout_14->addWidget(accelThresLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        resetAccelPushButton = new QPushButton(extraInfoFrame);
        resetAccelPushButton->setObjectName(QString::fromUtf8("resetAccelPushButton"));

        horizontalLayout_16->addWidget(resetAccelPushButton);


        verticalLayout_10->addLayout(horizontalLayout_16);


        verticalLayout_9->addWidget(extraInfoFrame);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_9->addItem(verticalSpacer_5);

        stackedWidget->addWidget(mouseSettingsPage);
        Advanced = new QWidget();
        Advanced->setObjectName(QString::fromUtf8("Advanced"));
        verticalLayout_12 = new QVBoxLayout(Advanced);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_12->addItem(verticalSpacer_11);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_9 = new QLabel(Advanced);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_17->addWidget(label_9);

        logFilePathEdit = new QLineEdit(Advanced);
        logFilePathEdit->setObjectName(QString::fromUtf8("logFilePathEdit"));
        logFilePathEdit->setClearButtonEnabled(true);

        horizontalLayout_17->addWidget(logFilePathEdit);

        logFilePushButton = new QPushButton(Advanced);
        logFilePushButton->setObjectName(QString::fromUtf8("logFilePushButton"));

        horizontalLayout_17->addWidget(logFilePushButton);


        verticalLayout_12->addLayout(horizontalLayout_17);

        label_11 = new QLabel(Advanced);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setScaledContents(true);
        label_11->setWordWrap(true);

        verticalLayout_12->addWidget(label_11);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_12->addItem(verticalSpacer_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_10 = new QLabel(Advanced);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_18->addWidget(label_10);

        logLevelComboBox = new QComboBox(Advanced);
        logLevelComboBox->addItem(QString());
        logLevelComboBox->addItem(QString());
        logLevelComboBox->addItem(QString());
        logLevelComboBox->addItem(QString());
        logLevelComboBox->addItem(QString());
        logLevelComboBox->addItem(QString());
        logLevelComboBox->setObjectName(QString::fromUtf8("logLevelComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(logLevelComboBox->sizePolicy().hasHeightForWidth());
        logLevelComboBox->setSizePolicy(sizePolicy4);

        horizontalLayout_18->addWidget(logLevelComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_6);


        verticalLayout_12->addLayout(horizontalLayout_18);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        verticalLayout_12->addItem(verticalSpacer_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        logLevelNoteLabel = new QLabel(Advanced);
        logLevelNoteLabel->setObjectName(QString::fromUtf8("logLevelNoteLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(logLevelNoteLabel->sizePolicy().hasHeightForWidth());
        logLevelNoteLabel->setSizePolicy(sizePolicy5);
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        logLevelNoteLabel->setFont(font);
        logLevelNoteLabel->setScaledContents(true);
        logLevelNoteLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        logLevelNoteLabel->setWordWrap(true);
        logLevelNoteLabel->setIndent(-1);

        verticalLayout_11->addWidget(logLevelNoteLabel);


        verticalLayout_12->addLayout(verticalLayout_11);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_12->addItem(verticalSpacer_8);

        stackedWidget->addWidget(Advanced);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(5, 5, 5, 5);
        resetBtn = new QPushButton(MainSettingsDialog);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));

        horizontalLayout_19->addWidget(resetBtn);

        buttonBox = new QDialogButtonBox(MainSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_19->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_19);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(profileDefaultDirLineEdit);
        label_6->setBuddy(historySizeSpinBox);
        label_7->setBuddy(weightModifierDoubleSpinBox);
        springScreenLabel->setBuddy(springScreenComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MainSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MainSettingsDialog, SLOT(reject()));

        categoriesListWidget->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(2);
        localeListWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MainSettingsDialog)
    {
        MainSettingsDialog->setWindowTitle(QCoreApplication::translate("MainSettingsDialog", "Edit Settings", nullptr));

        const bool __sortingEnabled = categoriesListWidget->isSortingEnabled();
        categoriesListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = categoriesListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainSettingsDialog", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = categoriesListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainSettingsDialog", "Controller Mappings", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = categoriesListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainSettingsDialog", "Language", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = categoriesListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainSettingsDialog", "Auto Profile", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = categoriesListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainSettingsDialog", "Mouse", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = categoriesListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainSettingsDialog", "Advanced", nullptr));
        categoriesListWidget->setSortingEnabled(__sortingEnabled);

        autoProfileDisabledInfo->setText(QCoreApplication::translate("MainSettingsDialog", "Auto Profile functionality is incompatible with Wayland session <a href=\"https://github.com/AntiMicroX/antimicrox/issues/303\">more info</a>", nullptr));
        label_2->setText(QCoreApplication::translate("MainSettingsDialog", "Pro&file Directory:", nullptr));
#if QT_CONFIG(tooltip)
        profileDefaultDirLineEdit->setToolTip(QCoreApplication::translate("MainSettingsDialog", "<html><head/><body><p>Specify the default directory that the program should use in file dialogs when loading a profile or saving a new profile.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        profileOpenDirPushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("MainSettingsDialog", "Recent Profile Count:", nullptr));
#if QT_CONFIG(tooltip)
        numberRecentProfileSpinBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "<html><head/><body><p>Number of profiles that can be placed in recent profile list. 0 will result in the program not enforcing a limit on the number of profiles displayed.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        gamepadPollRateLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Gamepad Poll Rate:", nullptr));
#if QT_CONFIG(tooltip)
        gamepadPollRateComboBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Change the poll rate that the program uses to discover new\n"
"events from gamepads. Defaults to 10 ms.\n"
"\n"
"Reducing the poll rate value could cause the application to\n"
"use more CPU power so please test the setting that you use\n"
"before using AntiMicroX unattended.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        closeToTrayCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Hide main window when the main window close button is\n"
"clicked instead of quitting the program.", nullptr));
#endif // QT_CONFIG(tooltip)
        closeToTrayCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Close To Tray", nullptr));
#if QT_CONFIG(tooltip)
        launchAtWinStartupCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Have Windows start AntiMicroX at system startup.", nullptr));
#endif // QT_CONFIG(tooltip)
        launchAtWinStartupCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Launch At Windows Startup", nullptr));
#if QT_CONFIG(tooltip)
        traySingleProfileListCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Display recent profiles for all controllers\n"
"as a single list in the tray menu. Defaults\n"
"to using sub-menus.", nullptr));
#endif // QT_CONFIG(tooltip)
        traySingleProfileListCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Single Profile List in Tray", nullptr));
#if QT_CONFIG(tooltip)
        minimizeTaskbarCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Have the program minimize to the taskbar.\n"
"By default, the program minimizes to the system\n"
"tray if available.", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeTaskbarCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Minimize to Taskbar", nullptr));
#if QT_CONFIG(tooltip)
        hideEmptyCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "This option will cause the program to hide all\n"
"buttons that have no slots assigned to them.\n"
"The Quick Set dialog window will have to be used\n"
"to bring up the edit dialog for gamepad buttons.", nullptr));
#endif // QT_CONFIG(tooltip)
        hideEmptyCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Hide Empty Buttons", nullptr));
#if QT_CONFIG(tooltip)
        autoLoadPreviousCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "When the program is launched, open the last\n"
"known profile that was opened during the\n"
"previous session.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoLoadPreviousCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Auto Load Last Opened Profile", nullptr));
#if QT_CONFIG(tooltip)
        launchInTrayCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Only show the system tray icon when the program\n"
"first launches.", nullptr));
#endif // QT_CONFIG(tooltip)
        launchInTrayCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Launch in Tray", nullptr));
#if QT_CONFIG(tooltip)
        associateProfilesCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Associate .amgp files with AntiMicroX in Windows Explorer.", nullptr));
#endif // QT_CONFIG(tooltip)
        associateProfilesCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Associate Profiles", nullptr));
#if QT_CONFIG(tooltip)
        attachNumKeypadCheckbox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Remember, it won't work if you don't have such keypad connected to computer or if it's not embedded like in desktop PCs", nullptr));
#endif // QT_CONFIG(tooltip)
        attachNumKeypadCheckbox->setText(QCoreApplication::translate("MainSettingsDialog", "Attach the numeric keypad", nullptr));
        showLowBatteryNotification->setText(QCoreApplication::translate("MainSettingsDialog", "Show low battery notification", nullptr));
        showEmptyBatteryNotification->setText(QCoreApplication::translate("MainSettingsDialog", "Show empty battery notification", nullptr));
        keyRepeatGroupBox->setTitle(QCoreApplication::translate("MainSettingsDialog", "Key Repeat", nullptr));
#if QT_CONFIG(tooltip)
        keyRepeatEnableCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Active keys will be repeatedly pressed when this\n"
"option is enabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        keyRepeatEnableCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Enable", nullptr));
        label_4->setText(QCoreApplication::translate("MainSettingsDialog", "Delay:", nullptr));
#if QT_CONFIG(tooltip)
        keyDelayHorizontalSlider->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Specifies how much time should elapse before key repeating\n"
"begins.", nullptr));
#endif // QT_CONFIG(tooltip)
        keyDelaySpinBox->setSuffix(QCoreApplication::translate("MainSettingsDialog", " ms", nullptr));
        label_5->setText(QCoreApplication::translate("MainSettingsDialog", "Rate:", nullptr));
#if QT_CONFIG(tooltip)
        keyRateHorizontalSlider->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Specifies how many times key presses will be performed\n"
"per seconds.", nullptr));
#endif // QT_CONFIG(tooltip)
        keyRateSpinBox->setSuffix(QCoreApplication::translate("MainSettingsDialog", " times/s", nullptr));
        label->setText(QCoreApplication::translate("MainSettingsDialog", "Below is a list of the custom mappings that have been saved. You can use the following table to delete mappings or have mappings temporarily disabled. You can also disable mappings that are included with SDL; just insert a new row with the appropriate joystick GUID and check disable.\n"
"\n"
"Settings will not take affect until you either refresh all joysticks or unplug that particular joystick.", nullptr));
        QTableWidgetItem *___qtablewidgetitem = controllerMappingsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainSettingsDialog", "GUID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = controllerMappingsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainSettingsDialog", "Mapping String", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = controllerMappingsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainSettingsDialog", "Disable?", nullptr));
        mappngInsertPushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Add", nullptr));
        mappingDeletePushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Delete", nullptr));
        label_8->setText(QCoreApplication::translate("MainSettingsDialog", "<html><head/><body><p>AntiMicroX has been translated into many different languages by contributors. By default, the program will choose an appropriate translation based on your system's locale setting. However, you can make AntiMicroX load a different translation depending on the language that you choose from the list below.</p></body></html>", nullptr));

        const bool __sortingEnabled1 = localeListWidget->isSortingEnabled();
        localeListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = localeListWidget->item(0);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainSettingsDialog", "Default", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = localeListWidget->item(1);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainSettingsDialog", "Portugu\303\252s do Brasil", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = localeListWidget->item(2);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainSettingsDialog", "English", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = localeListWidget->item(3);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainSettingsDialog", "Fran\303\247ais", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = localeListWidget->item(4);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainSettingsDialog", "Deutsch", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = localeListWidget->item(5);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainSettingsDialog", "Italiano", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = localeListWidget->item(6);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("MainSettingsDialog", "\346\227\245\346\234\254\350\252\236", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = localeListWidget->item(7);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("MainSettingsDialog", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = localeListWidget->item(8);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("MainSettingsDialog", "\321\201\321\200\320\277\321\201\320\272\320\270 / srpski", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = localeListWidget->item(9);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("MainSettingsDialog", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = localeListWidget->item(10);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("MainSettingsDialog", "Espa\303\261ol", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = localeListWidget->item(11);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("MainSettingsDialog", "\321\203\320\272\321\200\320\260\321\227\320\275\321\201\321\214\320\272\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = localeListWidget->item(12);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("MainSettingsDialog", "Polski", nullptr));
        localeListWidget->setSortingEnabled(__sortingEnabled1);

        label_translation_help->setText(QCoreApplication::translate("MainSettingsDialog", "You can help with translating AntiMicroX. Just click here: <a\n"
"                          href=\"https://hosted.weblate.org/projects/antimicrox/\">link</a>", nullptr));
        autoProfileDescription->setText(QCoreApplication::translate("MainSettingsDialog", "Auto Profile functionality allows you to automatically switch active profile based on the active application window.", nullptr));
        activeCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Active", nullptr));
        deivcesLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Devices:", nullptr));
        devicesComboBox->setItemText(0, QCoreApplication::translate("MainSettingsDialog", "All", nullptr));

        QTableWidgetItem *___qtablewidgetitem3 = autoProfileTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainSettingsDialog", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = autoProfileTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainSettingsDialog", "Device", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = autoProfileTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainSettingsDialog", "Profile", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = autoProfileTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainSettingsDialog", "Class", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = autoProfileTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainSettingsDialog", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = autoProfileTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainSettingsDialog", "Program", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = autoProfileTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainSettingsDialog", "Default?", nullptr));
        autoProfileAddPushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Add", nullptr));
        autoProfileEditPushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Edit", nullptr));
        autoProfileDeletePushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        disableWindowsEnhancedPointCheckBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Disable the \"Enhanced Pointer Precision\" Windows setting\n"
"while AntiMicroX is running. Disabling \"Enhanced Pointer Precision\"\n"
"will allow mouse movement within AntiMicroX to be more\n"
"precise.", nullptr));
#endif // QT_CONFIG(tooltip)
        disableWindowsEnhancedPointCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Disable Enhance Pointer Precision", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainSettingsDialog", "Smoothing", nullptr));
        smoothingEnableCheckBox->setText(QCoreApplication::translate("MainSettingsDialog", "Enable", nullptr));
        label_6->setText(QCoreApplication::translate("MainSettingsDialog", "History Si&ze:", nullptr));
        label_7->setText(QCoreApplication::translate("MainSettingsDialog", "Weight Modi&fier:", nullptr));
        mouseRefreshRateLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Refresh Rate:", nullptr));
#if QT_CONFIG(tooltip)
        mouseRefreshRateComboBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "The refresh rate is the amount of time that will elapse\n"
"in between mouse events. Please be cautious when\n"
"editing this setting as it will cause the program to use\n"
"more CPU power. Setting this value too low can cause\n"
"system instability. Please test the setting before using\n"
"it unattended.", nullptr));
#endif // QT_CONFIG(tooltip)
        springGroupBox->setTitle(QCoreApplication::translate("MainSettingsDialog", "Spring", nullptr));
        springScreenLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Screen:", nullptr));
#if QT_CONFIG(tooltip)
        springScreenComboBox->setToolTip(QCoreApplication::translate("MainSettingsDialog", "Utilize the specified screen for spring mode. On Linux, the\n"
"default is to use the primary screen. On Windows, the default\n"
"is to use all available screens.", nullptr));
#endif // QT_CONFIG(tooltip)
        accelNumTitleLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Accel Numerator:", nullptr));
        accelNumLabel->setText(QCoreApplication::translate("MainSettingsDialog", "0", nullptr));
        accelDenomTitleLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Accel Denominator:", nullptr));
        accelDenomLabel->setText(QCoreApplication::translate("MainSettingsDialog", "0", nullptr));
        accelThresTitleLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Accel Threshold:", nullptr));
        accelThresLabel->setText(QCoreApplication::translate("MainSettingsDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        resetAccelPushButton->setToolTip(QCoreApplication::translate("MainSettingsDialog", "If the acceleration values for the virtual mouse have been\n"
"changed by a different process, particularly when quitting\n"
"an older game, then you might want to reset the acceleration\n"
"values used by the virtual mouse.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetAccelPushButton->setText(QCoreApplication::translate("MainSettingsDialog", "Reset Acceleration", nullptr));
        label_9->setText(QCoreApplication::translate("MainSettingsDialog", "Log File:", nullptr));
        label_11->setText(QCoreApplication::translate("MainSettingsDialog", "<html><head/><body><p><span style=\" font-style:italic;\">Note Unspecified log file allows printing logs in console output</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainSettingsDialog", "Log Level:", nullptr));
        logLevelComboBox->setItemText(0, QCoreApplication::translate("MainSettingsDialog", "None", nullptr));
        logLevelComboBox->setItemText(1, QCoreApplication::translate("MainSettingsDialog", "Error", nullptr));
        logLevelComboBox->setItemText(2, QCoreApplication::translate("MainSettingsDialog", "Warning", nullptr));
        logLevelComboBox->setItemText(3, QCoreApplication::translate("MainSettingsDialog", "Info", nullptr));
        logLevelComboBox->setItemText(4, QCoreApplication::translate("MainSettingsDialog", "Verbose", nullptr));
        logLevelComboBox->setItemText(5, QCoreApplication::translate("MainSettingsDialog", "Debug", nullptr));

        logLevelNoteLabel->setText(QCoreApplication::translate("MainSettingsDialog", "Note: To see the change of log level in console output (not in log file), application restart is required", nullptr));
        resetBtn->setText(QCoreApplication::translate("MainSettingsDialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainSettingsDialog: public Ui_MainSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSETTINGSDIALOG_H
