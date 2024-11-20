/********************************************************************************
** Form generated from reading UI file 'axiseditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISEDITDIALOG_H
#define UI_AXISEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
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
#include "axisvaluebox.h"

QT_BEGIN_NAMESPACE

class Ui_AxisEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *presetsComboBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpinBox *maxZoneSpinBox;
    QLabel *label_3;
    QSlider *deadZoneSlider;
    QSpinBox *deadZoneSpinBox;
    QSlider *maxZoneSlider;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_2;
    QPushButton *pPushButton;
    QPushButton *nPushButton;
    QComboBox *throttleComboBox;
    QLabel *hapticTriggerLabel;
    QComboBox *hapticTriggerComboBox;
    QSpacerItem *verticalSpacer_3;
    AxisValueBox *axisstatusBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *joyValueHeaderLabel;
    QLabel *joyValueLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *axisNameLabel;
    QLineEdit *axisNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AxisEditDialog)
    {
        if (AxisEditDialog->objectName().isEmpty())
            AxisEditDialog->setObjectName(QString::fromUtf8("AxisEditDialog"));
        AxisEditDialog->resize(682, 503);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AxisEditDialog->sizePolicy().hasHeightForWidth());
        AxisEditDialog->setSizePolicy(sizePolicy);
        AxisEditDialog->setMinimumSize(QSize(0, 0));
        AxisEditDialog->setMaximumSize(QSize(16777215, 16777215));
        AxisEditDialog->setSizeGripEnabled(false);
        AxisEditDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AxisEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(AxisEditDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLineWidth(1);

        horizontalLayout_2->addWidget(label);

        presetsComboBox = new QComboBox(AxisEditDialog);
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
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
        presetsComboBox->setMouseTracking(false);
        presetsComboBox->setEditable(false);
        presetsComboBox->setMaxVisibleItems(12);
        presetsComboBox->setMaxCount(12);

        horizontalLayout_2->addWidget(presetsComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        maxZoneSpinBox = new QSpinBox(AxisEditDialog);
        maxZoneSpinBox->setObjectName(QString::fromUtf8("maxZoneSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(maxZoneSpinBox->sizePolicy().hasHeightForWidth());
        maxZoneSpinBox->setSizePolicy(sizePolicy1);
        maxZoneSpinBox->setMinimumSize(QSize(32, 0));
        maxZoneSpinBox->setMinimum(1);
        maxZoneSpinBox->setMaximum(32737);
        maxZoneSpinBox->setValue(32000);

        gridLayout->addWidget(maxZoneSpinBox, 1, 2, 1, 1);

        label_3 = new QLabel(AxisEditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        deadZoneSlider = new QSlider(AxisEditDialog);
        deadZoneSlider->setObjectName(QString::fromUtf8("deadZoneSlider"));
        deadZoneSlider->setMinimumSize(QSize(200, 0));
        deadZoneSlider->setMinimum(0);
        deadZoneSlider->setMaximum(32737);
        deadZoneSlider->setSingleStep(100);
        deadZoneSlider->setPageStep(1000);
        deadZoneSlider->setValue(5000);
        deadZoneSlider->setSliderPosition(5000);
        deadZoneSlider->setTracking(true);
        deadZoneSlider->setOrientation(Qt::Horizontal);
        deadZoneSlider->setInvertedAppearance(false);
        deadZoneSlider->setInvertedControls(false);
        deadZoneSlider->setTickPosition(QSlider::NoTicks);
        deadZoneSlider->setTickInterval(1000);

        gridLayout->addWidget(deadZoneSlider, 0, 1, 1, 1);

        deadZoneSpinBox = new QSpinBox(AxisEditDialog);
        deadZoneSpinBox->setObjectName(QString::fromUtf8("deadZoneSpinBox"));
        sizePolicy1.setHeightForWidth(deadZoneSpinBox->sizePolicy().hasHeightForWidth());
        deadZoneSpinBox->setSizePolicy(sizePolicy1);
        deadZoneSpinBox->setMinimumSize(QSize(32, 0));
        deadZoneSpinBox->setMinimum(1);
        deadZoneSpinBox->setMaximum(32737);
        deadZoneSpinBox->setValue(5000);

        gridLayout->addWidget(deadZoneSpinBox, 0, 2, 1, 1);

        maxZoneSlider = new QSlider(AxisEditDialog);
        maxZoneSlider->setObjectName(QString::fromUtf8("maxZoneSlider"));
        maxZoneSlider->setMinimum(0);
        maxZoneSlider->setMaximum(32737);
        maxZoneSlider->setSingleStep(100);
        maxZoneSlider->setPageStep(1000);
        maxZoneSlider->setValue(32000);
        maxZoneSlider->setOrientation(Qt::Horizontal);
        maxZoneSlider->setTickPosition(QSlider::NoTicks);
        maxZoneSlider->setTickInterval(1000);

        gridLayout->addWidget(maxZoneSlider, 1, 1, 1, 1);

        label_4 = new QLabel(AxisEditDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pPushButton = new QPushButton(AxisEditDialog);
        pPushButton->setObjectName(QString::fromUtf8("pPushButton"));
        pPushButton->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(pPushButton, 0, 2, 1, 1);

        nPushButton = new QPushButton(AxisEditDialog);
        nPushButton->setObjectName(QString::fromUtf8("nPushButton"));
        nPushButton->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(nPushButton, 0, 0, 1, 1);

        throttleComboBox = new QComboBox(AxisEditDialog);
        throttleComboBox->addItem(QString());
        throttleComboBox->addItem(QString());
        throttleComboBox->addItem(QString());
        throttleComboBox->addItem(QString());
        throttleComboBox->addItem(QString());
        throttleComboBox->setObjectName(QString::fromUtf8("throttleComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(throttleComboBox->sizePolicy().hasHeightForWidth());
        throttleComboBox->setSizePolicy(sizePolicy2);
        throttleComboBox->setMinimumSize(QSize(350, 0));
        throttleComboBox->setMaxVisibleItems(5);
        throttleComboBox->setMaxCount(5);

        gridLayout_2->addWidget(throttleComboBox, 0, 1, 1, 1);

        hapticTriggerLabel = new QLabel(AxisEditDialog);
        hapticTriggerLabel->setObjectName(QString::fromUtf8("hapticTriggerLabel"));

        gridLayout_2->addWidget(hapticTriggerLabel, 1, 0, 1, 1);

        hapticTriggerComboBox = new QComboBox(AxisEditDialog);
        hapticTriggerComboBox->setObjectName(QString::fromUtf8("hapticTriggerComboBox"));

        gridLayout_2->addWidget(hapticTriggerComboBox, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3);

        axisstatusBox = new AxisValueBox(AxisEditDialog);
        axisstatusBox->setObjectName(QString::fromUtf8("axisstatusBox"));
        sizePolicy2.setHeightForWidth(axisstatusBox->sizePolicy().hasHeightForWidth());
        axisstatusBox->setSizePolicy(sizePolicy2);
        axisstatusBox->setMinimumSize(QSize(0, 25));
        axisstatusBox->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(axisstatusBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        joyValueHeaderLabel = new QLabel(AxisEditDialog);
        joyValueHeaderLabel->setObjectName(QString::fromUtf8("joyValueHeaderLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(joyValueHeaderLabel->sizePolicy().hasHeightForWidth());
        joyValueHeaderLabel->setSizePolicy(sizePolicy3);
        joyValueHeaderLabel->setMargin(0);
        joyValueHeaderLabel->setIndent(4);

        horizontalLayout_7->addWidget(joyValueHeaderLabel);

        joyValueLabel = new QLabel(AxisEditDialog);
        joyValueLabel->setObjectName(QString::fromUtf8("joyValueLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(joyValueLabel->sizePolicy().hasHeightForWidth());
        joyValueLabel->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(joyValueLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        axisNameLabel = new QLabel(AxisEditDialog);
        axisNameLabel->setObjectName(QString::fromUtf8("axisNameLabel"));

        horizontalLayout->addWidget(axisNameLabel);

        axisNameLineEdit = new QLineEdit(AxisEditDialog);
        axisNameLineEdit->setObjectName(QString::fromUtf8("axisNameLineEdit"));

        horizontalLayout->addWidget(axisNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        mouseSettingsPushButton = new QPushButton(AxisEditDialog);
        mouseSettingsPushButton->setObjectName(QString::fromUtf8("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("input-mouse");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout->addWidget(mouseSettingsPushButton);

        line = new QFrame(AxisEditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(AxisEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        axisNameLabel->setBuddy(axisNameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AxisEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AxisEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AxisEditDialog, SLOT(reject()));

        throttleComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AxisEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AxisEditDialog)
    {
        AxisEditDialog->setWindowTitle(QCoreApplication::translate("AxisEditDialog", "Axis", nullptr));
        label->setText(QCoreApplication::translate("AxisEditDialog", "Presets:", nullptr));
        presetsComboBox->setItemText(0, QString());
        presetsComboBox->setItemText(1, QCoreApplication::translate("AxisEditDialog", "Mouse (Horizontal)", nullptr));
        presetsComboBox->setItemText(2, QCoreApplication::translate("AxisEditDialog", "Mouse (Inverted Horizontal)", nullptr));
        presetsComboBox->setItemText(3, QCoreApplication::translate("AxisEditDialog", "Mouse (Vertical)", nullptr));
        presetsComboBox->setItemText(4, QCoreApplication::translate("AxisEditDialog", "Mouse (Inverted Vertical)", nullptr));
        presetsComboBox->setItemText(5, QCoreApplication::translate("AxisEditDialog", "Arrows: Up | Down", nullptr));
        presetsComboBox->setItemText(6, QCoreApplication::translate("AxisEditDialog", "Arrows: Left | Right", nullptr));
        presetsComboBox->setItemText(7, QCoreApplication::translate("AxisEditDialog", "Keys: W | S", nullptr));
        presetsComboBox->setItemText(8, QCoreApplication::translate("AxisEditDialog", "Keys: A | D", nullptr));
        presetsComboBox->setItemText(9, QCoreApplication::translate("AxisEditDialog", "NumPad: KP_8 | KP_2", nullptr));
        presetsComboBox->setItemText(10, QCoreApplication::translate("AxisEditDialog", "NumPad: KP_4 | KP_6", nullptr));
        presetsComboBox->setItemText(11, QCoreApplication::translate("AxisEditDialog", "None", nullptr));

#if QT_CONFIG(tooltip)
        maxZoneSpinBox->setToolTip(QCoreApplication::translate("AxisEditDialog", "Set the value to use as the limit for an axis. Useful for a\n"
"worn out analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("AxisEditDialog", "Dead Zone:", nullptr));
#if QT_CONFIG(tooltip)
        deadZoneSlider->setToolTip(QCoreApplication::translate("AxisEditDialog", "Set the value of the dead zone for an axis.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deadZoneSpinBox->setToolTip(QCoreApplication::translate("AxisEditDialog", "Set the value of the dead zone for an axis.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxZoneSlider->setToolTip(QCoreApplication::translate("AxisEditDialog", "Set the value to use as the limit for an axis. Useful for a\n"
"worn out analog stick.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("AxisEditDialog", "Max Zone:", nullptr));
        pPushButton->setText(QCoreApplication::translate("AxisEditDialog", "[NO KEY]", nullptr));
        nPushButton->setText(QCoreApplication::translate("AxisEditDialog", "[NO KEY]", nullptr));
        throttleComboBox->setItemText(0, QCoreApplication::translate("AxisEditDialog", "Negative Half Throttle", nullptr));
        throttleComboBox->setItemText(1, QCoreApplication::translate("AxisEditDialog", "Negative Throttle", nullptr));
        throttleComboBox->setItemText(2, QCoreApplication::translate("AxisEditDialog", "Normal", nullptr));
        throttleComboBox->setItemText(3, QCoreApplication::translate("AxisEditDialog", "Positive Throttle", nullptr));
        throttleComboBox->setItemText(4, QCoreApplication::translate("AxisEditDialog", "Positive Half Throttle", nullptr));

#if QT_CONFIG(tooltip)
        throttleComboBox->setToolTip(QCoreApplication::translate("AxisEditDialog", "Throttle setting that determines the behavior of how to\n"
"interpret an axis hold or release.", nullptr));
#endif // QT_CONFIG(tooltip)
        hapticTriggerLabel->setText(QCoreApplication::translate("AxisEditDialog", "Haptic Trigger:", nullptr));
        joyValueHeaderLabel->setText(QCoreApplication::translate("AxisEditDialog", "Current Value:", nullptr));
        joyValueLabel->setText(QString());
        axisNameLabel->setText(QCoreApplication::translate("AxisEditDialog", "Name:", nullptr));
#if QT_CONFIG(tooltip)
        axisNameLineEdit->setToolTip(QCoreApplication::translate("AxisEditDialog", "Specify the name of an axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseSettingsPushButton->setText(QCoreApplication::translate("AxisEditDialog", "Mouse Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AxisEditDialog: public Ui_AxisEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISEDITDIALOG_H
