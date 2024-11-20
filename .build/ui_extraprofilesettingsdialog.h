/********************************************************************************
** Form generated from reading UI file 'extraprofilesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRAPROFILESETTINGSDIALOG_H
#define UI_EXTRAPROFILESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtraProfileSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *sliderLabel;
    QSlider *keyPressHorizontalSlider;
    QLabel *pressValueLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *profileNameLabel;
    QLineEdit *profileNameLineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtraProfileSettingsDialog)
    {
        if (ExtraProfileSettingsDialog->objectName().isEmpty())
            ExtraProfileSettingsDialog->setObjectName(QString::fromUtf8("ExtraProfileSettingsDialog"));
        ExtraProfileSettingsDialog->resize(439, 144);
        ExtraProfileSettingsDialog->setMinimumSize(QSize(396, 136));
        ExtraProfileSettingsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ExtraProfileSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 10, 10, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        sliderLabel = new QLabel(ExtraProfileSettingsDialog);
        sliderLabel->setObjectName(QString::fromUtf8("sliderLabel"));

        horizontalLayout->addWidget(sliderLabel);

        keyPressHorizontalSlider = new QSlider(ExtraProfileSettingsDialog);
        keyPressHorizontalSlider->setObjectName(QString::fromUtf8("keyPressHorizontalSlider"));
        keyPressHorizontalSlider->setMinimum(1);
        keyPressHorizontalSlider->setMaximum(100);
        keyPressHorizontalSlider->setValue(10);
        keyPressHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(keyPressHorizontalSlider);


        verticalLayout->addLayout(horizontalLayout);

        pressValueLabel = new QLabel(ExtraProfileSettingsDialog);
        pressValueLabel->setObjectName(QString::fromUtf8("pressValueLabel"));

        verticalLayout->addWidget(pressValueLabel, 0, Qt::AlignRight);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(36);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        profileNameLabel = new QLabel(ExtraProfileSettingsDialog);
        profileNameLabel->setObjectName(QString::fromUtf8("profileNameLabel"));

        horizontalLayout_2->addWidget(profileNameLabel);

        profileNameLineEdit = new QLineEdit(ExtraProfileSettingsDialog);
        profileNameLineEdit->setObjectName(QString::fromUtf8("profileNameLineEdit"));
        profileNameLineEdit->setMaxLength(50);

        horizontalLayout_2->addWidget(profileNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExtraProfileSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ExtraProfileSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExtraProfileSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExtraProfileSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExtraProfileSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtraProfileSettingsDialog)
    {
        ExtraProfileSettingsDialog->setWindowTitle(QCoreApplication::translate("ExtraProfileSettingsDialog", "Extra Profile Settings", nullptr));
        sliderLabel->setText(QCoreApplication::translate("ExtraProfileSettingsDialog", "Key Press Time:", nullptr));
        pressValueLabel->setText(QCoreApplication::translate("ExtraProfileSettingsDialog", "0.00 ms", nullptr));
        profileNameLabel->setText(QCoreApplication::translate("ExtraProfileSettingsDialog", "Profile Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtraProfileSettingsDialog: public Ui_ExtraProfileSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRAPROFILESETTINGSDIALOG_H
