/********************************************************************************
** Form generated from reading UI file 'gamecontrollermappingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECONTROLLERMAPPINGDIALOG_H
#define UI_GAMECONTROLLERMAPPINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "gamecontrollerexample.h"

QT_BEGIN_NAMESPACE

class Ui_GameControllerMappingDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTableWidget *buttonMappingTableWidget;
    QLabel *label_2;
    QPlainTextEdit *mappingStringPlainTextEdit;
    QVBoxLayout *verticalLayout_2;
    GameControllerExample *gameControllerDisplayWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lastAxisEventLineEdit;
    QLabel *label_3;
    QComboBox *axisDeadZoneComboBox;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GameControllerMappingDialog)
    {
        if (GameControllerMappingDialog->objectName().isEmpty())
            GameControllerMappingDialog->setObjectName(QString::fromUtf8("GameControllerMappingDialog"));
        GameControllerMappingDialog->resize(918, 600);
        GameControllerMappingDialog->setMinimumSize(QSize(600, 400));
        verticalLayout_4 = new QVBoxLayout(GameControllerMappingDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(GameControllerMappingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(label);

        buttonMappingTableWidget = new QTableWidget(GameControllerMappingDialog);
        if (buttonMappingTableWidget->columnCount() < 1)
            buttonMappingTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        buttonMappingTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (buttonMappingTableWidget->rowCount() < 21)
            buttonMappingTableWidget->setRowCount(21);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(14, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(15, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(16, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(17, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(18, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(19, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        buttonMappingTableWidget->setVerticalHeaderItem(20, __qtablewidgetitem21);
        buttonMappingTableWidget->setObjectName(QString::fromUtf8("buttonMappingTableWidget"));
        buttonMappingTableWidget->setFrameShadow(QFrame::Sunken);
        buttonMappingTableWidget->setLineWidth(1);
        buttonMappingTableWidget->setAutoScroll(true);
        buttonMappingTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        buttonMappingTableWidget->setProperty("showDropIndicator", QVariant(false));
        buttonMappingTableWidget->setDragDropOverwriteMode(false);
        buttonMappingTableWidget->setAlternatingRowColors(false);
        buttonMappingTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        buttonMappingTableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        buttonMappingTableWidget->setTextElideMode(Qt::ElideRight);
        buttonMappingTableWidget->setShowGrid(true);
        buttonMappingTableWidget->setGridStyle(Qt::SolidLine);
        buttonMappingTableWidget->setSortingEnabled(false);
        buttonMappingTableWidget->setWordWrap(true);
        buttonMappingTableWidget->setCornerButtonEnabled(true);
        buttonMappingTableWidget->setRowCount(21);
        buttonMappingTableWidget->setColumnCount(1);
        buttonMappingTableWidget->horizontalHeader()->setVisible(true);
        buttonMappingTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        buttonMappingTableWidget->horizontalHeader()->setDefaultSectionSize(100);
        buttonMappingTableWidget->horizontalHeader()->setHighlightSections(true);
        buttonMappingTableWidget->horizontalHeader()->setStretchLastSection(true);
        buttonMappingTableWidget->verticalHeader()->setVisible(true);
        buttonMappingTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        buttonMappingTableWidget->verticalHeader()->setMinimumSectionSize(20);
        buttonMappingTableWidget->verticalHeader()->setDefaultSectionSize(30);
        buttonMappingTableWidget->verticalHeader()->setHighlightSections(true);
        buttonMappingTableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        buttonMappingTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(buttonMappingTableWidget);

        label_2 = new QLabel(GameControllerMappingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        mappingStringPlainTextEdit = new QPlainTextEdit(GameControllerMappingDialog);
        mappingStringPlainTextEdit->setObjectName(QString::fromUtf8("mappingStringPlainTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mappingStringPlainTextEdit->sizePolicy().hasHeightForWidth());
        mappingStringPlainTextEdit->setSizePolicy(sizePolicy);
        mappingStringPlainTextEdit->setMinimumSize(QSize(0, 0));
        mappingStringPlainTextEdit->setMaximumSize(QSize(16777215, 100));
        mappingStringPlainTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(mappingStringPlainTextEdit);

        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gameControllerDisplayWidget = new GameControllerExample(GameControllerMappingDialog);
        gameControllerDisplayWidget->setObjectName(QString::fromUtf8("gameControllerDisplayWidget"));
        gameControllerDisplayWidget->setMinimumSize(QSize(300, 200));

        verticalLayout_2->addWidget(gameControllerDisplayWidget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(GameControllerMappingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        lastAxisEventLineEdit = new QLineEdit(GameControllerMappingDialog);
        lastAxisEventLineEdit->setObjectName(QString::fromUtf8("lastAxisEventLineEdit"));
        lastAxisEventLineEdit->setReadOnly(true);

        verticalLayout->addWidget(lastAxisEventLineEdit);

        label_3 = new QLabel(GameControllerMappingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        axisDeadZoneComboBox = new QComboBox(GameControllerMappingDialog);
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->addItem(QString());
        axisDeadZoneComboBox->setObjectName(QString::fromUtf8("axisDeadZoneComboBox"));

        verticalLayout->addWidget(axisDeadZoneComboBox);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        line = new QFrame(GameControllerMappingDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        buttonBox = new QDialogButtonBox(GameControllerMappingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Discard|QDialogButtonBox::Save);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(GameControllerMappingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GameControllerMappingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GameControllerMappingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GameControllerMappingDialog);
    } // setupUi

    void retranslateUi(QDialog *GameControllerMappingDialog)
    {
        GameControllerMappingDialog->setWindowTitle(QCoreApplication::translate("GameControllerMappingDialog", "Game Controller Mapping", nullptr));
        label->setText(QCoreApplication::translate("GameControllerMappingDialog", "<html><head/><body><p>antimicrox makes use of the <a href=\"https://wiki.libsdl.org/CategoryGameController\"><span style=\" text-decoration: underline; color:#0057ae;\">Game Controller API</span></a> provided by SDL 2 in order to abstract various gamepads to fit a unified standard. In order to make a button assignment, please highlight the mapping cell for the appropriate button row below. You can then press a button or move an axis on your gamepad and the cell will update with the physical button or axis that will be used.</p><p>antimicrox will use the mapping that you specify to save a mapping string that will be loaded into SDL.</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = buttonMappingTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GameControllerMappingDialog", "Mapping", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = buttonMappingTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GameControllerMappingDialog", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = buttonMappingTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GameControllerMappingDialog", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = buttonMappingTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GameControllerMappingDialog", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = buttonMappingTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GameControllerMappingDialog", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = buttonMappingTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("GameControllerMappingDialog", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = buttonMappingTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("GameControllerMappingDialog", "Start", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = buttonMappingTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("GameControllerMappingDialog", "Guide", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = buttonMappingTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("GameControllerMappingDialog", "Left Shoulder", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = buttonMappingTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("GameControllerMappingDialog", "Right Shoulder", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = buttonMappingTableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("GameControllerMappingDialog", "Left Stick Click", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = buttonMappingTableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("GameControllerMappingDialog", "Right Stick Click", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = buttonMappingTableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("GameControllerMappingDialog", "Left Stick X", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = buttonMappingTableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("GameControllerMappingDialog", "Left Stick Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = buttonMappingTableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("GameControllerMappingDialog", "Right Stick X", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = buttonMappingTableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("GameControllerMappingDialog", "Right Stick Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = buttonMappingTableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("GameControllerMappingDialog", "Left Trigger", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = buttonMappingTableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("GameControllerMappingDialog", "Right Trigger", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = buttonMappingTableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("GameControllerMappingDialog", "DPad Up", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = buttonMappingTableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("GameControllerMappingDialog", "DPad Left", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = buttonMappingTableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("GameControllerMappingDialog", "DPad Down", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = buttonMappingTableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("GameControllerMappingDialog", "DPad Right", nullptr));
        label_2->setText(QCoreApplication::translate("GameControllerMappingDialog", "SDL 2 Game Controller Mapping String", nullptr));
        label_4->setText(QCoreApplication::translate("GameControllerMappingDialog", "Last Axis Event:", nullptr));
        label_3->setText(QCoreApplication::translate("GameControllerMappingDialog", "Current Axis Detection Dead Zone:", nullptr));
        axisDeadZoneComboBox->setItemText(0, QCoreApplication::translate("GameControllerMappingDialog", "5000", nullptr));
        axisDeadZoneComboBox->setItemText(1, QCoreApplication::translate("GameControllerMappingDialog", "10000", nullptr));
        axisDeadZoneComboBox->setItemText(2, QCoreApplication::translate("GameControllerMappingDialog", "15000", nullptr));
        axisDeadZoneComboBox->setItemText(3, QCoreApplication::translate("GameControllerMappingDialog", "20000", nullptr));
        axisDeadZoneComboBox->setItemText(4, QCoreApplication::translate("GameControllerMappingDialog", "25000", nullptr));
        axisDeadZoneComboBox->setItemText(5, QCoreApplication::translate("GameControllerMappingDialog", "30000", nullptr));
        axisDeadZoneComboBox->setItemText(6, QCoreApplication::translate("GameControllerMappingDialog", "32000", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GameControllerMappingDialog: public Ui_GameControllerMappingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECONTROLLERMAPPINGDIALOG_H
