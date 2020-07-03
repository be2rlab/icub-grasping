/********************************************************************************
** Form generated from reading UI file 'sequencewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQUENCEWINDOW_H
#define UI_SEQUENCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "sequencewindow.h"

QT_BEGIN_NAMESPACE

class Ui_SequenceWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    SequenceTreeWidget *treePositions;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeSpeed;
    QToolBar *toolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SequenceWindow)
    {
        if (SequenceWindow->objectName().isEmpty())
            SequenceWindow->setObjectName(QStringLiteral("SequenceWindow"));
        SequenceWindow->resize(515, 328);
        SequenceWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralwidget = new QWidget(SequenceWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treePositions = new SequenceTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treePositions->setHeaderItem(__qtreewidgetitem);
        treePositions->setObjectName(QStringLiteral("treePositions"));
        treePositions->setContextMenuPolicy(Qt::CustomContextMenu);
        treePositions->setStyleSheet(QLatin1String("QTreeWidget{\n"
"	alternate-background-color: rgb(225, 224, 234);\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        treePositions->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        treePositions->setDragEnabled(true);
        treePositions->setDragDropMode(QAbstractItemView::InternalMove);
        treePositions->setAlternatingRowColors(true);
        treePositions->header()->setDefaultSectionSize(50);
        treePositions->header()->setStretchLastSection(true);

        horizontalLayout->addWidget(treePositions);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeSpeed = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeSpeed->setHeaderItem(__qtreewidgetitem1);
        treeSpeed->setObjectName(QStringLiteral("treeSpeed"));
        treeSpeed->setStyleSheet(QLatin1String("QTreeWidget{\n"
"	alternate-background-color: rgb(225, 224, 234);\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        treeSpeed->header()->setDefaultSectionSize(60);

        horizontalLayout_2->addWidget(treeSpeed);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);

        SequenceWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(SequenceWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        SequenceWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(SequenceWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 515, 21));
        SequenceWindow->setMenuBar(menuBar);

        retranslateUi(SequenceWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SequenceWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SequenceWindow)
    {
        SequenceWindow->setWindowTitle(QApplication::translate("SequenceWindow", "MainWindow", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SequenceWindow", "Positions", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SequenceWindow", "Speed", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("SequenceWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SequenceWindow: public Ui_SequenceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQUENCEWINDOW_H
