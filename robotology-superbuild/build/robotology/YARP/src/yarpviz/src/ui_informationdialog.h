/********************************************************************************
** Form generated from reading UI file 'informationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONDIALOG_H
#define UI_INFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InformationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetProperty;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InformationDialog)
    {
        if (InformationDialog->objectName().isEmpty())
            InformationDialog->setObjectName(QStringLiteral("InformationDialog"));
        InformationDialog->setWindowModality(Qt::NonModal);
        InformationDialog->resize(400, 300);
        InformationDialog->setModal(false);
        verticalLayout = new QVBoxLayout(InformationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidgetProperty = new QTreeWidget(InformationDialog);
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
        treeWidgetProperty->setObjectName(QStringLiteral("treeWidgetProperty"));
        treeWidgetProperty->setAlternatingRowColors(true);
        treeWidgetProperty->setAllColumnsShowFocus(false);
        treeWidgetProperty->header()->setDefaultSectionSize(240);

        verticalLayout->addWidget(treeWidgetProperty);

        buttonBox = new QDialogButtonBox(InformationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InformationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InformationDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(InformationDialog);
    } // setupUi

    void retranslateUi(QDialog *InformationDialog)
    {
        InformationDialog->setWindowTitle(QApplication::translate("InformationDialog", "Information", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetProperty->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("InformationDialog", "Value", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InformationDialog: public Ui_InformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONDIALOG_H
