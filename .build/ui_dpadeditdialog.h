/********************************************************************************
** Form generated from reading UI file 'dpadeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPADEDITDIALOG_H
#define UI_DPADEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DPadEditDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *presetsComboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QComboBox *joyModeComboBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dpadDelayLabel;
    QSlider *dpadDelaySlider;
    QDoubleSpinBox *dpadDelayDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dpadNameLabel;
    QLineEdit *dpadNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DPadEditDialog)
    {
        if (DPadEditDialog->objectName().isEmpty())
            DPadEditDialog->setObjectName(QString::fromUtf8("DPadEditDialog"));
        DPadEditDialog->setWindowModality(Qt::WindowModal);
        DPadEditDialog->resize(528, 334);
        verticalLayout_2 = new QVBoxLayout(DPadEditDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(DPadEditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        presetsComboBox = new QComboBox(DPadEditDialog);
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->addItem(QString());
        presetsComboBox->setObjectName(QString::fromUtf8("presetsComboBox"));
        presetsComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout->addWidget(presetsComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(DPadEditDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        joyModeComboBox = new QComboBox(DPadEditDialog);
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->addItem(QString());
        joyModeComboBox->setObjectName(QString::fromUtf8("joyModeComboBox"));
        joyModeComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout_13->addWidget(joyModeComboBox);


        verticalLayout->addLayout(horizontalLayout_13);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dpadDelayLabel = new QLabel(DPadEditDialog);
        dpadDelayLabel->setObjectName(QString::fromUtf8("dpadDelayLabel"));

        horizontalLayout_3->addWidget(dpadDelayLabel);

        dpadDelaySlider = new QSlider(DPadEditDialog);
        dpadDelaySlider->setObjectName(QString::fromUtf8("dpadDelaySlider"));
        dpadDelaySlider->setMinimum(0);
        dpadDelaySlider->setMaximum(100);
        dpadDelaySlider->setSingleStep(1);
        dpadDelaySlider->setPageStep(10);
        dpadDelaySlider->setValue(0);
        dpadDelaySlider->setSliderPosition(0);
        dpadDelaySlider->setOrientation(Qt::Horizontal);
        dpadDelaySlider->setTickPosition(QSlider::TicksBelow);
        dpadDelaySlider->setTickInterval(0);

        horizontalLayout_3->addWidget(dpadDelaySlider);

        dpadDelayDoubleSpinBox = new QDoubleSpinBox(DPadEditDialog);
        dpadDelayDoubleSpinBox->setObjectName(QString::fromUtf8("dpadDelayDoubleSpinBox"));
        dpadDelayDoubleSpinBox->setReadOnly(false);
        dpadDelayDoubleSpinBox->setDecimals(2);
        dpadDelayDoubleSpinBox->setMaximum(1.000000000000000);
        dpadDelayDoubleSpinBox->setSingleStep(0.010000000000000);

        horizontalLayout_3->addWidget(dpadDelayDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 6);
        dpadNameLabel = new QLabel(DPadEditDialog);
        dpadNameLabel->setObjectName(QString::fromUtf8("dpadNameLabel"));

        horizontalLayout_2->addWidget(dpadNameLabel);

        dpadNameLineEdit = new QLineEdit(DPadEditDialog);
        dpadNameLineEdit->setObjectName(QString::fromUtf8("dpadNameLineEdit"));

        horizontalLayout_2->addWidget(dpadNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mouseSettingsPushButton = new QPushButton(DPadEditDialog);
        mouseSettingsPushButton->setObjectName(QString::fromUtf8("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("input-mouse");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout_2->addWidget(mouseSettingsPushButton);

        line = new QFrame(DPadEditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        buttonBox = new QDialogButtonBox(DPadEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        dpadNameLabel->setBuddy(dpadNameLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DPadEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPadEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPadEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPadEditDialog);
    } // setupUi

    void retranslateUi(QDialog *DPadEditDialog)
    {
        DPadEditDialog->setWindowTitle(QCoreApplication::translate("DPadEditDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("DPadEditDialog", "Presets:", nullptr));
        presetsComboBox->setItemText(0, QString());
        presetsComboBox->setItemText(1, QCoreApplication::translate("DPadEditDialog", "Mouse (Normal)", nullptr));
        presetsComboBox->setItemText(2, QCoreApplication::translate("DPadEditDialog", "Mouse (Inverted Horizontal)", nullptr));
        presetsComboBox->setItemText(3, QCoreApplication::translate("DPadEditDialog", "Mouse (Inverted Vertical)", nullptr));
        presetsComboBox->setItemText(4, QCoreApplication::translate("DPadEditDialog", "Mouse (Inverted Horizontal + Vertical)", nullptr));
        presetsComboBox->setItemText(5, QCoreApplication::translate("DPadEditDialog", "Arrows", nullptr));
        presetsComboBox->setItemText(6, QCoreApplication::translate("DPadEditDialog", "Keys: W | A | S | D", nullptr));
        presetsComboBox->setItemText(7, QCoreApplication::translate("DPadEditDialog", "NumPad", nullptr));
        presetsComboBox->setItemText(8, QCoreApplication::translate("DPadEditDialog", "None", nullptr));

        label_11->setText(QCoreApplication::translate("DPadEditDialog", "Dpad Mode:", nullptr));
        joyModeComboBox->setItemText(0, QCoreApplication::translate("DPadEditDialog", "Standard", nullptr));
        joyModeComboBox->setItemText(1, QCoreApplication::translate("DPadEditDialog", "Eight Way", nullptr));
        joyModeComboBox->setItemText(2, QCoreApplication::translate("DPadEditDialog", "4 Way Cardinal", nullptr));
        joyModeComboBox->setItemText(3, QCoreApplication::translate("DPadEditDialog", "4 Way Diagonal", nullptr));

#if QT_CONFIG(tooltip)
        joyModeComboBox->setToolTip(QCoreApplication::translate("DPadEditDialog", "Standard: 8 region dpad with two direction buttons active\n"
"when the dpad is in a diagonal region.\n"
"\n"
"Eight Way: 8 region dpad with each direction having its\n"
"own dedicated button. Only one button is ever active at\n"
"at time. Useful for rougelike games.\n"
"\n"
"4 Way Cardinal: 4 region dpad with regions corresponding to\n"
"the cardinal directions of the dpad. Useful for menus.\n"
"\n"
"4 Way Diagonal: 4 region dpad with each region corresponding\n"
"to a diagonal zone.", nullptr));
#endif // QT_CONFIG(tooltip)
        dpadDelayLabel->setText(QCoreApplication::translate("DPadEditDialog", "DPad Delay:", nullptr));
#if QT_CONFIG(tooltip)
        dpadDelaySlider->setToolTip(QCoreApplication::translate("DPadEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dpadDelayDoubleSpinBox->setToolTip(QCoreApplication::translate("DPadEditDialog", "Time lapsed before a direction change is taken into effect.", nullptr));
#endif // QT_CONFIG(tooltip)
        dpadDelayDoubleSpinBox->setSuffix(QCoreApplication::translate("DPadEditDialog", " s", nullptr));
        dpadNameLabel->setText(QCoreApplication::translate("DPadEditDialog", "&Name:", nullptr));
#if QT_CONFIG(tooltip)
        dpadNameLineEdit->setToolTip(QCoreApplication::translate("DPadEditDialog", "Specify the name of a dpad.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseSettingsPushButton->setText(QCoreApplication::translate("DPadEditDialog", "Mouse Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPadEditDialog: public Ui_DPadEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPADEDITDIALOG_H
