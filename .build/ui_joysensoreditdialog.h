/********************************************************************************
** Form generated from reading UI file 'joysensoreditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSENSOREDITDIALOG_H
#define UI_JOYSENSOREDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
#include "joysensorstatusbox.h"

QT_BEGIN_NAMESPACE

class Ui_JoySensorEditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    JoySensorStatusBox *sensorStatusBoxWidget;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *rollValue;
    QLabel *xCoordinateLabel;
    QLabel *zCoordinateValue;
    QLabel *pitchValue;
    QLabel *yCoordinateValue;
    QLabel *accelerationLabel;
    QLabel *accelerationValue;
    QLabel *pitchLabel;
    QLabel *rollLabel;
    QLabel *zCoordinateLabel;
    QLabel *xCoordinateValue;
    QLabel *yCoordinateLabel;
    QLabel *fromSafeZoneLabel;
    QLabel *fromSafeZoneValueLabel;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *presetsComboBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *deadZoneSlider;
    QDoubleSpinBox *deadZoneSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSlider *maxZoneSlider;
    QDoubleSpinBox *maxZoneSpinBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSlider *diagonalRangeSlider;
    QSpinBox *diagonalRangeSpinBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *sensorDelayTitleLabel;
    QSlider *sensorDelaySlider;
    QDoubleSpinBox *sensorDelayDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sensorNameLabel;
    QLineEdit *sensorNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoySensorEditDialog)
    {
        if (JoySensorEditDialog->objectName().isEmpty())
            JoySensorEditDialog->setObjectName(QString::fromUtf8("JoySensorEditDialog"));
        JoySensorEditDialog->resize(702, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoySensorEditDialog->sizePolicy().hasHeightForWidth());
        JoySensorEditDialog->setSizePolicy(sizePolicy);
        JoySensorEditDialog->setMinimumSize(QSize(0, 0));
        JoySensorEditDialog->setStyleSheet(QString::fromUtf8("JoySensorButtonPushButton[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}\n"
""));
        JoySensorEditDialog->setModal(true);
        verticalLayout_5 = new QVBoxLayout(JoySensorEditDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        sensorStatusBoxWidget = new JoySensorStatusBox(JoySensorEditDialog);
        sensorStatusBoxWidget->setObjectName(QString::fromUtf8("sensorStatusBoxWidget"));
        sizePolicy.setHeightForWidth(sensorStatusBoxWidget->sizePolicy().hasHeightForWidth());
        sensorStatusBoxWidget->setSizePolicy(sizePolicy);
        sensorStatusBoxWidget->setMinimumSize(QSize(200, 200));
        sensorStatusBoxWidget->setMaximumSize(QSize(16777215, 16777215));
        sensorStatusBoxWidget->setSizeIncrement(QSize(0, 0));
        sensorStatusBoxWidget->setBaseSize(QSize(200, 200));

        verticalLayout_3->addWidget(sensorStatusBoxWidget);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rollValue = new QLabel(JoySensorEditDialog);
        rollValue->setObjectName(QString::fromUtf8("rollValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rollValue->sizePolicy().hasHeightForWidth());
        rollValue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rollValue, 5, 1, 1, 1);

        xCoordinateLabel = new QLabel(JoySensorEditDialog);
        xCoordinateLabel->setObjectName(QString::fromUtf8("xCoordinateLabel"));
        sizePolicy1.setHeightForWidth(xCoordinateLabel->sizePolicy().hasHeightForWidth());
        xCoordinateLabel->setSizePolicy(sizePolicy1);
        xCoordinateLabel->setText(QString::fromUtf8("X (m/s^2):"));

        gridLayout->addWidget(xCoordinateLabel, 0, 0, 1, 1);

        zCoordinateValue = new QLabel(JoySensorEditDialog);
        zCoordinateValue->setObjectName(QString::fromUtf8("zCoordinateValue"));
        sizePolicy1.setHeightForWidth(zCoordinateValue->sizePolicy().hasHeightForWidth());
        zCoordinateValue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(zCoordinateValue, 2, 1, 1, 1);

        pitchValue = new QLabel(JoySensorEditDialog);
        pitchValue->setObjectName(QString::fromUtf8("pitchValue"));
        sizePolicy1.setHeightForWidth(pitchValue->sizePolicy().hasHeightForWidth());
        pitchValue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pitchValue, 4, 1, 1, 1);

        yCoordinateValue = new QLabel(JoySensorEditDialog);
        yCoordinateValue->setObjectName(QString::fromUtf8("yCoordinateValue"));
        sizePolicy1.setHeightForWidth(yCoordinateValue->sizePolicy().hasHeightForWidth());
        yCoordinateValue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(yCoordinateValue, 1, 1, 1, 1);

        accelerationLabel = new QLabel(JoySensorEditDialog);
        accelerationLabel->setObjectName(QString::fromUtf8("accelerationLabel"));
        sizePolicy1.setHeightForWidth(accelerationLabel->sizePolicy().hasHeightForWidth());
        accelerationLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(accelerationLabel, 3, 0, 1, 1);

        accelerationValue = new QLabel(JoySensorEditDialog);
        accelerationValue->setObjectName(QString::fromUtf8("accelerationValue"));
        sizePolicy1.setHeightForWidth(accelerationValue->sizePolicy().hasHeightForWidth());
        accelerationValue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(accelerationValue, 3, 1, 1, 1);

        pitchLabel = new QLabel(JoySensorEditDialog);
        pitchLabel->setObjectName(QString::fromUtf8("pitchLabel"));
        sizePolicy1.setHeightForWidth(pitchLabel->sizePolicy().hasHeightForWidth());
        pitchLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pitchLabel, 4, 0, 1, 1);

        rollLabel = new QLabel(JoySensorEditDialog);
        rollLabel->setObjectName(QString::fromUtf8("rollLabel"));
        sizePolicy1.setHeightForWidth(rollLabel->sizePolicy().hasHeightForWidth());
        rollLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rollLabel, 5, 0, 1, 1);

        zCoordinateLabel = new QLabel(JoySensorEditDialog);
        zCoordinateLabel->setObjectName(QString::fromUtf8("zCoordinateLabel"));
        sizePolicy1.setHeightForWidth(zCoordinateLabel->sizePolicy().hasHeightForWidth());
        zCoordinateLabel->setSizePolicy(sizePolicy1);
        zCoordinateLabel->setText(QString::fromUtf8("Z (m/s^2):"));

        gridLayout->addWidget(zCoordinateLabel, 2, 0, 1, 1);

        xCoordinateValue = new QLabel(JoySensorEditDialog);
        xCoordinateValue->setObjectName(QString::fromUtf8("xCoordinateValue"));
        sizePolicy1.setHeightForWidth(xCoordinateValue->sizePolicy().hasHeightForWidth());
        xCoordinateValue->setSizePolicy(sizePolicy1);
        xCoordinateValue->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(xCoordinateValue, 0, 1, 1, 1);

        yCoordinateLabel = new QLabel(JoySensorEditDialog);
        yCoordinateLabel->setObjectName(QString::fromUtf8("yCoordinateLabel"));
        sizePolicy1.setHeightForWidth(yCoordinateLabel->sizePolicy().hasHeightForWidth());
        yCoordinateLabel->setSizePolicy(sizePolicy1);
        yCoordinateLabel->setText(QString::fromUtf8("Y (m/s^2):"));

        gridLayout->addWidget(yCoordinateLabel, 1, 0, 1, 1);

        fromSafeZoneLabel = new QLabel(JoySensorEditDialog);
        fromSafeZoneLabel->setObjectName(QString::fromUtf8("fromSafeZoneLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fromSafeZoneLabel, 6, 0, 1, 1);

        fromSafeZoneValueLabel = new QLabel(JoySensorEditDialog);
        fromSafeZoneValueLabel->setObjectName(QString::fromUtf8("fromSafeZoneValueLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneValueLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneValueLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fromSafeZoneValueLabel, 6, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(JoySensorEditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        presetsComboBox = new QComboBox(JoySensorEditDialog);
        presetsComboBox->setObjectName(QString::fromUtf8("presetsComboBox"));
        presetsComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout->addWidget(presetsComboBox);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(JoySensorEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        deadZoneSlider = new QSlider(JoySensorEditDialog);
        deadZoneSlider->setObjectName(QString::fromUtf8("deadZoneSlider"));
        deadZoneSlider->setMinimum(1);
        deadZoneSlider->setMaximum(70);
        deadZoneSlider->setSingleStep(0);
        deadZoneSlider->setPageStep(1);
        deadZoneSlider->setValue(1);
        deadZoneSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(deadZoneSlider);

        deadZoneSpinBox = new QDoubleSpinBox(JoySensorEditDialog);
        deadZoneSpinBox->setObjectName(QString::fromUtf8("deadZoneSpinBox"));
        deadZoneSpinBox->setDecimals(2);
        deadZoneSpinBox->setMinimum(0.000000000000000);
        deadZoneSpinBox->setMaximum(70.000000000000000);
        deadZoneSpinBox->setValue(0.500000000000000);

        horizontalLayout_2->addWidget(deadZoneSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(JoySensorEditDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        maxZoneSlider = new QSlider(JoySensorEditDialog);
        maxZoneSlider->setObjectName(QString::fromUtf8("maxZoneSlider"));
        maxZoneSlider->setMinimum(0);
        maxZoneSlider->setMaximum(30);
        maxZoneSlider->setSingleStep(0);
        maxZoneSlider->setPageStep(10);
        maxZoneSlider->setValue(1);
        maxZoneSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(maxZoneSlider);

        maxZoneSpinBox = new QDoubleSpinBox(JoySensorEditDialog);
        maxZoneSpinBox->setObjectName(QString::fromUtf8("maxZoneSpinBox"));
        maxZoneSpinBox->setDecimals(2);
        maxZoneSpinBox->setMinimum(1.000000000000000);
        maxZoneSpinBox->setMaximum(30.000000000000000);
        maxZoneSpinBox->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(maxZoneSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_2 = new QLabel(JoySensorEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_12->addWidget(label_2);

        diagonalRangeSlider = new QSlider(JoySensorEditDialog);
        diagonalRangeSlider->setObjectName(QString::fromUtf8("diagonalRangeSlider"));
        diagonalRangeSlider->setMinimum(1);
        diagonalRangeSlider->setMaximum(90);
        diagonalRangeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(diagonalRangeSlider);

        diagonalRangeSpinBox = new QSpinBox(JoySensorEditDialog);
        diagonalRangeSpinBox->setObjectName(QString::fromUtf8("diagonalRangeSpinBox"));
        diagonalRangeSpinBox->setMinimum(1);
        diagonalRangeSpinBox->setMaximum(90);
        diagonalRangeSpinBox->setValue(90);

        horizontalLayout_12->addWidget(diagonalRangeSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        sensorDelayTitleLabel = new QLabel(JoySensorEditDialog);
        sensorDelayTitleLabel->setObjectName(QString::fromUtf8("sensorDelayTitleLabel"));

        horizontalLayout_15->addWidget(sensorDelayTitleLabel);

        sensorDelaySlider = new QSlider(JoySensorEditDialog);
        sensorDelaySlider->setObjectName(QString::fromUtf8("sensorDelaySlider"));
        sensorDelaySlider->setMinimum(0);
        sensorDelaySlider->setMaximum(100);
        sensorDelaySlider->setSingleStep(1);
        sensorDelaySlider->setPageStep(10);
        sensorDelaySlider->setValue(0);
        sensorDelaySlider->setSliderPosition(0);
        sensorDelaySlider->setOrientation(Qt::Horizontal);
        sensorDelaySlider->setTickPosition(QSlider::TicksBelow);
        sensorDelaySlider->setTickInterval(0);

        horizontalLayout_15->addWidget(sensorDelaySlider);

        sensorDelayDoubleSpinBox = new QDoubleSpinBox(JoySensorEditDialog);
        sensorDelayDoubleSpinBox->setObjectName(QString::fromUtf8("sensorDelayDoubleSpinBox"));
        sensorDelayDoubleSpinBox->setReadOnly(false);
        sensorDelayDoubleSpinBox->setDecimals(2);
        sensorDelayDoubleSpinBox->setMaximum(1.000000000000000);
        sensorDelayDoubleSpinBox->setSingleStep(0.010000000000000);

        horizontalLayout_15->addWidget(sensorDelayDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_15);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 6);
        sensorNameLabel = new QLabel(JoySensorEditDialog);
        sensorNameLabel->setObjectName(QString::fromUtf8("sensorNameLabel"));

        horizontalLayout_4->addWidget(sensorNameLabel);

        sensorNameLineEdit = new QLineEdit(JoySensorEditDialog);
        sensorNameLineEdit->setObjectName(QString::fromUtf8("sensorNameLineEdit"));

        horizontalLayout_4->addWidget(sensorNameLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mouseSettingsPushButton = new QPushButton(JoySensorEditDialog);
        mouseSettingsPushButton->setObjectName(QString::fromUtf8("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("input-mouse");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout_4->addWidget(mouseSettingsPushButton);


        horizontalLayout_10->addLayout(verticalLayout_4);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        verticalLayout_5->addLayout(horizontalLayout_10);

        line = new QFrame(JoySensorEditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        buttonBox = new QDialogButtonBox(JoySensorEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        sensorNameLabel->setBuddy(sensorNameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(JoySensorEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoySensorEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoySensorEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoySensorEditDialog);
    } // setupUi

    void retranslateUi(QDialog *JoySensorEditDialog)
    {
        JoySensorEditDialog->setWindowTitle(QCoreApplication::translate("JoySensorEditDialog", "Dialog", nullptr));
        rollValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        zCoordinateValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        pitchValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        yCoordinateValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        accelerationLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "Acceleration (m/s^2):", nullptr));
        accelerationValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        pitchLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "Pitch (\302\260):", nullptr));
        rollLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "Roll (\302\260):", nullptr));
        xCoordinateValue->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        fromSafeZoneLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "% Safe Zone:", nullptr));
        fromSafeZoneValueLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "0", nullptr));
        label_3->setText(QCoreApplication::translate("JoySensorEditDialog", "Presets:", nullptr));
        label->setText(QCoreApplication::translate("JoySensorEditDialog", "Dead Zone:", nullptr));
#if QT_CONFIG(tooltip)
        deadZoneSlider->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Dead zone value to use for an analog sensor.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deadZoneSpinBox->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Dead zone value to use for an analog sensor.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("JoySensorEditDialog", "Max Zone:", nullptr));
#if QT_CONFIG(tooltip)
        maxZoneSlider->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Value when an analog sensor is considered moved 100%.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxZoneSpinBox->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Value when an analog sensor is considered moved 100%.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("JoySensorEditDialog", "Diagonal Range:", nullptr));
#if QT_CONFIG(tooltip)
        diagonalRangeSlider->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "The area (in degrees) that each diagonal region occupies.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        diagonalRangeSpinBox->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "The area (in degrees) that each diagonal region occupies.", nullptr));
#endif // QT_CONFIG(tooltip)
        sensorDelayTitleLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "Sensor Delay:", nullptr));
#if QT_CONFIG(tooltip)
        sensorDelaySlider->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sensorDelayDoubleSpinBox->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        sensorDelayDoubleSpinBox->setSuffix(QCoreApplication::translate("JoySensorEditDialog", " s", nullptr));
        sensorNameLabel->setText(QCoreApplication::translate("JoySensorEditDialog", "Na&me:", nullptr));
#if QT_CONFIG(tooltip)
        sensorNameLineEdit->setToolTip(QCoreApplication::translate("JoySensorEditDialog", "Specify the name of an analog sensor.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseSettingsPushButton->setText(QCoreApplication::translate("JoySensorEditDialog", "Mouse Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoySensorEditDialog: public Ui_JoySensorEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSENSOREDITDIALOG_H
