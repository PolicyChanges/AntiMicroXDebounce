/********************************************************************************
** Form generated from reading UI file 'joycontrolstickeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYCONTROLSTICKEDITDIALOG_H
#define UI_JOYCONTROLSTICKEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "joycontrolstickstatusbox.h"

QT_BEGIN_NAMESPACE

class Ui_JoyControlStickEditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *mainHorizontalLayout;
    QVBoxLayout *leftVerticalLayout;
    JoyControlStickStatusBox *stickStatusBoxWidget;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *stickReadingsLayout;
    QLabel *diagonalLabel;
    QLabel *fromSafeZoneValueLabel;
    QLabel *yCoordinateLabel;
    QLabel *bearingHeaderLabel;
    QLabel *xCoordinateLabel;
    QLabel *distanceLabel_2;
    QLabel *yHeaderLabel;
    QLabel *fromSafeZoneLabel;
    QLabel *xHeaderLabel;
    QLabel *distanceLabel;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *widgetsVerticalLayout;
    QGridLayout *topGrid;
    QLabel *presetsLabel;
    QComboBox *presetsComboBox;
    QLabel *stickModeLabel;
    QComboBox *joyModeComboBox;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *middleGrid;
    QLabel *modifierLabel;
    QSpinBox *diagonalRangeSpinBox;
    QSlider *stickDelaySlider;
    QLabel *squareStickLabel;
    QLabel *diagonalRangeLabel;
    QSpinBox *squareStickSpinBox;
    QLabel *deadZoneLabel;
    QLabel *maxZoneLabel;
    QPushButton *modifierPushButton;
    QLabel *modifierZoneLabel;
    QDoubleSpinBox *stickDelayDoubleSpinBox;
    QSpinBox *deadZoneSpinBox;
    QSpacerItem *verticalSpacer;
    QLabel *stickDelayTitleLabel;
    QSlider *maxZoneSlider;
    QSlider *modifierZoneSlider;
    QSpinBox *maxZoneSpinBox;
    QSlider *deadZoneSlider;
    QSpinBox *modifierZoneSpinBox;
    QSlider *squareStickSlider;
    QSlider *diagonalRangeSlider;
    QCheckBox *modifierZoneInvertedCheckBox;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *nameHorizontalLayout;
    QLabel *stickNameLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *stickNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoyControlStickEditDialog)
    {
        if (JoyControlStickEditDialog->objectName().isEmpty())
            JoyControlStickEditDialog->setObjectName(QString::fromUtf8("JoyControlStickEditDialog"));
        JoyControlStickEditDialog->resize(702, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoyControlStickEditDialog->sizePolicy().hasHeightForWidth());
        JoyControlStickEditDialog->setSizePolicy(sizePolicy);
        JoyControlStickEditDialog->setMinimumSize(QSize(0, 0));
        JoyControlStickEditDialog->setStyleSheet(QString::fromUtf8("JoyControlStickButtonPushButton[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}\n"
""));
        JoyControlStickEditDialog->setModal(true);
        verticalLayout_5 = new QVBoxLayout(JoyControlStickEditDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mainHorizontalLayout = new QHBoxLayout();
        mainHorizontalLayout->setSpacing(20);
        mainHorizontalLayout->setObjectName(QString::fromUtf8("mainHorizontalLayout"));
        leftVerticalLayout = new QVBoxLayout();
        leftVerticalLayout->setObjectName(QString::fromUtf8("leftVerticalLayout"));
        stickStatusBoxWidget = new JoyControlStickStatusBox(JoyControlStickEditDialog);
        stickStatusBoxWidget->setObjectName(QString::fromUtf8("stickStatusBoxWidget"));
        sizePolicy.setHeightForWidth(stickStatusBoxWidget->sizePolicy().hasHeightForWidth());
        stickStatusBoxWidget->setSizePolicy(sizePolicy);
        stickStatusBoxWidget->setMinimumSize(QSize(200, 200));
        stickStatusBoxWidget->setMaximumSize(QSize(16777215, 16777215));
        stickStatusBoxWidget->setSizeIncrement(QSize(0, 0));
        stickStatusBoxWidget->setBaseSize(QSize(200, 200));

        leftVerticalLayout->addWidget(stickStatusBoxWidget);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        leftVerticalLayout->addItem(verticalSpacer_3);

        stickReadingsLayout = new QGridLayout();
        stickReadingsLayout->setObjectName(QString::fromUtf8("stickReadingsLayout"));
        diagonalLabel = new QLabel(JoyControlStickEditDialog);
        diagonalLabel->setObjectName(QString::fromUtf8("diagonalLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(diagonalLabel->sizePolicy().hasHeightForWidth());
        diagonalLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(diagonalLabel, 3, 2, 1, 1);

        fromSafeZoneValueLabel = new QLabel(JoyControlStickEditDialog);
        fromSafeZoneValueLabel->setObjectName(QString::fromUtf8("fromSafeZoneValueLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneValueLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneValueLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(fromSafeZoneValueLabel, 4, 2, 1, 1);

        yCoordinateLabel = new QLabel(JoyControlStickEditDialog);
        yCoordinateLabel->setObjectName(QString::fromUtf8("yCoordinateLabel"));
        sizePolicy1.setHeightForWidth(yCoordinateLabel->sizePolicy().hasHeightForWidth());
        yCoordinateLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(yCoordinateLabel, 1, 2, 1, 1);

        bearingHeaderLabel = new QLabel(JoyControlStickEditDialog);
        bearingHeaderLabel->setObjectName(QString::fromUtf8("bearingHeaderLabel"));
        sizePolicy1.setHeightForWidth(bearingHeaderLabel->sizePolicy().hasHeightForWidth());
        bearingHeaderLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(bearingHeaderLabel, 3, 0, 1, 1);

        xCoordinateLabel = new QLabel(JoyControlStickEditDialog);
        xCoordinateLabel->setObjectName(QString::fromUtf8("xCoordinateLabel"));
        sizePolicy1.setHeightForWidth(xCoordinateLabel->sizePolicy().hasHeightForWidth());
        xCoordinateLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(xCoordinateLabel, 0, 2, 1, 1);

        distanceLabel_2 = new QLabel(JoyControlStickEditDialog);
        distanceLabel_2->setObjectName(QString::fromUtf8("distanceLabel_2"));
        sizePolicy1.setHeightForWidth(distanceLabel_2->sizePolicy().hasHeightForWidth());
        distanceLabel_2->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(distanceLabel_2, 2, 0, 1, 1);

        yHeaderLabel = new QLabel(JoyControlStickEditDialog);
        yHeaderLabel->setObjectName(QString::fromUtf8("yHeaderLabel"));
        sizePolicy1.setHeightForWidth(yHeaderLabel->sizePolicy().hasHeightForWidth());
        yHeaderLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(yHeaderLabel, 1, 0, 1, 1);

        fromSafeZoneLabel = new QLabel(JoyControlStickEditDialog);
        fromSafeZoneLabel->setObjectName(QString::fromUtf8("fromSafeZoneLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(fromSafeZoneLabel, 4, 0, 1, 1);

        xHeaderLabel = new QLabel(JoyControlStickEditDialog);
        xHeaderLabel->setObjectName(QString::fromUtf8("xHeaderLabel"));
        sizePolicy1.setHeightForWidth(xHeaderLabel->sizePolicy().hasHeightForWidth());
        xHeaderLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(xHeaderLabel, 0, 0, 1, 1);

        distanceLabel = new QLabel(JoyControlStickEditDialog);
        distanceLabel->setObjectName(QString::fromUtf8("distanceLabel"));
        sizePolicy1.setHeightForWidth(distanceLabel->sizePolicy().hasHeightForWidth());
        distanceLabel->setSizePolicy(sizePolicy1);

        stickReadingsLayout->addWidget(distanceLabel, 2, 2, 1, 1);


        leftVerticalLayout->addLayout(stickReadingsLayout);

        verticalSpacer_4 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        leftVerticalLayout->addItem(verticalSpacer_4);

        leftVerticalLayout->setStretch(0, 2);
        leftVerticalLayout->setStretch(3, 1);

        mainHorizontalLayout->addLayout(leftVerticalLayout);

        horizontalSpacer_2 = new QSpacerItem(16, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        mainHorizontalLayout->addItem(horizontalSpacer_2);

        widgetsVerticalLayout = new QVBoxLayout();
        widgetsVerticalLayout->setObjectName(QString::fromUtf8("widgetsVerticalLayout"));
        topGrid = new QGridLayout();
        topGrid->setSpacing(4);
        topGrid->setObjectName(QString::fromUtf8("topGrid"));
        presetsLabel = new QLabel(JoyControlStickEditDialog);
        presetsLabel->setObjectName(QString::fromUtf8("presetsLabel"));

        topGrid->addWidget(presetsLabel, 0, 0, 1, 1);

        presetsComboBox = new QComboBox(JoyControlStickEditDialog);
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->setObjectName(QString::fromUtf8("presetsComboBox"));
        presetsComboBox->setMinimumSize(QSize(282, 0));

        topGrid->addWidget(presetsComboBox, 0, 1, 1, 1);

        stickModeLabel = new QLabel(JoyControlStickEditDialog);
        stickModeLabel->setObjectName(QString::fromUtf8("stickModeLabel"));

        topGrid->addWidget(stickModeLabel, 1, 0, 1, 1);

        joyModeComboBox = new QComboBox(JoyControlStickEditDialog);
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->setObjectName(QString::fromUtf8("joyModeComboBox"));
        joyModeComboBox->setMinimumSize(QSize(282, 0));

        topGrid->addWidget(joyModeComboBox, 1, 1, 1, 1);


        widgetsVerticalLayout->addLayout(topGrid);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        widgetsVerticalLayout->addItem(verticalSpacer_2);

        middleGrid = new QGridLayout();
        middleGrid->setSpacing(4);
        middleGrid->setObjectName(QString::fromUtf8("middleGrid"));
        modifierLabel = new QLabel(JoyControlStickEditDialog);
        modifierLabel->setObjectName(QString::fromUtf8("modifierLabel"));

        middleGrid->addWidget(modifierLabel, 14, 0, 1, 1);

        diagonalRangeSpinBox = new QSpinBox(JoyControlStickEditDialog);
        diagonalRangeSpinBox->setObjectName(QString::fromUtf8("diagonalRangeSpinBox"));
        diagonalRangeSpinBox->setMinimum(1);
        diagonalRangeSpinBox->setMaximum(90);
        diagonalRangeSpinBox->setValue(90);

        middleGrid->addWidget(diagonalRangeSpinBox, 8, 2, 1, 1);

        stickDelaySlider = new QSlider(JoyControlStickEditDialog);
        stickDelaySlider->setObjectName(QString::fromUtf8("stickDelaySlider"));
        stickDelaySlider->setMinimum(0);
        stickDelaySlider->setMaximum(100);
        stickDelaySlider->setSingleStep(1);
        stickDelaySlider->setPageStep(10);
        stickDelaySlider->setValue(0);
        stickDelaySlider->setSliderPosition(0);
        stickDelaySlider->setOrientation(Qt::Horizontal);
        stickDelaySlider->setTickPosition(QSlider::TicksBelow);
        stickDelaySlider->setTickInterval(0);

        middleGrid->addWidget(stickDelaySlider, 12, 1, 1, 1);

        squareStickLabel = new QLabel(JoyControlStickEditDialog);
        squareStickLabel->setObjectName(QString::fromUtf8("squareStickLabel"));

        middleGrid->addWidget(squareStickLabel, 10, 0, 1, 1);

        diagonalRangeLabel = new QLabel(JoyControlStickEditDialog);
        diagonalRangeLabel->setObjectName(QString::fromUtf8("diagonalRangeLabel"));

        middleGrid->addWidget(diagonalRangeLabel, 8, 0, 1, 1);

        squareStickSpinBox = new QSpinBox(JoyControlStickEditDialog);
        squareStickSpinBox->setObjectName(QString::fromUtf8("squareStickSpinBox"));
        squareStickSpinBox->setMinimum(0);
        squareStickSpinBox->setMaximum(100);
        squareStickSpinBox->setSingleStep(1);
        squareStickSpinBox->setValue(0);

        middleGrid->addWidget(squareStickSpinBox, 10, 2, 1, 1);

        deadZoneLabel = new QLabel(JoyControlStickEditDialog);
        deadZoneLabel->setObjectName(QString::fromUtf8("deadZoneLabel"));

        middleGrid->addWidget(deadZoneLabel, 2, 0, 1, 1);

        maxZoneLabel = new QLabel(JoyControlStickEditDialog);
        maxZoneLabel->setObjectName(QString::fromUtf8("maxZoneLabel"));

        middleGrid->addWidget(maxZoneLabel, 6, 0, 1, 1);

        modifierPushButton = new QPushButton(JoyControlStickEditDialog);
        modifierPushButton->setObjectName(QString::fromUtf8("modifierPushButton"));

        middleGrid->addWidget(modifierPushButton, 14, 2, 1, 1);

        modifierZoneLabel = new QLabel(JoyControlStickEditDialog);
        modifierZoneLabel->setObjectName(QString::fromUtf8("modifierZoneLabel"));

        middleGrid->addWidget(modifierZoneLabel, 16, 0, 1, 1);

        stickDelayDoubleSpinBox = new QDoubleSpinBox(JoyControlStickEditDialog);
        stickDelayDoubleSpinBox->setObjectName(QString::fromUtf8("stickDelayDoubleSpinBox"));
        stickDelayDoubleSpinBox->setReadOnly(false);
        stickDelayDoubleSpinBox->setDecimals(2);
        stickDelayDoubleSpinBox->setMaximum(1.000000000000000);
        stickDelayDoubleSpinBox->setSingleStep(0.010000000000000);

        middleGrid->addWidget(stickDelayDoubleSpinBox, 12, 2, 1, 1);

        deadZoneSpinBox = new QSpinBox(JoyControlStickEditDialog);
        deadZoneSpinBox->setObjectName(QString::fromUtf8("deadZoneSpinBox"));
        deadZoneSpinBox->setMinimumSize(QSize(32, 0));
        deadZoneSpinBox->setMinimum(1);
        deadZoneSpinBox->setMaximum(32737);
        deadZoneSpinBox->setValue(6000);

        middleGrid->addWidget(deadZoneSpinBox, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        middleGrid->addItem(verticalSpacer, 13, 1, 1, 1);

        stickDelayTitleLabel = new QLabel(JoyControlStickEditDialog);
        stickDelayTitleLabel->setObjectName(QString::fromUtf8("stickDelayTitleLabel"));

        middleGrid->addWidget(stickDelayTitleLabel, 12, 0, 1, 1);

        maxZoneSlider = new QSlider(JoyControlStickEditDialog);
        maxZoneSlider->setObjectName(QString::fromUtf8("maxZoneSlider"));
        maxZoneSlider->setMinimum(1);
        maxZoneSlider->setMaximum(32737);
        maxZoneSlider->setSingleStep(100);
        maxZoneSlider->setPageStep(1000);
        maxZoneSlider->setValue(32000);
        maxZoneSlider->setOrientation(Qt::Horizontal);

        middleGrid->addWidget(maxZoneSlider, 6, 1, 1, 1);

        modifierZoneSlider = new QSlider(JoyControlStickEditDialog);
        modifierZoneSlider->setObjectName(QString::fromUtf8("modifierZoneSlider"));
        modifierZoneSlider->setMinimum(1);
        modifierZoneSlider->setMaximum(32737);
        modifierZoneSlider->setSingleStep(100);
        modifierZoneSlider->setPageStep(1000);
        modifierZoneSlider->setValue(6000);
        modifierZoneSlider->setOrientation(Qt::Horizontal);

        middleGrid->addWidget(modifierZoneSlider, 16, 1, 1, 1);

        maxZoneSpinBox = new QSpinBox(JoyControlStickEditDialog);
        maxZoneSpinBox->setObjectName(QString::fromUtf8("maxZoneSpinBox"));
        maxZoneSpinBox->setMinimum(1);
        maxZoneSpinBox->setMaximum(32737);
        maxZoneSpinBox->setValue(32000);

        middleGrid->addWidget(maxZoneSpinBox, 6, 2, 1, 1);

        deadZoneSlider = new QSlider(JoyControlStickEditDialog);
        deadZoneSlider->setObjectName(QString::fromUtf8("deadZoneSlider"));
        deadZoneSlider->setMinimumSize(QSize(200, 0));
        deadZoneSlider->setMinimum(1);
        deadZoneSlider->setMaximum(32737);
        deadZoneSlider->setSingleStep(100);
        deadZoneSlider->setPageStep(1000);
        deadZoneSlider->setValue(6000);
        deadZoneSlider->setOrientation(Qt::Horizontal);

        middleGrid->addWidget(deadZoneSlider, 2, 1, 1, 1);

        modifierZoneSpinBox = new QSpinBox(JoyControlStickEditDialog);
        modifierZoneSpinBox->setObjectName(QString::fromUtf8("modifierZoneSpinBox"));
        modifierZoneSpinBox->setMinimum(1);
        modifierZoneSpinBox->setMaximum(32737);
        modifierZoneSpinBox->setValue(6000);

        middleGrid->addWidget(modifierZoneSpinBox, 16, 2, 1, 1);

        squareStickSlider = new QSlider(JoyControlStickEditDialog);
        squareStickSlider->setObjectName(QString::fromUtf8("squareStickSlider"));
        squareStickSlider->setMinimum(0);
        squareStickSlider->setMaximum(100);
        squareStickSlider->setSingleStep(1);
        squareStickSlider->setPageStep(10);
        squareStickSlider->setValue(0);
        squareStickSlider->setSliderPosition(0);
        squareStickSlider->setOrientation(Qt::Horizontal);

        middleGrid->addWidget(squareStickSlider, 10, 1, 1, 1);

        diagonalRangeSlider = new QSlider(JoyControlStickEditDialog);
        diagonalRangeSlider->setObjectName(QString::fromUtf8("diagonalRangeSlider"));
        diagonalRangeSlider->setMinimum(1);
        diagonalRangeSlider->setMaximum(90);
        diagonalRangeSlider->setOrientation(Qt::Horizontal);

        middleGrid->addWidget(diagonalRangeSlider, 8, 1, 1, 1);

        modifierZoneInvertedCheckBox = new QCheckBox(JoyControlStickEditDialog);
        modifierZoneInvertedCheckBox->setObjectName(QString::fromUtf8("modifierZoneInvertedCheckBox"));

        middleGrid->addWidget(modifierZoneInvertedCheckBox, 14, 1, 1, 1);


        widgetsVerticalLayout->addLayout(middleGrid);

        verticalSpacer_5 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        widgetsVerticalLayout->addItem(verticalSpacer_5);

        nameHorizontalLayout = new QHBoxLayout();
        nameHorizontalLayout->setObjectName(QString::fromUtf8("nameHorizontalLayout"));
        stickNameLabel = new QLabel(JoyControlStickEditDialog);
        stickNameLabel->setObjectName(QString::fromUtf8("stickNameLabel"));

        nameHorizontalLayout->addWidget(stickNameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        nameHorizontalLayout->addItem(horizontalSpacer);

        stickNameLineEdit = new QLineEdit(JoyControlStickEditDialog);
        stickNameLineEdit->setObjectName(QString::fromUtf8("stickNameLineEdit"));

        nameHorizontalLayout->addWidget(stickNameLineEdit);


        widgetsVerticalLayout->addLayout(nameHorizontalLayout);

        mouseSettingsPushButton = new QPushButton(JoyControlStickEditDialog);
        mouseSettingsPushButton->setObjectName(QString::fromUtf8("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("input-mouse");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        widgetsVerticalLayout->addWidget(mouseSettingsPushButton);


        mainHorizontalLayout->addLayout(widgetsVerticalLayout);


        verticalLayout_5->addLayout(mainHorizontalLayout);

        line = new QFrame(JoyControlStickEditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        buttonBox = new QDialogButtonBox(JoyControlStickEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        stickNameLabel->setBuddy(stickNameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(JoyControlStickEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoyControlStickEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoyControlStickEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoyControlStickEditDialog);
    } // setupUi

    void retranslateUi(QDialog *JoyControlStickEditDialog)
    {
        JoyControlStickEditDialog->setWindowTitle(QCoreApplication::translate("JoyControlStickEditDialog", "Dialog", nullptr));
        diagonalLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "0", nullptr));
        fromSafeZoneValueLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "0", nullptr));
        yCoordinateLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "0", nullptr));
        bearingHeaderLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Bearing:", nullptr));
        xCoordinateLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "0", nullptr));
        distanceLabel_2->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Distance:", nullptr));
        yHeaderLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Y:", nullptr));
        fromSafeZoneLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "% Safe Zone:", nullptr));
        xHeaderLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "X:", nullptr));
        distanceLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "0", nullptr));
        presetsLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Presets:", nullptr));
        presetsComboBox->setItemText(0, QString());
        presetsComboBox->setItemText(1, QCoreApplication::translate("JoyControlStickEditDialog", "Mouse (Normal)", nullptr));
        presetsComboBox->setItemText(2, QCoreApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Horizontal)", nullptr));
        presetsComboBox->setItemText(3, QCoreApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Vertical)", nullptr));
        presetsComboBox->setItemText(4, QCoreApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Horizontal + Vertical)", nullptr));
        presetsComboBox->setItemText(5, QCoreApplication::translate("JoyControlStickEditDialog", "Arrows", nullptr));
        presetsComboBox->setItemText(6, QCoreApplication::translate("JoyControlStickEditDialog", "Keys: W | A | S | D", nullptr));
        presetsComboBox->setItemText(7, QCoreApplication::translate("JoyControlStickEditDialog", "NumPad", nullptr));
        presetsComboBox->setItemText(8, QCoreApplication::translate("JoyControlStickEditDialog", "None", nullptr));

        stickModeLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Stick Mode:", nullptr));
        joyModeComboBox->setItemText(0, QCoreApplication::translate("JoyControlStickEditDialog", "Standard", nullptr));
        joyModeComboBox->setItemText(1, QCoreApplication::translate("JoyControlStickEditDialog", "Eight Way", nullptr));
        joyModeComboBox->setItemText(2, QCoreApplication::translate("JoyControlStickEditDialog", "4 Way Cardinal", nullptr));
        joyModeComboBox->setItemText(3, QCoreApplication::translate("JoyControlStickEditDialog", "4 Way Diagonal", nullptr));

#if QT_CONFIG(tooltip)
        joyModeComboBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Standard: 8 region stick with two direction buttons active\n"
"when the stick is in a diagonal region.\n"
"\n"
"Eight Way: 8 region stick with each direction having its\n"
"own dedicated button. Only one button is ever active at\n"
"at time. Useful for rougelike games.\n"
"\n"
"4 Way Cardinal: 4 region stick with regions corresponding to\n"
"the cardinal directions of the stick. Useful for menus.\n"
"\n"
"4 Way Diagonal: 4 region stick with each region corresponding\n"
"to a diagonal zone of the stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        modifierLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Modifier:", nullptr));
#if QT_CONFIG(tooltip)
        diagonalRangeSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "The area (in degrees) that each diagonal region occupies.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        stickDelaySlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        squareStickLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Square Stick:", nullptr));
        diagonalRangeLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Diagonal Range:", nullptr));
#if QT_CONFIG(tooltip)
        squareStickSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Percentage to modify a square stick coordinates to confine values to a circle", nullptr));
#endif // QT_CONFIG(tooltip)
        squareStickSpinBox->setSuffix(QCoreApplication::translate("JoyControlStickEditDialog", "%", nullptr));
        deadZoneLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Dead Zone:", nullptr));
        maxZoneLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Max Zone:", nullptr));
#if QT_CONFIG(tooltip)
        modifierPushButton->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Edit button that is active while the stick is active.\n"
"\n"
"This button is useful for assigning zones with\n"
"modifier keys that can be used to assign walk/run\n"
"functionality to an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        modifierPushButton->setText(QCoreApplication::translate("JoyControlStickEditDialog", "PushButton", nullptr));
        modifierZoneLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Modifier Zone:", nullptr));
#if QT_CONFIG(tooltip)
        stickDelayDoubleSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        stickDelayDoubleSpinBox->setSuffix(QCoreApplication::translate("JoyControlStickEditDialog", " s", nullptr));
#if QT_CONFIG(tooltip)
        deadZoneSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Dead zone value to use for an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        stickDelayTitleLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Stick Delay:", nullptr));
#if QT_CONFIG(tooltip)
        maxZoneSlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Value when an analog stick is considered moved 100%.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        modifierZoneSlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Threshold at which the modifier button gets activated.\n"
"\n"
"This button is useful for assigning zones with\n"
"modifier keys that can be used to assign walk/run\n"
"functionality to an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxZoneSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Value when an analog stick is considered moved 100%.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deadZoneSlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Dead zone value to use for an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        modifierZoneSpinBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Threshold at which the modifier button gets activated.\n"
"\n"
"This button is useful for assigning zones with\n"
"modifier keys that can be used to assign walk/run\n"
"functionality to an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        squareStickSlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Percentage to modify a square stick coordinates to confine values to a circle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        diagonalRangeSlider->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "The area (in degrees) that each diagonal region occupies.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        modifierZoneInvertedCheckBox->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Defines if the modifier buttons gets activated when the stick is inside or outside the threshold value.\n"
"\n"
"This button is useful for assigning zones with\n"
"modifier keys that can be used to assign walk/run\n"
"functionality to an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        modifierZoneInvertedCheckBox->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Invert Modifier Zone", nullptr));
        stickNameLabel->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Na&me:", nullptr));
#if QT_CONFIG(tooltip)
        stickNameLineEdit->setToolTip(QCoreApplication::translate("JoyControlStickEditDialog", "Specify the name of an analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseSettingsPushButton->setText(QCoreApplication::translate("JoyControlStickEditDialog", "Mouse Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoyControlStickEditDialog: public Ui_JoyControlStickEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYCONTROLSTICKEDITDIALOG_H
