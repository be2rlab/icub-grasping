/********************************************************************************
** Form generated from reading UI file 'batchqosconfdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHQOSCONFDIALOG_H
#define UI_BATCHQOSCONFDIALOG_H

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

class Ui_BatchQosConfDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetCons;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonBatchQosOpen;
    QPushButton *pushButtonBatchQosConfigure;
    QPushButton *pushButtonBatchQosUpdate;
    QPushButton *pushButtonBatchQosClose;

    void setupUi(QDialog *BatchQosConfDialog)
    {
        if (BatchQosConfDialog->objectName().isEmpty())
            BatchQosConfDialog->setObjectName(QStringLiteral("BatchQosConfDialog"));
        BatchQosConfDialog->resize(857, 329);
        verticalLayout = new QVBoxLayout(BatchQosConfDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidgetCons = new QTreeWidget(BatchQosConfDialog);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(5, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(5, font);
        __qtreewidgetitem->setTextAlignment(4, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(4, font);
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(3, font);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setText(1, QStringLiteral("Source"));
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidgetCons->setHeaderItem(__qtreewidgetitem);
        treeWidgetCons->setObjectName(QStringLiteral("treeWidgetCons"));
        treeWidgetCons->setAlternatingRowColors(true);
        treeWidgetCons->setSelectionMode(QAbstractItemView::MultiSelection);
        treeWidgetCons->setSortingEnabled(true);
        treeWidgetCons->setAnimated(true);
        treeWidgetCons->setAllColumnsShowFocus(false);
        treeWidgetCons->header()->setDefaultSectionSize(240);

        verticalLayout->addWidget(treeWidgetCons);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pushButtonBatchQosOpen = new QPushButton(BatchQosConfDialog);
        pushButtonBatchQosOpen->setObjectName(QStringLiteral("pushButtonBatchQosOpen"));

        horizontalLayout->addWidget(pushButtonBatchQosOpen);

        pushButtonBatchQosConfigure = new QPushButton(BatchQosConfDialog);
        pushButtonBatchQosConfigure->setObjectName(QStringLiteral("pushButtonBatchQosConfigure"));

        horizontalLayout->addWidget(pushButtonBatchQosConfigure);

        pushButtonBatchQosUpdate = new QPushButton(BatchQosConfDialog);
        pushButtonBatchQosUpdate->setObjectName(QStringLiteral("pushButtonBatchQosUpdate"));

        horizontalLayout->addWidget(pushButtonBatchQosUpdate);

        pushButtonBatchQosClose = new QPushButton(BatchQosConfDialog);
        pushButtonBatchQosClose->setObjectName(QStringLiteral("pushButtonBatchQosClose"));

        horizontalLayout->addWidget(pushButtonBatchQosClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BatchQosConfDialog);
        QObject::connect(pushButtonBatchQosClose, SIGNAL(clicked()), BatchQosConfDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(BatchQosConfDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchQosConfDialog)
    {
        BatchQosConfDialog->setWindowTitle(QApplication::translate("BatchQosConfDialog", "Configure connections Qos", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetCons->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("BatchQosConfDialog", "Destination QOS", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("BatchQosConfDialog", "Source QOS", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("BatchQosConfDialog", "Carrier", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("BatchQosConfDialog", "Destination", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("BatchQosConfDialog", "QOS Status", Q_NULLPTR));
        pushButtonBatchQosOpen->setText(QApplication::translate("BatchQosConfDialog", "&Open", Q_NULLPTR));
        pushButtonBatchQosConfigure->setText(QApplication::translate("BatchQosConfDialog", "&Configure...", Q_NULLPTR));
        pushButtonBatchQosUpdate->setText(QApplication::translate("BatchQosConfDialog", "&Update Status", Q_NULLPTR));
        pushButtonBatchQosClose->setText(QApplication::translate("BatchQosConfDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BatchQosConfDialog: public Ui_BatchQosConfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHQOSCONFDIALOG_H
