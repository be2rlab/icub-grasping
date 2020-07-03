/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *fogCheck;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnApply;
    QPushButton *btnCancel;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(258, 171);
        verticalLayout_2 = new QVBoxLayout(SettingsDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(SettingsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fogCheck = new QCheckBox(groupBox);
        fogCheck->setObjectName(QStringLiteral("fogCheck"));

        verticalLayout->addWidget(fogCheck);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(100);

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOk = new QPushButton(SettingsDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnApply = new QPushButton(SettingsDialog);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        horizontalLayout->addWidget(btnApply);

        btnCancel = new QPushButton(SettingsDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 80);
        verticalLayout_2->setStretch(1, 20);

        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Configure iCubGUI", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "OpenGL", Q_NULLPTR));
        fogCheck->setText(QApplication::translate("SettingsDialog", "Use Fog", Q_NULLPTR));
        label->setText(QApplication::translate("SettingsDialog", "Floor translucency:", Q_NULLPTR));
        spinBox->setSuffix(QApplication::translate("SettingsDialog", "%", Q_NULLPTR));
        btnOk->setText(QApplication::translate("SettingsDialog", "Ok", Q_NULLPTR));
        btnApply->setText(QApplication::translate("SettingsDialog", "Apply", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("SettingsDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
