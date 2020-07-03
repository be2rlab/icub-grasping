/********************************************************************************
** Form generated from reading UI file 'logtab.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGTAB_H
#define UI_LOGTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_LogTab
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *listView;

    void setupUi(QFrame *LogTab)
    {
        if (LogTab->objectName().isEmpty())
            LogTab->setObjectName(QStringLiteral("LogTab"));
        LogTab->resize(521, 381);
        LogTab->setFrameShape(QFrame::StyledPanel);
        LogTab->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(LogTab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new QTableView(LogTab);
        listView->setObjectName(QStringLiteral("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setSortingEnabled(true);

        horizontalLayout->addWidget(listView);


        retranslateUi(LogTab);

        QMetaObject::connectSlotsByName(LogTab);
    } // setupUi

    void retranslateUi(QFrame *LogTab)
    {
        LogTab->setWindowTitle(QApplication::translate("LogTab", "Frame", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogTab: public Ui_LogTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGTAB_H
