/********************************************************************************
** Form generated from reading UI file 'yscopewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YSCOPEWINDOW_H
#define UI_YSCOPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_YscopeWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *inspectBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *YscopeWindow)
    {
        if (YscopeWindow->objectName().isEmpty())
            YscopeWindow->setObjectName(QStringLiteral("YscopeWindow"));
        YscopeWindow->resize(176, 85);
        verticalLayout = new QVBoxLayout(YscopeWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(YscopeWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(YscopeWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        inspectBtn = new QPushButton(YscopeWindow);
        inspectBtn->setObjectName(QStringLiteral("inspectBtn"));

        horizontalLayout_2->addWidget(inspectBtn);

        cancelBtn = new QPushButton(YscopeWindow);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout_2->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        label->raise();
        spinBox->raise();
        label->raise();
        cancelBtn->raise();
        inspectBtn->raise();

        retranslateUi(YscopeWindow);

        QMetaObject::connectSlotsByName(YscopeWindow);
    } // setupUi

    void retranslateUi(QDialog *YscopeWindow)
    {
        YscopeWindow->setWindowTitle(QApplication::translate("YscopeWindow", "Inspecting using yarpscope", Q_NULLPTR));
        label->setText(QApplication::translate("YscopeWindow", "Data index:", Q_NULLPTR));
        inspectBtn->setText(QApplication::translate("YscopeWindow", "Inspect", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("YscopeWindow", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class YscopeWindow: public Ui_YscopeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YSCOPEWINDOW_H
