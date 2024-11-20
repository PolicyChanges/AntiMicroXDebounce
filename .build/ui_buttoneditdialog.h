/********************************************************************************
** Form generated from reading UI file 'buttoneditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONEDITDIALOG_H
#define UI_BUTTONEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keyboard/virtualkeyboardmousewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ButtonEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *helpAssignLabel;
    VirtualKeyboardMouseWidget *virtualKeyMouseTabWidget;
    QWidget *tab;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *toggleCheckBox;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *turboCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *attachNumKeypadCheckbox;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QLabel *slotSummaryLabel;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *buttonNameLabel;
    QLineEdit *buttonNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *actionNameLabel;
    QLineEdit *actionNameLineEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *advancedPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ButtonEditDialog)
    {
        if (ButtonEditDialog->objectName().isEmpty())
            ButtonEditDialog->setObjectName(QString::fromUtf8("ButtonEditDialog"));
        ButtonEditDialog->setWindowModality(Qt::WindowModal);
        ButtonEditDialog->resize(800, 600);
        ButtonEditDialog->setMinimumSize(QSize(800, 600));
        ButtonEditDialog->setSizeGripEnabled(false);
        ButtonEditDialog->setModal(false);
        verticalLayout = new QVBoxLayout(ButtonEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        helpAssignLabel = new QLabel(ButtonEditDialog);
        helpAssignLabel->setObjectName(QString::fromUtf8("helpAssignLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpAssignLabel->sizePolicy().hasHeightForWidth());
        helpAssignLabel->setSizePolicy(sizePolicy);
        helpAssignLabel->setLineWidth(1);
        helpAssignLabel->setScaledContents(false);
        helpAssignLabel->setAlignment(Qt::AlignCenter);
        helpAssignLabel->setWordWrap(true);

        verticalLayout->addWidget(helpAssignLabel);

        virtualKeyMouseTabWidget = new VirtualKeyboardMouseWidget(ButtonEditDialog);
        virtualKeyMouseTabWidget->setObjectName(QString::fromUtf8("virtualKeyMouseTabWidget"));
        virtualKeyMouseTabWidget->setTabPosition(QTabWidget::South);
        virtualKeyMouseTabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        virtualKeyMouseTabWidget->addTab(tab, QString());

        verticalLayout->addWidget(virtualKeyMouseTabWidget);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        toggleCheckBox = new QCheckBox(ButtonEditDialog);
        toggleCheckBox->setObjectName(QString::fromUtf8("toggleCheckBox"));

        horizontalLayout_18->addWidget(toggleCheckBox);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        turboCheckBox = new QCheckBox(ButtonEditDialog);
        turboCheckBox->setObjectName(QString::fromUtf8("turboCheckBox"));

        horizontalLayout_16->addWidget(turboCheckBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        attachNumKeypadCheckbox = new QCheckBox(ButtonEditDialog);
        attachNumKeypadCheckbox->setObjectName(QString::fromUtf8("attachNumKeypadCheckbox"));

        horizontalLayout_16->addWidget(attachNumKeypadCheckbox);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        horizontalLayout_18->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_5 = new QLabel(ButtonEditDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_17->addWidget(label_5);

        slotSummaryLabel = new QLabel(ButtonEditDialog);
        slotSummaryLabel->setObjectName(QString::fromUtf8("slotSummaryLabel"));
        slotSummaryLabel->setWordWrap(false);

        horizontalLayout_17->addWidget(slotSummaryLabel);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 6, -1, 6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonNameLabel = new QLabel(ButtonEditDialog);
        buttonNameLabel->setObjectName(QString::fromUtf8("buttonNameLabel"));

        horizontalLayout_3->addWidget(buttonNameLabel);

        buttonNameLineEdit = new QLineEdit(ButtonEditDialog);
        buttonNameLineEdit->setObjectName(QString::fromUtf8("buttonNameLineEdit"));
        buttonNameLineEdit->setMaxLength(20);

        horizontalLayout_3->addWidget(buttonNameLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        actionNameLabel = new QLabel(ButtonEditDialog);
        actionNameLabel->setObjectName(QString::fromUtf8("actionNameLabel"));

        horizontalLayout_2->addWidget(actionNameLabel);

        actionNameLineEdit = new QLineEdit(ButtonEditDialog);
        actionNameLineEdit->setObjectName(QString::fromUtf8("actionNameLineEdit"));
        actionNameLineEdit->setMaxLength(50);

        horizontalLayout_2->addWidget(actionNameLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(ButtonEditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, -1);
        advancedPushButton = new QPushButton(ButtonEditDialog);
        advancedPushButton->setObjectName(QString::fromUtf8("advancedPushButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("games_config_options");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        advancedPushButton->setIcon(icon);

        horizontalLayout->addWidget(advancedPushButton);

        buttonBox = new QDialogButtonBox(ButtonEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        buttonNameLabel->setBuddy(buttonNameLineEdit);
        actionNameLabel->setBuddy(actionNameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ButtonEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ButtonEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ButtonEditDialog, SLOT(reject()));

        virtualKeyMouseTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ButtonEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ButtonEditDialog)
    {
        ButtonEditDialog->setWindowTitle(QCoreApplication::translate("ButtonEditDialog", "Dialog", nullptr));
        helpAssignLabel->setText(QCoreApplication::translate("ButtonEditDialog", "To make a new assignment, press any keyboard key or click a button in the Keyboard or Mouse tab", nullptr));
        virtualKeyMouseTabWidget->setTabText(virtualKeyMouseTabWidget->indexOf(tab), QCoreApplication::translate("ButtonEditDialog", "Placeholder", nullptr));
#if QT_CONFIG(tooltip)
        toggleCheckBox->setToolTip(QCoreApplication::translate("ButtonEditDialog", "Enables a key press or release to only occur when a controller button is pressed.", nullptr));
#endif // QT_CONFIG(tooltip)
        toggleCheckBox->setText(QCoreApplication::translate("ButtonEditDialog", "Toggle", nullptr));
#if QT_CONFIG(tooltip)
        turboCheckBox->setToolTip(QCoreApplication::translate("ButtonEditDialog", "Enables rapid key presses and releases. Turbo controller.", nullptr));
#endif // QT_CONFIG(tooltip)
        turboCheckBox->setText(QCoreApplication::translate("ButtonEditDialog", "Turbo", nullptr));
#if QT_CONFIG(tooltip)
        attachNumKeypadCheckbox->setToolTip(QCoreApplication::translate("ButtonEditDialog", "Remember, it won't work if you don't have such keypad connected to computer or if it's not embedded like in desktop PCs", nullptr));
#endif // QT_CONFIG(tooltip)
        attachNumKeypadCheckbox->setText(QCoreApplication::translate("ButtonEditDialog", "Attach the numeric keypad", nullptr));
        label_5->setText(QCoreApplication::translate("ButtonEditDialog", "Last keyboard/mouse button:", nullptr));
        slotSummaryLabel->setText(QCoreApplication::translate("ButtonEditDialog", "Slots", nullptr));
        buttonNameLabel->setText(QCoreApplication::translate("ButtonEditDialog", "Na&me:", nullptr));
#if QT_CONFIG(tooltip)
        buttonNameLineEdit->setToolTip(QCoreApplication::translate("ButtonEditDialog", "Specify the name of a button.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNameLabel->setText(QCoreApplication::translate("ButtonEditDialog", "Action:", nullptr));
#if QT_CONFIG(tooltip)
        actionNameLineEdit->setToolTip(QCoreApplication::translate("ButtonEditDialog", "Specify the action that will be performed in game while\n"
"this button is being used.", nullptr));
#endif // QT_CONFIG(tooltip)
        advancedPushButton->setText(QCoreApplication::translate("ButtonEditDialog", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonEditDialog: public Ui_ButtonEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONEDITDIALOG_H
