/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Sequence_Tab;
    QAction *actionRun_All;
    QAction *actionCalibrate_All;
    QAction *actionHome_All;
    QAction *actionIdle_All;
    QAction *actionGo_All;
    QAction *actionRun_All_Sequences;
    QAction *actionRun_All_Sequences_time;
    QAction *actionSave_All_Sequence;
    QAction *actionLoad_All_Sequnces;
    QAction *actionCycle_All_Sequences;
    QAction *actionStop_All_Sequences;
    QAction *actionRun_All_Parts;
    QAction *actionRun_All_Parts_2;
    QAction *actionHome_All_Parts;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    ModesTreeWidget *treeWidgetMode;
    QWidget *mainContainer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen_Sequence_Tab = new QAction(MainWindow);
        actionOpen_Sequence_Tab->setObjectName(QStringLiteral("actionOpen_Sequence_Tab"));
        actionRun_All = new QAction(MainWindow);
        actionRun_All->setObjectName(QStringLiteral("actionRun_All"));
        actionCalibrate_All = new QAction(MainWindow);
        actionCalibrate_All->setObjectName(QStringLiteral("actionCalibrate_All"));
        actionHome_All = new QAction(MainWindow);
        actionHome_All->setObjectName(QStringLiteral("actionHome_All"));
        actionIdle_All = new QAction(MainWindow);
        actionIdle_All->setObjectName(QStringLiteral("actionIdle_All"));
        actionGo_All = new QAction(MainWindow);
        actionGo_All->setObjectName(QStringLiteral("actionGo_All"));
        actionRun_All_Sequences = new QAction(MainWindow);
        actionRun_All_Sequences->setObjectName(QStringLiteral("actionRun_All_Sequences"));
        actionRun_All_Sequences_time = new QAction(MainWindow);
        actionRun_All_Sequences_time->setObjectName(QStringLiteral("actionRun_All_Sequences_time"));
        actionSave_All_Sequence = new QAction(MainWindow);
        actionSave_All_Sequence->setObjectName(QStringLiteral("actionSave_All_Sequence"));
        actionLoad_All_Sequnces = new QAction(MainWindow);
        actionLoad_All_Sequnces->setObjectName(QStringLiteral("actionLoad_All_Sequnces"));
        actionCycle_All_Sequences = new QAction(MainWindow);
        actionCycle_All_Sequences->setObjectName(QStringLiteral("actionCycle_All_Sequences"));
        actionStop_All_Sequences = new QAction(MainWindow);
        actionStop_All_Sequences->setObjectName(QStringLiteral("actionStop_All_Sequences"));
        actionRun_All_Parts = new QAction(MainWindow);
        actionRun_All_Parts->setObjectName(QStringLiteral("actionRun_All_Parts"));
        actionRun_All_Parts_2 = new QAction(MainWindow);
        actionRun_All_Parts_2->setObjectName(QStringLiteral("actionRun_All_Parts_2"));
        actionHome_All_Parts = new QAction(MainWindow);
        actionHome_All_Parts->setObjectName(QStringLiteral("actionHome_All_Parts"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setOrientation(Qt::Horizontal);
        treeWidgetMode = new ModesTreeWidget(splitter);
        treeWidgetMode->setObjectName(QStringLiteral("treeWidgetMode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidgetMode->sizePolicy().hasHeightForWidth());
        treeWidgetMode->setSizePolicy(sizePolicy);
        treeWidgetMode->setMaximumSize(QSize(300, 16777215));
        treeWidgetMode->setFrameShape(QFrame::NoFrame);
        treeWidgetMode->setAnimated(true);
        splitter->addWidget(treeWidgetMode);
        treeWidgetMode->header()->setDefaultSectionSize(150);
        mainContainer = new QWidget(splitter);
        mainContainer->setObjectName(QStringLiteral("mainContainer"));
        splitter->addWidget(mainContainer);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_Sequence_Tab->setText(QApplication::translate("MainWindow", "Open Sequence Tab", Q_NULLPTR));
        actionRun_All->setText(QApplication::translate("MainWindow", "Run All", Q_NULLPTR));
        actionCalibrate_All->setText(QApplication::translate("MainWindow", "Calibrate All", Q_NULLPTR));
        actionHome_All->setText(QApplication::translate("MainWindow", "Home All", Q_NULLPTR));
        actionIdle_All->setText(QApplication::translate("MainWindow", "Idle All", Q_NULLPTR));
        actionGo_All->setText(QApplication::translate("MainWindow", "Go All", Q_NULLPTR));
        actionRun_All_Sequences->setText(QApplication::translate("MainWindow", "Run All Sequences", Q_NULLPTR));
        actionRun_All_Sequences_time->setText(QApplication::translate("MainWindow", "Run All Sequences (time)", Q_NULLPTR));
        actionSave_All_Sequence->setText(QApplication::translate("MainWindow", "Save All Sequence", Q_NULLPTR));
        actionLoad_All_Sequnces->setText(QApplication::translate("MainWindow", "Load All Sequences", Q_NULLPTR));
        actionCycle_All_Sequences->setText(QApplication::translate("MainWindow", "Cycle All Sequences", Q_NULLPTR));
        actionStop_All_Sequences->setText(QApplication::translate("MainWindow", "Stop All Sequences", Q_NULLPTR));
        actionRun_All_Parts->setText(QApplication::translate("MainWindow", "Run All Parts", Q_NULLPTR));
        actionRun_All_Parts_2->setText(QApplication::translate("MainWindow", "Run All Parts", Q_NULLPTR));
        actionHome_All_Parts->setText(QApplication::translate("MainWindow", "Home All Parts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMode->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Parts", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
