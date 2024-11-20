/********************************************************************************
** Form generated from reading UI file 'qkeydisplaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QKEYDISPLAYDIALOG_H
#define UI_QKEYDISPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QKeyDisplayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *eventHandlerTitleLabel;
    QLabel *nativeTitleLabel;
    QLabel *nativeKeyLabel;
    QLabel *qtKeyTitleLabel;
    QLabel *qtKeyLabel;
    QLabel *antiTitleLabel;
    QLabel *antimicroKeyLabel;
    QLabel *eventHandlerLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QKeyDisplayDialog)
    {
        if (QKeyDisplayDialog->objectName().isEmpty())
            QKeyDisplayDialog->setObjectName(QString::fromUtf8("QKeyDisplayDialog"));
        QKeyDisplayDialog->setWindowModality(Qt::ApplicationModal);
        QKeyDisplayDialog->resize(597, 428);
        QKeyDisplayDialog->setMinimumSize(QSize(0, 0));
        QKeyDisplayDialog->setFocusPolicy(Qt::StrongFocus);
        QKeyDisplayDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QKeyDisplayDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(8, -1, 8, -1);
        label = new QLabel(QKeyDisplayDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, 10, -1, -1);
        eventHandlerTitleLabel = new QLabel(QKeyDisplayDialog);
        eventHandlerTitleLabel->setObjectName(QString::fromUtf8("eventHandlerTitleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        eventHandlerTitleLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, eventHandlerTitleLabel);

        nativeTitleLabel = new QLabel(QKeyDisplayDialog);
        nativeTitleLabel->setObjectName(QString::fromUtf8("nativeTitleLabel"));
        nativeTitleLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nativeTitleLabel);

        nativeKeyLabel = new QLabel(QKeyDisplayDialog);
        nativeKeyLabel->setObjectName(QString::fromUtf8("nativeKeyLabel"));
        nativeKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, nativeKeyLabel);

        qtKeyTitleLabel = new QLabel(QKeyDisplayDialog);
        qtKeyTitleLabel->setObjectName(QString::fromUtf8("qtKeyTitleLabel"));
        qtKeyTitleLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, qtKeyTitleLabel);

        qtKeyLabel = new QLabel(QKeyDisplayDialog);
        qtKeyLabel->setObjectName(QString::fromUtf8("qtKeyLabel"));
        qtKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, qtKeyLabel);

        antiTitleLabel = new QLabel(QKeyDisplayDialog);
        antiTitleLabel->setObjectName(QString::fromUtf8("antiTitleLabel"));
        antiTitleLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, antiTitleLabel);

        antimicroKeyLabel = new QLabel(QKeyDisplayDialog);
        antimicroKeyLabel->setObjectName(QString::fromUtf8("antimicroKeyLabel"));
        antimicroKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, antimicroKeyLabel);

        eventHandlerLabel = new QLabel(QKeyDisplayDialog);
        eventHandlerLabel->setObjectName(QString::fromUtf8("eventHandlerLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, eventHandlerLabel);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(QKeyDisplayDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QKeyDisplayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QKeyDisplayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QKeyDisplayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QKeyDisplayDialog);
    } // setupUi

    void retranslateUi(QDialog *QKeyDisplayDialog)
    {
        QKeyDisplayDialog->setWindowTitle(QCoreApplication::translate("QKeyDisplayDialog", "Key Checker", nullptr));
        label->setText(QCoreApplication::translate("QKeyDisplayDialog", "<html><head/><body><p>Press a key on your keyboard to see how the key is detected by this application. The window will show the system native key value, the original value given by Qt (if applicable), and the custom value used by AntiMicroX.</p><p>The AntiMicroX key value and the Qt key value will usually be the same. AntiMicroX tries to use the key values defined in Qt when possible. Check the page <a href=\"http://doc.qt.io/qt-5/qt.html#Key-enum\"><span style=\" text-decoration: underline; color:#0057ae;\">http://doc.qt.io/qt-5/qt.html#Key-enum</span></a> for a list of values defined by Qt. If you discover that a key is not natively supported by this program, please report the problem to AntiMicroX's <a href=\"https://github.com/AntiMicroX/antimicrox/\"><span style=\" text-decoration: underline; color:#0057ae;\">GitHub page</span></a> so that the program can be edited to support it directly. As it is, a custom prefix is added to unknown values so they can still be used; the main problem is that the profile w"
                        "ill no longer be portable.</p></body></html>", nullptr));
        eventHandlerTitleLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "Event Handler:", nullptr));
        nativeTitleLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "Native Key Value:", nullptr));
        nativeKeyLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "0x00000000", nullptr));
        qtKeyTitleLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "Qt Key Value:", nullptr));
        qtKeyLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "0x00000000", nullptr));
        antiTitleLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "antimicro Key Value:", nullptr));
        antimicroKeyLabel->setText(QCoreApplication::translate("QKeyDisplayDialog", "0x00000000", nullptr));
        eventHandlerLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QKeyDisplayDialog: public Ui_QKeyDisplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QKEYDISPLAYDIALOG_H
