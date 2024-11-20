/********************************************************************************
** Form generated from reading UI file 'capturedwindowinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREDWINDOWINFODIALOG_H
#define UI_CAPTUREDWINDOWINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CapturedWindowInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *infoGroupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *winClassHeadLabel;
    QLabel *winClassLabel;
    QLabel *label_3;
    QLabel *winTitleLabel;
    QLabel *label_4;
    QLabel *winPathLabel;
    QGroupBox *choiceGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *winClassCheckBox;
    QCheckBox *winTitleCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *winPathCheckBox;
    QComboBox *winPathChoiceComboBox;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CapturedWindowInfoDialog)
    {
        if (CapturedWindowInfoDialog->objectName().isEmpty())
            CapturedWindowInfoDialog->setObjectName(QString::fromUtf8("CapturedWindowInfoDialog"));
        CapturedWindowInfoDialog->resize(533, 363);
        verticalLayout_3 = new QVBoxLayout(CapturedWindowInfoDialog);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        infoGroupBox = new QGroupBox(CapturedWindowInfoDialog);
        infoGroupBox->setObjectName(QString::fromUtf8("infoGroupBox"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        infoGroupBox->setFont(font);
        infoGroupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(infoGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(20);
        winClassHeadLabel = new QLabel(infoGroupBox);
        winClassHeadLabel->setObjectName(QString::fromUtf8("winClassHeadLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, winClassHeadLabel);

        winClassLabel = new QLabel(infoGroupBox);
        winClassLabel->setObjectName(QString::fromUtf8("winClassLabel"));
        QFont font1;
        font1.setItalic(true);
        winClassLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, winClassLabel);

        label_3 = new QLabel(infoGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        winTitleLabel = new QLabel(infoGroupBox);
        winTitleLabel->setObjectName(QString::fromUtf8("winTitleLabel"));
        winTitleLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, winTitleLabel);

        label_4 = new QLabel(infoGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        winPathLabel = new QLabel(infoGroupBox);
        winPathLabel->setObjectName(QString::fromUtf8("winPathLabel"));
        winPathLabel->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, winPathLabel);


        verticalLayout->addLayout(formLayout);


        verticalLayout_3->addWidget(infoGroupBox);

        choiceGroupBox = new QGroupBox(CapturedWindowInfoDialog);
        choiceGroupBox->setObjectName(QString::fromUtf8("choiceGroupBox"));
        choiceGroupBox->setFlat(true);
        choiceGroupBox->setCheckable(false);
        choiceGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(choiceGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        winClassCheckBox = new QCheckBox(choiceGroupBox);
        winClassCheckBox->setObjectName(QString::fromUtf8("winClassCheckBox"));

        verticalLayout_2->addWidget(winClassCheckBox);

        winTitleCheckBox = new QCheckBox(choiceGroupBox);
        winTitleCheckBox->setObjectName(QString::fromUtf8("winTitleCheckBox"));

        verticalLayout_2->addWidget(winTitleCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        winPathCheckBox = new QCheckBox(choiceGroupBox);
        winPathCheckBox->setObjectName(QString::fromUtf8("winPathCheckBox"));

        horizontalLayout->addWidget(winPathCheckBox);

        winPathChoiceComboBox = new QComboBox(choiceGroupBox);
        winPathChoiceComboBox->addItem(QString());
        winPathChoiceComboBox->addItem(QString());
        winPathChoiceComboBox->setObjectName(QString::fromUtf8("winPathChoiceComboBox"));
        winPathChoiceComboBox->setEnabled(true);

        horizontalLayout->addWidget(winPathChoiceComboBox);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(choiceGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        line = new QFrame(CapturedWindowInfoDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        buttonBox = new QDialogButtonBox(CapturedWindowInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CapturedWindowInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CapturedWindowInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CapturedWindowInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CapturedWindowInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CapturedWindowInfoDialog)
    {
        CapturedWindowInfoDialog->setWindowTitle(QCoreApplication::translate("CapturedWindowInfoDialog", "Captured Window Properties", nullptr));
        infoGroupBox->setTitle(QCoreApplication::translate("CapturedWindowInfoDialog", "Information About Window", nullptr));
        winClassHeadLabel->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Class:", nullptr));
        winClassLabel->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Title:", nullptr));
        winTitleLabel->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Path:", nullptr));
        winPathLabel->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "TextLabel", nullptr));
        choiceGroupBox->setTitle(QCoreApplication::translate("CapturedWindowInfoDialog", "Match By Properties", nullptr));
        winClassCheckBox->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Class", nullptr));
        winTitleCheckBox->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Title", nullptr));
        winPathCheckBox->setText(QCoreApplication::translate("CapturedWindowInfoDialog", "Path", nullptr));
        winPathChoiceComboBox->setItemText(0, QCoreApplication::translate("CapturedWindowInfoDialog", "Full Path", nullptr));
        winPathChoiceComboBox->setItemText(1, QCoreApplication::translate("CapturedWindowInfoDialog", "File Name", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CapturedWindowInfoDialog: public Ui_CapturedWindowInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREDWINDOWINFODIALOG_H
