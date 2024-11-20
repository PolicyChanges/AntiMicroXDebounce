/********************************************************************************
** Form generated from reading UI file 'calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION_H
#define UI_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "joycontrolstickstatusbox.h"
#include "joysensorstatusbox.h"

QT_BEGIN_NAMESPACE

class Ui_Calibration
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *statusStack;
    JoySensorStatusBox *sensorStatusBoxWidget;
    JoyControlStickStatusBox *stickStatusBoxWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_16;
    QComboBox *deviceComboBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *steps;
    QGridLayout *gridLayout;
    QLabel *zAxisLabel;
    QLabel *offsetZValue;
    QLabel *xAxisLabel;
    QLabel *offsetYValue;
    QLabel *gainXLabel;
    QLabel *offsetXValue;
    QLabel *offsetXLabel;
    QLabel *yAxisLabel;
    QLabel *offsetZLabel;
    QLabel *offsetYLabel;
    QLabel *gainXValue;
    QLabel *gainYLabel;
    QLabel *gainYValue;
    QLabel *gainZLabel;
    QLabel *gainZValue;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetBtn;
    QPushButton *startBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *Calibration)
    {
        if (Calibration->objectName().isEmpty())
            Calibration->setObjectName(QString::fromUtf8("Calibration"));
        Calibration->resize(800, 600);
        Calibration->setMinimumSize(QSize(700, 600));
        verticalLayout_7 = new QVBoxLayout(Calibration);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        statusStack = new QStackedWidget(Calibration);
        statusStack->setObjectName(QString::fromUtf8("statusStack"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusStack->sizePolicy().hasHeightForWidth());
        statusStack->setSizePolicy(sizePolicy);
        statusStack->setMinimumSize(QSize(300, 300));
        statusStack->setMaximumSize(QSize(16777215, 16777215));
        statusStack->setSizeIncrement(QSize(0, 0));
        statusStack->setBaseSize(QSize(200, 200));
        sensorStatusBoxWidget = new JoySensorStatusBox();
        sensorStatusBoxWidget->setObjectName(QString::fromUtf8("sensorStatusBoxWidget"));
        statusStack->addWidget(sensorStatusBoxWidget);
        stickStatusBoxWidget = new JoyControlStickStatusBox();
        stickStatusBoxWidget->setObjectName(QString::fromUtf8("stickStatusBoxWidget"));
        statusStack->addWidget(stickStatusBoxWidget);

        horizontalLayout_4->addWidget(statusStack);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_16 = new QLabel(Calibration);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout->addWidget(label_16);

        deviceComboBox = new QComboBox(Calibration);
        deviceComboBox->setObjectName(QString::fromUtf8("deviceComboBox"));

        verticalLayout->addWidget(deviceComboBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        steps = new QLabel(Calibration);
        steps->setObjectName(QString::fromUtf8("steps"));
        steps->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        steps->setWordWrap(true);

        verticalLayout->addWidget(steps);

        verticalLayout->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        zAxisLabel = new QLabel(Calibration);
        zAxisLabel->setObjectName(QString::fromUtf8("zAxisLabel"));

        gridLayout->addWidget(zAxisLabel, 3, 0, 1, 1);

        offsetZValue = new QLabel(Calibration);
        offsetZValue->setObjectName(QString::fromUtf8("offsetZValue"));

        gridLayout->addWidget(offsetZValue, 3, 2, 1, 1);

        xAxisLabel = new QLabel(Calibration);
        xAxisLabel->setObjectName(QString::fromUtf8("xAxisLabel"));

        gridLayout->addWidget(xAxisLabel, 1, 0, 1, 1);

        offsetYValue = new QLabel(Calibration);
        offsetYValue->setObjectName(QString::fromUtf8("offsetYValue"));

        gridLayout->addWidget(offsetYValue, 2, 2, 1, 1);

        gainXLabel = new QLabel(Calibration);
        gainXLabel->setObjectName(QString::fromUtf8("gainXLabel"));

        gridLayout->addWidget(gainXLabel, 1, 3, 1, 1);

        offsetXValue = new QLabel(Calibration);
        offsetXValue->setObjectName(QString::fromUtf8("offsetXValue"));

        gridLayout->addWidget(offsetXValue, 1, 2, 1, 1);

        offsetXLabel = new QLabel(Calibration);
        offsetXLabel->setObjectName(QString::fromUtf8("offsetXLabel"));

        gridLayout->addWidget(offsetXLabel, 1, 1, 1, 1);

        yAxisLabel = new QLabel(Calibration);
        yAxisLabel->setObjectName(QString::fromUtf8("yAxisLabel"));

        gridLayout->addWidget(yAxisLabel, 2, 0, 1, 1);

        offsetZLabel = new QLabel(Calibration);
        offsetZLabel->setObjectName(QString::fromUtf8("offsetZLabel"));

        gridLayout->addWidget(offsetZLabel, 3, 1, 1, 1);

        offsetYLabel = new QLabel(Calibration);
        offsetYLabel->setObjectName(QString::fromUtf8("offsetYLabel"));

        gridLayout->addWidget(offsetYLabel, 2, 1, 1, 1);

        gainXValue = new QLabel(Calibration);
        gainXValue->setObjectName(QString::fromUtf8("gainXValue"));

        gridLayout->addWidget(gainXValue, 1, 4, 1, 1);

        gainYLabel = new QLabel(Calibration);
        gainYLabel->setObjectName(QString::fromUtf8("gainYLabel"));

        gridLayout->addWidget(gainYLabel, 2, 3, 1, 1);

        gainYValue = new QLabel(Calibration);
        gainYValue->setObjectName(QString::fromUtf8("gainYValue"));

        gridLayout->addWidget(gainYValue, 2, 4, 1, 1);

        gainZLabel = new QLabel(Calibration);
        gainZLabel->setObjectName(QString::fromUtf8("gainZLabel"));

        gridLayout->addWidget(gainZLabel, 3, 3, 1, 1);

        gainZValue = new QLabel(Calibration);
        gainZValue->setObjectName(QString::fromUtf8("gainZValue"));

        gridLayout->addWidget(gainZValue, 3, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetBtn = new QPushButton(Calibration);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        resetBtn->setEnabled(false);

        horizontalLayout->addWidget(resetBtn);

        startBtn = new QPushButton(Calibration);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setEnabled(false);

        horizontalLayout->addWidget(startBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveBtn = new QPushButton(Calibration);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setEnabled(false);

        horizontalLayout->addWidget(saveBtn);

        cancelBtn = new QPushButton(Calibration);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(Calibration);

        statusStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Calibration);
    } // setupUi

    void retranslateUi(QWidget *Calibration)
    {
        Calibration->setWindowTitle(QCoreApplication::translate("Calibration", "Form", nullptr));
        label_16->setText(QCoreApplication::translate("Calibration", "Input to calibrate:", nullptr));
        steps->setText(QCoreApplication::translate("Calibration", "Steps", nullptr));
        zAxisLabel->setText(QCoreApplication::translate("Calibration", "Z", nullptr));
        offsetZValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        xAxisLabel->setText(QCoreApplication::translate("Calibration", "X", nullptr));
        offsetYValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        gainXLabel->setText(QCoreApplication::translate("Calibration", "gain", nullptr));
        offsetXValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        offsetXLabel->setText(QCoreApplication::translate("Calibration", "offset", nullptr));
        yAxisLabel->setText(QCoreApplication::translate("Calibration", "Y", nullptr));
        offsetZLabel->setText(QCoreApplication::translate("Calibration", "offset", nullptr));
        offsetYLabel->setText(QCoreApplication::translate("Calibration", "offset", nullptr));
        gainXValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        gainYLabel->setText(QCoreApplication::translate("Calibration", "gain", nullptr));
        gainYValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        gainZLabel->setText(QCoreApplication::translate("Calibration", "gain", nullptr));
        gainZValue->setText(QCoreApplication::translate("Calibration", "TextLabel", nullptr));
        resetBtn->setText(QCoreApplication::translate("Calibration", "Reset settings", nullptr));
        startBtn->setText(QCoreApplication::translate("Calibration", "Start calibration", nullptr));
        saveBtn->setText(QCoreApplication::translate("Calibration", "Save", nullptr));
        cancelBtn->setText(QCoreApplication::translate("Calibration", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calibration: public Ui_Calibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION_H
