/********************************************************************************
** Form generated from reading UI file 'addeditautoprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITAUTOPROFILEDIALOG_H
#define UI_ADDEDITAUTOPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAutoProfileDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *profileLineEdit;
    QPushButton *profileBrowsePushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *detectWinPropsSelectWindowPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *winClassLabel;
    QLineEdit *winClassLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *winNameLabel;
    QLineEdit *winNameLineEdit;
    QCheckBox *setPartialCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *applicationLineEdit;
    QPushButton *applicationPushButton;
    QPushButton *selectWindowPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *devicesLabel;
    QComboBox *devicesComboBox;
    QCheckBox *asDefaultCheckBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditAutoProfileDialog)
    {
        if (AddEditAutoProfileDialog->objectName().isEmpty())
            AddEditAutoProfileDialog->setObjectName(QString::fromUtf8("AddEditAutoProfileDialog"));
        AddEditAutoProfileDialog->resize(478, 461);
        AddEditAutoProfileDialog->setModal(true);
        verticalLayout_7 = new QVBoxLayout(AddEditAutoProfileDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(AddEditAutoProfileDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        profileLineEdit = new QLineEdit(AddEditAutoProfileDialog);
        profileLineEdit->setObjectName(QString::fromUtf8("profileLineEdit"));

        horizontalLayout->addWidget(profileLineEdit);

        profileBrowsePushButton = new QPushButton(AddEditAutoProfileDialog);
        profileBrowsePushButton->setObjectName(QString::fromUtf8("profileBrowsePushButton"));

        horizontalLayout->addWidget(profileBrowsePushButton);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_5);

        groupBox = new QGroupBox(AddEditAutoProfileDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 4);
        detectWinPropsSelectWindowPushButton = new QPushButton(groupBox);
        detectWinPropsSelectWindowPushButton->setObjectName(QString::fromUtf8("detectWinPropsSelectWindowPushButton"));

        verticalLayout_2->addWidget(detectWinPropsSelectWindowPushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        winClassLabel = new QLabel(groupBox);
        winClassLabel->setObjectName(QString::fromUtf8("winClassLabel"));

        horizontalLayout_3->addWidget(winClassLabel);

        winClassLineEdit = new QLineEdit(groupBox);
        winClassLineEdit->setObjectName(QString::fromUtf8("winClassLineEdit"));

        horizontalLayout_3->addWidget(winClassLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        winNameLabel = new QLabel(groupBox);
        winNameLabel->setObjectName(QString::fromUtf8("winNameLabel"));

        horizontalLayout_4->addWidget(winNameLabel);

        winNameLineEdit = new QLineEdit(groupBox);
        winNameLineEdit->setObjectName(QString::fromUtf8("winNameLineEdit"));

        horizontalLayout_4->addWidget(winNameLineEdit);

        setPartialCheckBox = new QCheckBox(groupBox);
        setPartialCheckBox->setObjectName(QString::fromUtf8("setPartialCheckBox"));

        horizontalLayout_4->addWidget(setPartialCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        applicationLineEdit = new QLineEdit(groupBox);
        applicationLineEdit->setObjectName(QString::fromUtf8("applicationLineEdit"));

        horizontalLayout_2->addWidget(applicationLineEdit);

        applicationPushButton = new QPushButton(groupBox);
        applicationPushButton->setObjectName(QString::fromUtf8("applicationPushButton"));

        horizontalLayout_2->addWidget(applicationPushButton);

        selectWindowPushButton = new QPushButton(groupBox);
        selectWindowPushButton->setObjectName(QString::fromUtf8("selectWindowPushButton"));

        horizontalLayout_2->addWidget(selectWindowPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        devicesLabel = new QLabel(AddEditAutoProfileDialog);
        devicesLabel->setObjectName(QString::fromUtf8("devicesLabel"));

        verticalLayout->addWidget(devicesLabel);

        devicesComboBox = new QComboBox(AddEditAutoProfileDialog);
        devicesComboBox->setObjectName(QString::fromUtf8("devicesComboBox"));

        verticalLayout->addWidget(devicesComboBox);

        asDefaultCheckBox = new QCheckBox(AddEditAutoProfileDialog);
        asDefaultCheckBox->setObjectName(QString::fromUtf8("asDefaultCheckBox"));
        asDefaultCheckBox->setEnabled(false);

        verticalLayout->addWidget(asDefaultCheckBox);


        verticalLayout_7->addLayout(verticalLayout);

        line = new QFrame(AddEditAutoProfileDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        buttonBox = new QDialogButtonBox(AddEditAutoProfileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(profileLineEdit);
        winClassLabel->setBuddy(applicationLineEdit);
        winNameLabel->setBuddy(applicationLineEdit);
        label_2->setBuddy(applicationLineEdit);
        devicesLabel->setBuddy(devicesComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AddEditAutoProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditAutoProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditAutoProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditAutoProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditAutoProfileDialog)
    {
        AddEditAutoProfileDialog->setWindowTitle(QCoreApplication::translate("AddEditAutoProfileDialog", "Auto Profile Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Pro&file:", nullptr));
        profileBrowsePushButton->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Browse", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddEditAutoProfileDialog", "Window:", nullptr));
#if QT_CONFIG(tooltip)
        detectWinPropsSelectWindowPushButton->setToolTip(QCoreApplication::translate("AddEditAutoProfileDialog", "Select Window. Click on the appropriate application\n"
"window and the application file path will be populated\n"
"in the form.", nullptr));
#endif // QT_CONFIG(tooltip)
        detectWinPropsSelectWindowPushButton->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Detect Window Properties", nullptr));
        winClassLabel->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "&Class:", nullptr));
        winNameLabel->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "T&itle:  ", nullptr));
        setPartialCheckBox->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "set partial title", nullptr));
        label_2->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Application:    ", nullptr));
        applicationPushButton->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        selectWindowPushButton->setToolTip(QCoreApplication::translate("AddEditAutoProfileDialog", "Select Window. Click on the appropriate application\n"
"window and the application file path will be populated\n"
"in the form.", nullptr));
#endif // QT_CONFIG(tooltip)
        selectWindowPushButton->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Select", nullptr));
        devicesLabel->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "De&vices:", nullptr));
#if QT_CONFIG(tooltip)
        asDefaultCheckBox->setToolTip(QCoreApplication::translate("AddEditAutoProfileDialog", "Select this profile to be the default loaded for\n"
"the specified device. The selection will be used instead\n"
"of the all default profile option.", nullptr));
#endif // QT_CONFIG(tooltip)
        asDefaultCheckBox->setText(QCoreApplication::translate("AddEditAutoProfileDialog", "Set as Default for Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditAutoProfileDialog: public Ui_AddEditAutoProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITAUTOPROFILEDIALOG_H
