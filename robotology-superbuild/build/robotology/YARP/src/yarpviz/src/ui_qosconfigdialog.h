/********************************************************************************
** Form generated from reading UI file 'qosconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QOSCONFIGDIALOG_H
#define UI_QOSCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QosConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetProperty;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QPushButton *resetButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QosConfigDialog)
    {
        if (QosConfigDialog->objectName().isEmpty())
            QosConfigDialog->setObjectName(QStringLiteral("QosConfigDialog"));
        QosConfigDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/resources/qos.png"), QSize(), QIcon::Normal, QIcon::Off);
        QosConfigDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QosConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidgetProperty = new QTreeWidget(QosConfigDialog);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setText(0, QStringLiteral("Property"));
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidgetProperty->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidgetProperty);
        new QTreeWidgetItem(treeWidgetProperty);
        new QTreeWidgetItem(treeWidgetProperty);
        new QTreeWidgetItem(treeWidgetProperty);
        new QTreeWidgetItem(treeWidgetProperty);
        new QTreeWidgetItem(treeWidgetProperty);
        treeWidgetProperty->setObjectName(QStringLiteral("treeWidgetProperty"));
        treeWidgetProperty->setAlternatingRowColors(true);
        treeWidgetProperty->setAllColumnsShowFocus(false);
        treeWidgetProperty->header()->setDefaultSectionSize(240);

        verticalLayout->addWidget(treeWidgetProperty);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(QosConfigDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);

        resetButton = new QPushButton(QosConfigDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);

        cancelButton = new QPushButton(QosConfigDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QosConfigDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), QosConfigDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QosConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QosConfigDialog)
    {
        QosConfigDialog->setWindowTitle(QApplication::translate("QosConfigDialog", "Configuring Connection Qos", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetProperty->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QosConfigDialog", "Value", Q_NULLPTR));

        const bool __sortingEnabled = treeWidgetProperty->isSortingEnabled();
        treeWidgetProperty->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetProperty->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("QosConfigDialog", "Source Packet Priority", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetProperty->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("QosConfigDialog", "Source Thread Priority", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidgetProperty->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("QosConfigDialog", "Source Thread Policy", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidgetProperty->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("QosConfigDialog", "Destination Packet Priority", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidgetProperty->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("QosConfigDialog", "Destination Thread Priority", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidgetProperty->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("QosConfigDialog", "Destination Thread Policy", Q_NULLPTR));
        treeWidgetProperty->setSortingEnabled(__sortingEnabled);

        applyButton->setText(QApplication::translate("QosConfigDialog", "&Apply", Q_NULLPTR));
        resetButton->setText(QApplication::translate("QosConfigDialog", "&Reset", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("QosConfigDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QosConfigDialog: public Ui_QosConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QOSCONFIGDIALOG_H
