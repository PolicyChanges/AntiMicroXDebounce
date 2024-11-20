/********************************************************************************
** Form generated from reading UI file 'joystickstatuswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKSTATUSWINDOW_H
#define UI_JOYSTICKSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickStatusWindow
{
public:
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *joystickNameLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *joystickNumberLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *joystickAxesLabel;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *joystickButtonsLabel;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *joystickHatsLabel;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_9;
    QLabel *joystickSensorsLabel;
    QVBoxLayout *batteryVerticalLayout;
    QLabel *batteryLabel;
    QLabel *batteryValueLabel;
    QVBoxLayout *guidVerticalLayout;
    QLabel *guidHeaderLabel;
    QLabel *guidLabel;
    QVBoxLayout *sdlcontrollerVerticalLayout;
    QLabel *sdlcontrollerHeaderLabel;
    QLabel *sdlGameControllerLabel;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *axesGroupBox;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *axesScrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QGroupBox *buttonsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *buttonsScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *hatsGroupBox;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *sensorsGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoystickStatusWindow)
    {
        if (JoystickStatusWindow->objectName().isEmpty())
            JoystickStatusWindow->setObjectName(QString::fromUtf8("JoystickStatusWindow"));
        JoystickStatusWindow->setWindowModality(Qt::ApplicationModal);
        JoystickStatusWindow->resize(580, 480);
        JoystickStatusWindow->setMinimumSize(QSize(580, 440));
        JoystickStatusWindow->setStyleSheet(QString::fromUtf8("JoyButtonStatusBox {\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}\n"
"\n"
"JoyButtonStatusBox[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}"));
        JoystickStatusWindow->setModal(true);
        verticalLayout_11 = new QVBoxLayout(JoystickStatusWindow);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(JoystickStatusWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(200, 0));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        joystickNameLabel = new QLabel(groupBox);
        joystickNameLabel->setObjectName(QString::fromUtf8("joystickNameLabel"));
        joystickNameLabel->setIndent(10);

        verticalLayout->addWidget(joystickNameLabel);


        verticalLayout_9->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        joystickNumberLabel = new QLabel(groupBox);
        joystickNumberLabel->setObjectName(QString::fromUtf8("joystickNumberLabel"));
        joystickNumberLabel->setIndent(10);

        verticalLayout_2->addWidget(joystickNumberLabel);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        joystickAxesLabel = new QLabel(groupBox);
        joystickAxesLabel->setObjectName(QString::fromUtf8("joystickAxesLabel"));
        joystickAxesLabel->setIndent(10);

        verticalLayout_3->addWidget(joystickAxesLabel);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_4->addWidget(label_6);

        joystickButtonsLabel = new QLabel(groupBox);
        joystickButtonsLabel->setObjectName(QString::fromUtf8("joystickButtonsLabel"));
        joystickButtonsLabel->setIndent(10);

        verticalLayout_4->addWidget(joystickButtonsLabel);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_5->addWidget(label_8);

        joystickHatsLabel = new QLabel(groupBox);
        joystickHatsLabel->setObjectName(QString::fromUtf8("joystickHatsLabel"));
        joystickHatsLabel->setIndent(10);

        verticalLayout_5->addWidget(joystickHatsLabel);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_12->addWidget(label_9);

        joystickSensorsLabel = new QLabel(groupBox);
        joystickSensorsLabel->setObjectName(QString::fromUtf8("joystickSensorsLabel"));
        joystickSensorsLabel->setIndent(10);

        verticalLayout_12->addWidget(joystickSensorsLabel);


        verticalLayout_9->addLayout(verticalLayout_12);

        batteryVerticalLayout = new QVBoxLayout();
        batteryVerticalLayout->setObjectName(QString::fromUtf8("batteryVerticalLayout"));
        batteryVerticalLayout->setContentsMargins(0, 0, 0, 0);
        batteryLabel = new QLabel(groupBox);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));
        batteryLabel->setMinimumSize(QSize(0, 20));
        batteryLabel->setFont(font);

        batteryVerticalLayout->addWidget(batteryLabel);

        batteryValueLabel = new QLabel(groupBox);
        batteryValueLabel->setObjectName(QString::fromUtf8("batteryValueLabel"));
        batteryValueLabel->setMinimumSize(QSize(0, 14));

        batteryVerticalLayout->addWidget(batteryValueLabel);


        verticalLayout_9->addLayout(batteryVerticalLayout);

        guidVerticalLayout = new QVBoxLayout();
        guidVerticalLayout->setObjectName(QString::fromUtf8("guidVerticalLayout"));
        guidHeaderLabel = new QLabel(groupBox);
        guidHeaderLabel->setObjectName(QString::fromUtf8("guidHeaderLabel"));
        guidHeaderLabel->setEnabled(true);
        guidHeaderLabel->setFont(font);

        guidVerticalLayout->addWidget(guidHeaderLabel);

        guidLabel = new QLabel(groupBox);
        guidLabel->setObjectName(QString::fromUtf8("guidLabel"));
        guidLabel->setWordWrap(true);
        guidLabel->setMargin(10);
        guidLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        guidVerticalLayout->addWidget(guidLabel);


        verticalLayout_9->addLayout(guidVerticalLayout);

        sdlcontrollerVerticalLayout = new QVBoxLayout();
        sdlcontrollerVerticalLayout->setObjectName(QString::fromUtf8("sdlcontrollerVerticalLayout"));
        sdlcontrollerHeaderLabel = new QLabel(groupBox);
        sdlcontrollerHeaderLabel->setObjectName(QString::fromUtf8("sdlcontrollerHeaderLabel"));
        sdlcontrollerHeaderLabel->setEnabled(true);
        sdlcontrollerHeaderLabel->setFont(font);

        sdlcontrollerVerticalLayout->addWidget(sdlcontrollerHeaderLabel);

        sdlGameControllerLabel = new QLabel(groupBox);
        sdlGameControllerLabel->setObjectName(QString::fromUtf8("sdlGameControllerLabel"));
        sdlGameControllerLabel->setWordWrap(true);
        sdlGameControllerLabel->setMargin(10);
        sdlGameControllerLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        sdlcontrollerVerticalLayout->addWidget(sdlGameControllerLabel);


        verticalLayout_9->addLayout(sdlcontrollerVerticalLayout);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        axesGroupBox = new QGroupBox(JoystickStatusWindow);
        axesGroupBox->setObjectName(QString::fromUtf8("axesGroupBox"));
        verticalLayout_6 = new QVBoxLayout(axesGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        axesScrollArea = new QScrollArea(axesGroupBox);
        axesScrollArea->setObjectName(QString::fromUtf8("axesScrollArea"));
        axesScrollArea->setFrameShape(QFrame::NoFrame);
        axesScrollArea->setFrameShadow(QFrame::Sunken);
        axesScrollArea->setLineWidth(1);
        axesScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 346, 120));
        axesScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(axesScrollArea);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_10->addWidget(axesGroupBox);

        buttonsGroupBox = new QGroupBox(JoystickStatusWindow);
        buttonsGroupBox->setObjectName(QString::fromUtf8("buttonsGroupBox"));
        verticalLayout_7 = new QVBoxLayout(buttonsGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(4, 4, 4, 4);
        buttonsScrollArea = new QScrollArea(buttonsGroupBox);
        buttonsScrollArea->setObjectName(QString::fromUtf8("buttonsScrollArea"));
        buttonsScrollArea->setAutoFillBackground(false);
        buttonsScrollArea->setStyleSheet(QString::fromUtf8(""));
        buttonsScrollArea->setFrameShape(QFrame::NoFrame);
        buttonsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 346, 120));
        buttonsScrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(buttonsScrollArea);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_10->addWidget(buttonsGroupBox);

        hatsGroupBox = new QGroupBox(JoystickStatusWindow);
        hatsGroupBox->setObjectName(QString::fromUtf8("hatsGroupBox"));
        verticalLayout_8 = new QVBoxLayout(hatsGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(4, 4, 4, 14);

        verticalLayout_10->addWidget(hatsGroupBox);

        sensorsGroupBox = new QGroupBox(JoystickStatusWindow);
        sensorsGroupBox->setObjectName(QString::fromUtf8("sensorsGroupBox"));

        verticalLayout_10->addWidget(sensorsGroupBox);


        horizontalLayout->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(JoystickStatusWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_11->addWidget(buttonBox);


        retranslateUi(JoystickStatusWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoystickStatusWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoystickStatusWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoystickStatusWindow);
    } // setupUi

    void retranslateUi(QDialog *JoystickStatusWindow)
    {
        JoystickStatusWindow->setWindowTitle(QCoreApplication::translate("JoystickStatusWindow", "Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("JoystickStatusWindow", "Details", nullptr));
        label->setText(QCoreApplication::translate("JoystickStatusWindow", "Name:", nullptr));
        joystickNameLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        label_2->setText(QCoreApplication::translate("JoystickStatusWindow", "Number:", nullptr));
        joystickNumberLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        label_4->setText(QCoreApplication::translate("JoystickStatusWindow", "Axes:", nullptr));
        joystickAxesLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        label_6->setText(QCoreApplication::translate("JoystickStatusWindow", "Buttons:", nullptr));
        joystickButtonsLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        label_8->setText(QCoreApplication::translate("JoystickStatusWindow", "Hats:", nullptr));
        joystickHatsLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        label_9->setText(QCoreApplication::translate("JoystickStatusWindow", "Sensors:", nullptr));
        joystickSensorsLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        batteryLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "Battery:", nullptr));
        batteryValueLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "Unknown", nullptr));
        guidHeaderLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "GUID:", nullptr));
        guidLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        sdlcontrollerHeaderLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "Game Controller:", nullptr));
        sdlGameControllerLabel->setText(QCoreApplication::translate("JoystickStatusWindow", "%1", nullptr));
        axesGroupBox->setTitle(QCoreApplication::translate("JoystickStatusWindow", "Axes", nullptr));
        buttonsGroupBox->setTitle(QCoreApplication::translate("JoystickStatusWindow", "Buttons", nullptr));
        hatsGroupBox->setTitle(QCoreApplication::translate("JoystickStatusWindow", "Hats", nullptr));
        sensorsGroupBox->setTitle(QCoreApplication::translate("JoystickStatusWindow", "Sensors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoystickStatusWindow: public Ui_JoystickStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKSTATUSWINDOW_H
