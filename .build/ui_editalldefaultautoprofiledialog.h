/********************************************************************************
** Form generated from reading UI file 'editalldefaultautoprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H
#define UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAllDefaultAutoProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *profileLineEdit;
    QPushButton *profileBrowsePushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAllDefaultAutoProfileDialog)
    {
        if (EditAllDefaultAutoProfileDialog->objectName().isEmpty())
            EditAllDefaultAutoProfileDialog->setObjectName(QString::fromUtf8("EditAllDefaultAutoProfileDialog"));
        EditAllDefaultAutoProfileDialog->resize(384, 114);
        EditAllDefaultAutoProfileDialog->setModal(true);
        verticalLayout = new QVBoxLayout(EditAllDefaultAutoProfileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EditAllDefaultAutoProfileDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        profileLineEdit = new QLineEdit(EditAllDefaultAutoProfileDialog);
        profileLineEdit->setObjectName(QString::fromUtf8("profileLineEdit"));

        horizontalLayout->addWidget(profileLineEdit);

        profileBrowsePushButton = new QPushButton(EditAllDefaultAutoProfileDialog);
        profileBrowsePushButton->setObjectName(QString::fromUtf8("profileBrowsePushButton"));

        horizontalLayout->addWidget(profileBrowsePushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditAllDefaultAutoProfileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(profileLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditAllDefaultAutoProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAllDefaultAutoProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAllDefaultAutoProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAllDefaultAutoProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAllDefaultAutoProfileDialog)
    {
        EditAllDefaultAutoProfileDialog->setWindowTitle(QCoreApplication::translate("EditAllDefaultAutoProfileDialog", "Default Profile", nullptr));
        label->setText(QCoreApplication::translate("EditAllDefaultAutoProfileDialog", "Profile:", nullptr));
        profileBrowsePushButton->setText(QCoreApplication::translate("EditAllDefaultAutoProfileDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAllDefaultAutoProfileDialog: public Ui_EditAllDefaultAutoProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H
