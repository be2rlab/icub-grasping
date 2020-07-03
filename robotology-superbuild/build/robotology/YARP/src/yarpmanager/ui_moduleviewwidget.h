/********************************************************************************
** Form generated from reading UI file 'moduleviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEVIEWWIDGET_H
#define UI_MODULEVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleViewWidget
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *ModuleViewWidget)
    {
        if (ModuleViewWidget->objectName().isEmpty())
            ModuleViewWidget->setObjectName(QStringLiteral("ModuleViewWidget"));
        ModuleViewWidget->resize(400, 300);
        gridLayout = new QGridLayout(ModuleViewWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(ModuleViewWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(200);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);


        retranslateUi(ModuleViewWidget);

        QMetaObject::connectSlotsByName(ModuleViewWidget);
    } // setupUi

    void retranslateUi(QWidget *ModuleViewWidget)
    {
        ModuleViewWidget->setWindowTitle(QApplication::translate("ModuleViewWidget", "Form", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ModuleViewWidget", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ModuleViewWidget", "Item", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ModuleViewWidget", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ModuleViewWidget", "Version", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ModuleViewWidget", "Description", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ModuleViewWidget", "Parameters", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ModuleViewWidget", "Authors", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ModuleViewWidget", "Inputs", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ModuleViewWidget", "Outputs", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ModuleViewWidget: public Ui_ModuleViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEVIEWWIDGET_H
