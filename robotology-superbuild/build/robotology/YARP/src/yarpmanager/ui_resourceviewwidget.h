/********************************************************************************
** Form generated from reading UI file 'resourceviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEVIEWWIDGET_H
#define UI_RESOURCEVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourceViewWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *ResourceViewWidget)
    {
        if (ResourceViewWidget->objectName().isEmpty())
            ResourceViewWidget->setObjectName(QStringLiteral("ResourceViewWidget"));
        ResourceViewWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ResourceViewWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(ResourceViewWidget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/computer22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/computer-available22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/module22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/hardware.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/drive-harddisk.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/run22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setIcon(0, icon2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setIcon(0, icon3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem4->setIcon(0, icon3);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setIcon(0, icon3);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem6->setIcon(0, icon4);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem7->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem8->setIcon(0, icon5);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(200);

        verticalLayout->addWidget(treeWidget);


        retranslateUi(ResourceViewWidget);

        QMetaObject::connectSlotsByName(ResourceViewWidget);
    } // setupUi

    void retranslateUi(QWidget *ResourceViewWidget)
    {
        ResourceViewWidget->setWindowTitle(QApplication::translate("ResourceViewWidget", "Form", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ResourceViewWidget", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ResourceViewWidget", "Item", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ResourceViewWidget", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ResourceViewWidget", "Description", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ResourceViewWidget", "Disable", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(1, QApplication::translate("ResourceViewWidget", "Yes", Q_NULLPTR));
        ___qtreewidgetitem4->setText(0, QApplication::translate("ResourceViewWidget", "Availability", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ResourceViewWidget", "Platform", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ResourceViewWidget", "Name", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ResourceViewWidget", "Distribution", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ResourceViewWidget", "Release", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ResourceViewWidget", "Processor", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ResourceViewWidget", "Model", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("ResourceViewWidget", "Architecture", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem9->child(2);
        ___qtreewidgetitem12->setText(1, QApplication::translate("ResourceViewWidget", "0", Q_NULLPTR));
        ___qtreewidgetitem12->setText(0, QApplication::translate("ResourceViewWidget", "Cores", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem9->child(3);
        ___qtreewidgetitem13->setText(1, QApplication::translate("ResourceViewWidget", "0", Q_NULLPTR));
        ___qtreewidgetitem13->setText(0, QApplication::translate("ResourceViewWidget", "Siblings", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem9->child(4);
        ___qtreewidgetitem14->setText(1, QApplication::translate("ResourceViewWidget", "0.00", Q_NULLPTR));
        ___qtreewidgetitem14->setText(0, QApplication::translate("ResourceViewWidget", "Frequency", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem15->setText(0, QApplication::translate("ResourceViewWidget", "CPU Load", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(1, QApplication::translate("ResourceViewWidget", "0.0%", Q_NULLPTR));
        ___qtreewidgetitem16->setText(0, QApplication::translate("ResourceViewWidget", "Load Instant", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem15->child(1);
        ___qtreewidgetitem17->setText(1, QApplication::translate("ResourceViewWidget", "0.0%", Q_NULLPTR));
        ___qtreewidgetitem17->setText(0, QApplication::translate("ResourceViewWidget", "Load average 1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem15->child(2);
        ___qtreewidgetitem18->setText(1, QApplication::translate("ResourceViewWidget", "0.0%", Q_NULLPTR));
        ___qtreewidgetitem18->setText(0, QApplication::translate("ResourceViewWidget", "Load average 5", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem15->child(3);
        ___qtreewidgetitem19->setText(1, QApplication::translate("ResourceViewWidget", "0.0%", Q_NULLPTR));
        ___qtreewidgetitem19->setText(0, QApplication::translate("ResourceViewWidget", "Load average 15", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem20 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem20->setText(0, QApplication::translate("ResourceViewWidget", "Memory", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(1, QApplication::translate("ResourceViewWidget", "0 KB", Q_NULLPTR));
        ___qtreewidgetitem21->setText(0, QApplication::translate("ResourceViewWidget", "Total Space", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem20->child(1);
        ___qtreewidgetitem22->setText(1, QApplication::translate("ResourceViewWidget", "0 KB", Q_NULLPTR));
        ___qtreewidgetitem22->setText(0, QApplication::translate("ResourceViewWidget", "Free Space", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem23 = treeWidget->topLevelItem(8);
        ___qtreewidgetitem23->setText(0, QApplication::translate("ResourceViewWidget", "Storage", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem23->child(0);
        ___qtreewidgetitem24->setText(1, QApplication::translate("ResourceViewWidget", "0 KB", Q_NULLPTR));
        ___qtreewidgetitem24->setText(0, QApplication::translate("ResourceViewWidget", "Total Space", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem23->child(1);
        ___qtreewidgetitem25->setText(1, QApplication::translate("ResourceViewWidget", "0 KB", Q_NULLPTR));
        ___qtreewidgetitem25->setText(0, QApplication::translate("ResourceViewWidget", "Free Space", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem26 = treeWidget->topLevelItem(9);
        ___qtreewidgetitem26->setText(0, QApplication::translate("ResourceViewWidget", "Peripheral Devices", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem27 = treeWidget->topLevelItem(10);
        ___qtreewidgetitem27->setText(0, QApplication::translate("ResourceViewWidget", "Processes", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ResourceViewWidget: public Ui_ResourceViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEVIEWWIDGET_H
