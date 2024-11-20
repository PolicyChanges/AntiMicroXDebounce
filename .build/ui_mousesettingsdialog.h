/********************************************************************************
** Form generated from reading UI file 'mousesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSESETTINGSDIALOG_H
#define UI_MOUSESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MouseSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_9;
    QGroupBox *topGroupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mouseModeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *accelerationComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *mouseSpeedGroupBox;
    QVBoxLayout *mouseSpeedVerticalLayout;
    QCheckBox *changeMouseSpeedsTogetherCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *horizontalSpinBox;
    QLabel *horizontalSpeedLabel;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpinBox *verticalSpinBox;
    QLabel *verticalSpeedLabel;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *wheelHoriSpeedLabel;
    QSpinBox *wheelHoriSpeedSpinBox;
    QLabel *wheelHoriSpeedUnitsLabel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *wheelVertSpeedLabel;
    QSpinBox *wheelVertSpeedSpinBox;
    QLabel *wheelVertSpeedUnitsLabel;
    QHBoxLayout *senHorizontalLayout;
    QLabel *sensLabel;
    QDoubleSpinBox *sensitivityDoubleSpinBox;
    QHBoxLayout *easingHorizontalLayout;
    QLabel *easingDurationLabel;
    QDoubleSpinBox *easingDoubleSpinBox;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *extraAccelerationGroupBox;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *extraAccelMultiLabel;
    QDoubleSpinBox *extraAccelDoubleSpinBox;
    QHBoxLayout *horizontalLayout_18;
    QLabel *minMultiLabel;
    QDoubleSpinBox *minMultiDoubleSpinBox;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_17;
    QLabel *minThresholdLabel;
    QDoubleSpinBox *minThresholdDoubleSpinBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *maxThresholdLabel;
    QDoubleSpinBox *maxThresholdDoubleSpinBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_11;
    QDoubleSpinBox *accelExtraDurationDoubleSpinBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_6;
    QComboBox *extraAccelCurveComboBox;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *springGroupBox;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *springWidthSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *springHeightSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *releaseSpringRadiusLabel;
    QSpinBox *releaseSpringRadiusspinBox;
    QCheckBox *relativeSpringCheckBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLabel *mouseStatusXLabel;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_9;
    QLabel *mouseStatusYLabel;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MouseSettingsDialog)
    {
        if (MouseSettingsDialog->objectName().isEmpty())
            MouseSettingsDialog->setObjectName(QString::fromUtf8("MouseSettingsDialog"));
        MouseSettingsDialog->setWindowModality(Qt::WindowModal);
        MouseSettingsDialog->resize(587, 612);
        verticalLayout_9 = new QVBoxLayout(MouseSettingsDialog);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        topGroupBox = new QGroupBox(MouseSettingsDialog);
        topGroupBox->setObjectName(QString::fromUtf8("topGroupBox"));
        verticalLayout_5 = new QVBoxLayout(topGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(topGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mouseModeComboBox = new QComboBox(topGroupBox);
        mouseModeComboBox->addItem(QString());
        mouseModeComboBox->addItem(QString());
        mouseModeComboBox->addItem(QString());
        mouseModeComboBox->setObjectName(QString::fromUtf8("mouseModeComboBox"));

        horizontalLayout->addWidget(mouseModeComboBox);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(topGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(160, 0));

        horizontalLayout_2->addWidget(label_2);

        accelerationComboBox = new QComboBox(topGroupBox);
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->addItem(QString());
        accelerationComboBox->setObjectName(QString::fromUtf8("accelerationComboBox"));

        horizontalLayout_2->addWidget(accelerationComboBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_9->addWidget(topGroupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mouseSpeedGroupBox = new QGroupBox(MouseSettingsDialog);
        mouseSpeedGroupBox->setObjectName(QString::fromUtf8("mouseSpeedGroupBox"));
        mouseSpeedGroupBox->setFlat(false);
        mouseSpeedGroupBox->setCheckable(false);
        mouseSpeedVerticalLayout = new QVBoxLayout(mouseSpeedGroupBox);
        mouseSpeedVerticalLayout->setObjectName(QString::fromUtf8("mouseSpeedVerticalLayout"));
        changeMouseSpeedsTogetherCheckBox = new QCheckBox(mouseSpeedGroupBox);
        changeMouseSpeedsTogetherCheckBox->setObjectName(QString::fromUtf8("changeMouseSpeedsTogetherCheckBox"));
        changeMouseSpeedsTogetherCheckBox->setEnabled(true);

        mouseSpeedVerticalLayout->addWidget(changeMouseSpeedsTogetherCheckBox, 0, Qt::AlignHCenter);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(16);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 10, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(mouseSpeedGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpinBox = new QSpinBox(mouseSpeedGroupBox);
        horizontalSpinBox->setObjectName(QString::fromUtf8("horizontalSpinBox"));
        horizontalSpinBox->setEnabled(true);
        horizontalSpinBox->setMinimum(1);
        horizontalSpinBox->setValue(1);

        horizontalLayout_4->addWidget(horizontalSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpeedLabel = new QLabel(mouseSpeedGroupBox);
        horizontalSpeedLabel->setObjectName(QString::fromUtf8("horizontalSpeedLabel"));

        verticalLayout_2->addWidget(horizontalSpeedLabel, 0, Qt::AlignRight);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(mouseSpeedGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        verticalSpinBox = new QSpinBox(mouseSpeedGroupBox);
        verticalSpinBox->setObjectName(QString::fromUtf8("verticalSpinBox"));
        verticalSpinBox->setEnabled(true);
        verticalSpinBox->setMinimum(1);
        verticalSpinBox->setValue(1);

        horizontalLayout_9->addWidget(verticalSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpeedLabel = new QLabel(mouseSpeedGroupBox);
        verticalSpeedLabel->setObjectName(QString::fromUtf8("verticalSpeedLabel"));

        verticalLayout_4->addWidget(verticalSpeedLabel, 0, Qt::AlignRight);


        horizontalLayout_10->addLayout(verticalLayout_4);


        mouseSpeedVerticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(16);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 10, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        wheelHoriSpeedLabel = new QLabel(mouseSpeedGroupBox);
        wheelHoriSpeedLabel->setObjectName(QString::fromUtf8("wheelHoriSpeedLabel"));

        horizontalLayout_7->addWidget(wheelHoriSpeedLabel);

        wheelHoriSpeedSpinBox = new QSpinBox(mouseSpeedGroupBox);
        wheelHoriSpeedSpinBox->setObjectName(QString::fromUtf8("wheelHoriSpeedSpinBox"));
        wheelHoriSpeedSpinBox->setMinimum(1);
        wheelHoriSpeedSpinBox->setMaximum(100);
        wheelHoriSpeedSpinBox->setSingleStep(1);
        wheelHoriSpeedSpinBox->setValue(1);

        horizontalLayout_7->addWidget(wheelHoriSpeedSpinBox);


        verticalLayout->addLayout(horizontalLayout_7);

        wheelHoriSpeedUnitsLabel = new QLabel(mouseSpeedGroupBox);
        wheelHoriSpeedUnitsLabel->setObjectName(QString::fromUtf8("wheelHoriSpeedUnitsLabel"));

        verticalLayout->addWidget(wheelHoriSpeedUnitsLabel, 0, Qt::AlignRight);


        horizontalLayout_14->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        wheelVertSpeedLabel = new QLabel(mouseSpeedGroupBox);
        wheelVertSpeedLabel->setObjectName(QString::fromUtf8("wheelVertSpeedLabel"));

        horizontalLayout_13->addWidget(wheelVertSpeedLabel);

        wheelVertSpeedSpinBox = new QSpinBox(mouseSpeedGroupBox);
        wheelVertSpeedSpinBox->setObjectName(QString::fromUtf8("wheelVertSpeedSpinBox"));
        wheelVertSpeedSpinBox->setMinimum(1);
        wheelVertSpeedSpinBox->setMaximum(100);

        horizontalLayout_13->addWidget(wheelVertSpeedSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_13);

        wheelVertSpeedUnitsLabel = new QLabel(mouseSpeedGroupBox);
        wheelVertSpeedUnitsLabel->setObjectName(QString::fromUtf8("wheelVertSpeedUnitsLabel"));

        verticalLayout_6->addWidget(wheelVertSpeedUnitsLabel, 0, Qt::AlignRight);


        horizontalLayout_14->addLayout(verticalLayout_6);


        mouseSpeedVerticalLayout->addLayout(horizontalLayout_14);

        senHorizontalLayout = new QHBoxLayout();
        senHorizontalLayout->setObjectName(QString::fromUtf8("senHorizontalLayout"));
        sensLabel = new QLabel(mouseSpeedGroupBox);
        sensLabel->setObjectName(QString::fromUtf8("sensLabel"));

        senHorizontalLayout->addWidget(sensLabel);

        sensitivityDoubleSpinBox = new QDoubleSpinBox(mouseSpeedGroupBox);
        sensitivityDoubleSpinBox->setObjectName(QString::fromUtf8("sensitivityDoubleSpinBox"));
        sensitivityDoubleSpinBox->setEnabled(false);
        sensitivityDoubleSpinBox->setDecimals(3);
        sensitivityDoubleSpinBox->setMinimum(0.001000000000000);
        sensitivityDoubleSpinBox->setMaximum(1000.000000000000000);
        sensitivityDoubleSpinBox->setSingleStep(0.100000000000000);
        sensitivityDoubleSpinBox->setValue(1.000000000000000);

        senHorizontalLayout->addWidget(sensitivityDoubleSpinBox);


        mouseSpeedVerticalLayout->addLayout(senHorizontalLayout);

        easingHorizontalLayout = new QHBoxLayout();
        easingHorizontalLayout->setObjectName(QString::fromUtf8("easingHorizontalLayout"));
        easingDurationLabel = new QLabel(mouseSpeedGroupBox);
        easingDurationLabel->setObjectName(QString::fromUtf8("easingDurationLabel"));

        easingHorizontalLayout->addWidget(easingDurationLabel);

        easingDoubleSpinBox = new QDoubleSpinBox(mouseSpeedGroupBox);
        easingDoubleSpinBox->setObjectName(QString::fromUtf8("easingDoubleSpinBox"));
        easingDoubleSpinBox->setEnabled(false);
        easingDoubleSpinBox->setDecimals(2);
        easingDoubleSpinBox->setMinimum(0.000000000000000);
        easingDoubleSpinBox->setMaximum(5.000000000000000);
        easingDoubleSpinBox->setSingleStep(0.100000000000000);
        easingDoubleSpinBox->setValue(0.500000000000000);

        easingHorizontalLayout->addWidget(easingDoubleSpinBox);


        mouseSpeedVerticalLayout->addLayout(easingHorizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        mouseSpeedVerticalLayout->addItem(verticalSpacer_4);


        verticalLayout_8->addWidget(mouseSpeedGroupBox);

        extraAccelerationGroupBox = new QGroupBox(MouseSettingsDialog);
        extraAccelerationGroupBox->setObjectName(QString::fromUtf8("extraAccelerationGroupBox"));
        extraAccelerationGroupBox->setEnabled(true);
        extraAccelerationGroupBox->setFlat(false);
        extraAccelerationGroupBox->setCheckable(true);
        extraAccelerationGroupBox->setChecked(false);
        verticalLayout_12 = new QVBoxLayout(extraAccelerationGroupBox);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        extraAccelMultiLabel = new QLabel(extraAccelerationGroupBox);
        extraAccelMultiLabel->setObjectName(QString::fromUtf8("extraAccelMultiLabel"));

        horizontalLayout_19->addWidget(extraAccelMultiLabel);

        extraAccelDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        extraAccelDoubleSpinBox->setObjectName(QString::fromUtf8("extraAccelDoubleSpinBox"));
        extraAccelDoubleSpinBox->setMinimum(1.000000000000000);
        extraAccelDoubleSpinBox->setMaximum(200.000000000000000);
        extraAccelDoubleSpinBox->setValue(2.000000000000000);

        horizontalLayout_19->addWidget(extraAccelDoubleSpinBox);


        horizontalLayout_20->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        minMultiLabel = new QLabel(extraAccelerationGroupBox);
        minMultiLabel->setObjectName(QString::fromUtf8("minMultiLabel"));

        horizontalLayout_18->addWidget(minMultiLabel);

        minMultiDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        minMultiDoubleSpinBox->setObjectName(QString::fromUtf8("minMultiDoubleSpinBox"));
        minMultiDoubleSpinBox->setMinimum(0.000000000000000);
        minMultiDoubleSpinBox->setMaximum(100.000000000000000);
        minMultiDoubleSpinBox->setSingleStep(1.000000000000000);
        minMultiDoubleSpinBox->setValue(0.000000000000000);

        horizontalLayout_18->addWidget(minMultiDoubleSpinBox);


        horizontalLayout_20->addLayout(horizontalLayout_18);


        verticalLayout_12->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        minThresholdLabel = new QLabel(extraAccelerationGroupBox);
        minThresholdLabel->setObjectName(QString::fromUtf8("minThresholdLabel"));

        horizontalLayout_17->addWidget(minThresholdLabel);

        minThresholdDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        minThresholdDoubleSpinBox->setObjectName(QString::fromUtf8("minThresholdDoubleSpinBox"));
        minThresholdDoubleSpinBox->setMaximum(100.000000000000000);
        minThresholdDoubleSpinBox->setValue(10.000000000000000);

        horizontalLayout_17->addWidget(minThresholdDoubleSpinBox);


        horizontalLayout_21->addLayout(horizontalLayout_17);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        maxThresholdLabel = new QLabel(extraAccelerationGroupBox);
        maxThresholdLabel->setObjectName(QString::fromUtf8("maxThresholdLabel"));

        horizontalLayout_11->addWidget(maxThresholdLabel);

        maxThresholdDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        maxThresholdDoubleSpinBox->setObjectName(QString::fromUtf8("maxThresholdDoubleSpinBox"));
        maxThresholdDoubleSpinBox->setMaximum(100.000000000000000);
        maxThresholdDoubleSpinBox->setValue(100.000000000000000);

        horizontalLayout_11->addWidget(maxThresholdDoubleSpinBox);


        horizontalLayout_21->addLayout(horizontalLayout_11);


        verticalLayout_12->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_11 = new QLabel(extraAccelerationGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_22->addWidget(label_11);

        accelExtraDurationDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        accelExtraDurationDoubleSpinBox->setObjectName(QString::fromUtf8("accelExtraDurationDoubleSpinBox"));
        accelExtraDurationDoubleSpinBox->setMinimum(0.000000000000000);
        accelExtraDurationDoubleSpinBox->setMaximum(5.000000000000000);
        accelExtraDurationDoubleSpinBox->setSingleStep(0.050000000000000);

        horizontalLayout_22->addWidget(accelExtraDurationDoubleSpinBox);


        verticalLayout_12->addLayout(horizontalLayout_22);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_6 = new QLabel(extraAccelerationGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_16->addWidget(label_6);

        extraAccelCurveComboBox = new QComboBox(extraAccelerationGroupBox);
        extraAccelCurveComboBox->addItem(QString());
        extraAccelCurveComboBox->addItem(QString());
        extraAccelCurveComboBox->addItem(QString());
        extraAccelCurveComboBox->addItem(QString());
        extraAccelCurveComboBox->addItem(QString());
        extraAccelCurveComboBox->setObjectName(QString::fromUtf8("extraAccelCurveComboBox"));

        horizontalLayout_16->addWidget(extraAccelCurveComboBox);


        verticalLayout_12->addLayout(horizontalLayout_16);


        verticalLayout_8->addWidget(extraAccelerationGroupBox);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        springGroupBox = new QGroupBox(MouseSettingsDialog);
        springGroupBox->setObjectName(QString::fromUtf8("springGroupBox"));
        verticalLayout_11 = new QVBoxLayout(springGroupBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(springGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        springWidthSpinBox = new QSpinBox(springGroupBox);
        springWidthSpinBox->setObjectName(QString::fromUtf8("springWidthSpinBox"));
        springWidthSpinBox->setEnabled(false);
        springWidthSpinBox->setMaximum(16777215);

        horizontalLayout_5->addWidget(springWidthSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(springGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        springHeightSpinBox = new QSpinBox(springGroupBox);
        springHeightSpinBox->setObjectName(QString::fromUtf8("springHeightSpinBox"));
        springHeightSpinBox->setEnabled(false);
        springHeightSpinBox->setMaximum(16777215);

        horizontalLayout_6->addWidget(springHeightSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        releaseSpringRadiusLabel = new QLabel(springGroupBox);
        releaseSpringRadiusLabel->setObjectName(QString::fromUtf8("releaseSpringRadiusLabel"));

        horizontalLayout_3->addWidget(releaseSpringRadiusLabel);

        releaseSpringRadiusspinBox = new QSpinBox(springGroupBox);
        releaseSpringRadiusspinBox->setObjectName(QString::fromUtf8("releaseSpringRadiusspinBox"));
        releaseSpringRadiusspinBox->setEnabled(false);
        releaseSpringRadiusspinBox->setMaximum(100);

        horizontalLayout_3->addWidget(releaseSpringRadiusspinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_11->addLayout(verticalLayout_3);

        relativeSpringCheckBox = new QCheckBox(springGroupBox);
        relativeSpringCheckBox->setObjectName(QString::fromUtf8("relativeSpringCheckBox"));
        relativeSpringCheckBox->setEnabled(false);

        verticalLayout_11->addWidget(relativeSpringCheckBox);


        verticalLayout_7->addWidget(springGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        groupBox_3 = new QGroupBox(MouseSettingsDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        mouseStatusXLabel = new QLabel(groupBox_3);
        mouseStatusXLabel->setObjectName(QString::fromUtf8("mouseStatusXLabel"));

        horizontalLayout_12->addWidget(mouseStatusXLabel);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_15->addWidget(label_9);

        mouseStatusYLabel = new QLabel(groupBox_3);
        mouseStatusYLabel->setObjectName(QString::fromUtf8("mouseStatusYLabel"));

        horizontalLayout_15->addWidget(mouseStatusYLabel);


        verticalLayout_10->addLayout(horizontalLayout_15);


        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_8->setStretch(0, 1);

        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(MouseSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_9->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(horizontalSpinBox);
        label_7->setBuddy(verticalSpinBox);
        wheelHoriSpeedLabel->setBuddy(wheelHoriSpeedSpinBox);
        wheelVertSpeedLabel->setBuddy(wheelVertSpeedSpinBox);
        sensLabel->setBuddy(sensitivityDoubleSpinBox);
        easingDurationLabel->setBuddy(sensitivityDoubleSpinBox);
        extraAccelMultiLabel->setBuddy(extraAccelDoubleSpinBox);
        minMultiLabel->setBuddy(minMultiDoubleSpinBox);
        minThresholdLabel->setBuddy(minThresholdDoubleSpinBox);
        maxThresholdLabel->setBuddy(maxThresholdDoubleSpinBox);
        label_11->setBuddy(accelExtraDurationDoubleSpinBox);
        label_3->setBuddy(springWidthSpinBox);
        label_4->setBuddy(springHeightSpinBox);
        releaseSpringRadiusLabel->setBuddy(releaseSpringRadiusspinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MouseSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MouseSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MouseSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MouseSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MouseSettingsDialog)
    {
        MouseSettingsDialog->setWindowTitle(QCoreApplication::translate("MouseSettingsDialog", "Mouse Settings", nullptr));
        label->setText(QCoreApplication::translate("MouseSettingsDialog", "Mouse Mode:", nullptr));
        mouseModeComboBox->setItemText(0, QString());
        mouseModeComboBox->setItemText(1, QCoreApplication::translate("MouseSettingsDialog", "Cursor", nullptr));
        mouseModeComboBox->setItemText(2, QCoreApplication::translate("MouseSettingsDialog", "Spring", nullptr));

#if QT_CONFIG(tooltip)
        mouseModeComboBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Cursor mode is used to move the mouse cursor\n"
"around the screen relative to its current position\n"
"depending on how much you move an axis\n"
"or if a button is pressed.\n"
"\n"
"Spring mode is used to move the mouse cursor\n"
"from the center of the screen depending on how\n"
"much you move an axis. The mouse cursor will\n"
"be returned to the center of the screen when the\n"
"axis is moved back to the dead zone.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MouseSettingsDialog", "Acceleration:", nullptr));
        accelerationComboBox->setItemText(0, QString());
        accelerationComboBox->setItemText(1, QCoreApplication::translate("MouseSettingsDialog", "Enhanced Precision", nullptr));
        accelerationComboBox->setItemText(2, QCoreApplication::translate("MouseSettingsDialog", "Linear", nullptr));
        accelerationComboBox->setItemText(3, QCoreApplication::translate("MouseSettingsDialog", "Quadratic", nullptr));
        accelerationComboBox->setItemText(4, QCoreApplication::translate("MouseSettingsDialog", "Cubic", nullptr));
        accelerationComboBox->setItemText(5, QCoreApplication::translate("MouseSettingsDialog", "Quadratic Extreme", nullptr));
        accelerationComboBox->setItemText(6, QCoreApplication::translate("MouseSettingsDialog", "Power Function", nullptr));
        accelerationComboBox->setItemText(7, QCoreApplication::translate("MouseSettingsDialog", "Easing Quadratic", nullptr));
        accelerationComboBox->setItemText(8, QCoreApplication::translate("MouseSettingsDialog", "Easing Cubic", nullptr));

#if QT_CONFIG(tooltip)
        accelerationComboBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Enhanced: Three tier curve that makes the mouse move\n"
"slow on the low end of an axis and fast on the high end.\n"
"\n"
"Linear: Mouse moves proportionally to axis.\n"
"\n"
"Quadratic: Mouse accelerates slowly on low end.\n"
"\n"
"Cubic: Mouse accelerates slower than Quadratic.\n"
"\n"
"Quadratic Extreme: Raises mouse speed 1.5 times once\n"
"95% axis travel has been reached.\n"
"\n"
"Power Function: Allows for a more custom curve option.\n"
"\n"
"Easing Quadratic: Axis high end is gradually accelerated over a period of time using a Quadratic curve.\n"
"\n"
"Easing Cubic: Axis high end is gradually accelerated over\n"
"a period of time using a Cubic curve.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseSpeedGroupBox->setTitle(QCoreApplication::translate("MouseSettingsDialog", "Mouse Speed Settings", nullptr));
#if QT_CONFIG(tooltip)
        changeMouseSpeedsTogetherCheckBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Enable to change the horizontal and vertical speed\n"
"boxes at the same time.", nullptr));
#endif // QT_CONFIG(tooltip)
        changeMouseSpeedsTogetherCheckBox->setText(QCoreApplication::translate("MouseSettingsDialog", "Change Together", nullptr));
        label_5->setText(QCoreApplication::translate("MouseSettingsDialog", "Hori&zontal\n"
"Speed:", nullptr));
        horizontalSpeedLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "1 = 20 pps", nullptr));
        label_7->setText(QCoreApplication::translate("MouseSettingsDialog", "&Vertical\n"
"Speed:", nullptr));
        verticalSpeedLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "1 = 20 pps", nullptr));
        wheelHoriSpeedLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Wheel Hori.\n"
"Speed:", nullptr));
#if QT_CONFIG(tooltip)
        wheelHoriSpeedSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Set the speed used for horizontal mouse wheel movement\n"
"according to number of simulated notches per second.", nullptr));
#endif // QT_CONFIG(tooltip)
        wheelHoriSpeedSpinBox->setSpecialValueText(QString());
        wheelHoriSpeedUnitsLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "1 = 1 notch(es)/s", nullptr));
        wheelVertSpeedLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Wheel Vert.\n"
"Speed:", nullptr));
#if QT_CONFIG(tooltip)
        wheelVertSpeedSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Set the speed used for vertical mouse wheel movement\n"
"according to number of simulated notches per second.", nullptr));
#endif // QT_CONFIG(tooltip)
        wheelVertSpeedUnitsLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "1 = 1 notch(es)/s", nullptr));
        sensLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Sensitivit&y:", nullptr));
#if QT_CONFIG(tooltip)
        sensitivityDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "For Power Function acceleration curve. Specifies\n"
"the factor to use for curve sensitivity. When the value\n"
"is above 1.0, the mouse movement will be accelerated\n"
"faster at the low end of an axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        easingDurationLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Easing Duration:", nullptr));
#if QT_CONFIG(tooltip)
        easingDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Specifies the amount of time (in seconds) that will\n"
"be required before the mouse is fully accelerated\n"
"after reaching the high end of an axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        easingDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", " s", nullptr));
#if QT_CONFIG(tooltip)
        extraAccelerationGroupBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Options for adding more acceleration to the mouse\n"
"movement beyond what the acceleration curve would\n"
"produce. Acceleration is added based on how quickly an axis is\n"
"moved in one gamepad poll. This is meant to help work around\n"
"some of the issues of the very limited input range available\n"
"using typical gamepad analog sticks.", nullptr));
#endif // QT_CONFIG(tooltip)
        extraAccelerationGroupBox->setTitle(QCoreApplication::translate("MouseSettingsDialog", "Delta Acceleration", nullptr));
        extraAccelMultiLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "&Multiplier:", nullptr));
#if QT_CONFIG(tooltip)
        extraAccelDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Highest value to accelerate mouse movement by", nullptr));
#endif // QT_CONFIG(tooltip)
        extraAccelDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", "x", nullptr));
        minMultiLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Start %:", nullptr));
#if QT_CONFIG(tooltip)
        minMultiDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Acceleration begins at this percentage of the base multiplier", nullptr));
#endif // QT_CONFIG(tooltip)
        minMultiDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", "%", nullptr));
        minThresholdLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Mi&n\n"
"Threshold:", nullptr));
#if QT_CONFIG(tooltip)
        minThresholdDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Minimum amount of axis travel required for acceleration to begin", nullptr));
#endif // QT_CONFIG(tooltip)
        minThresholdDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", "%", nullptr));
        maxThresholdLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Max\n"
"Threshold:", nullptr));
#if QT_CONFIG(tooltip)
        maxThresholdDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Maximum axis travel before acceleration has reached the multiplier value", nullptr));
#endif // QT_CONFIG(tooltip)
        maxThresholdDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", "%", nullptr));
        label_11->setText(QCoreApplication::translate("MouseSettingsDialog", "E&xtra Duration:", nullptr));
#if QT_CONFIG(tooltip)
        accelExtraDurationDoubleSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Extend the time that extra acceleration is applied. Axis travel\n"
"will be taken into account. A slower flick will decrease the\n"
"actual time that extra acceleration will be applied.", nullptr));
#endif // QT_CONFIG(tooltip)
        accelExtraDurationDoubleSpinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", " s", nullptr));
        label_6->setText(QCoreApplication::translate("MouseSettingsDialog", "Curve:", nullptr));
        extraAccelCurveComboBox->setItemText(0, QString());
        extraAccelCurveComboBox->setItemText(1, QCoreApplication::translate("MouseSettingsDialog", "Linear", nullptr));
        extraAccelCurveComboBox->setItemText(2, QCoreApplication::translate("MouseSettingsDialog", "Ease Out Sine", nullptr));
        extraAccelCurveComboBox->setItemText(3, QCoreApplication::translate("MouseSettingsDialog", "Ease Out Quad", nullptr));
        extraAccelCurveComboBox->setItemText(4, QCoreApplication::translate("MouseSettingsDialog", "Ease Out Cubic", nullptr));

        springGroupBox->setTitle(QCoreApplication::translate("MouseSettingsDialog", "Spring Settings", nullptr));
        label_3->setText(QCoreApplication::translate("MouseSettingsDialog", "Spring Width:", nullptr));
#if QT_CONFIG(tooltip)
        springWidthSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Changes the width of the region that the cursor\n"
"can move in spring mode. 0 will use the entire width\n"
"of your screen.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("MouseSettingsDialog", "Spring Height:", nullptr));
#if QT_CONFIG(tooltip)
        springHeightSpinBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Changes the height of the region that the cursor\n"
"can move in spring mode. 0 will use the entire height\n"
"of your screen.", nullptr));
#endif // QT_CONFIG(tooltip)
        releaseSpringRadiusLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "Release Radius:", nullptr));
#if QT_CONFIG(tooltip)
        releaseSpringRadiusspinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        releaseSpringRadiusspinBox->setSuffix(QCoreApplication::translate("MouseSettingsDialog", "%", nullptr));
#if QT_CONFIG(tooltip)
        relativeSpringCheckBox->setToolTip(QCoreApplication::translate("MouseSettingsDialog", "Specifies that the spring area will be relative to the\n"
"mouse position set by a non-relative spring.", nullptr));
#endif // QT_CONFIG(tooltip)
        relativeSpringCheckBox->setText(QCoreApplication::translate("MouseSettingsDialog", "Relative", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MouseSettingsDialog", "Mouse Status", nullptr));
        label_8->setText(QCoreApplication::translate("MouseSettingsDialog", "X:", nullptr));
        mouseStatusXLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "0 (0 pps)", nullptr));
        label_9->setText(QCoreApplication::translate("MouseSettingsDialog", "Y:", nullptr));
        mouseStatusYLabel->setText(QCoreApplication::translate("MouseSettingsDialog", "0 (0 pps)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MouseSettingsDialog: public Ui_MouseSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSESETTINGSDIALOG_H
