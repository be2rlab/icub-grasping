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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clusterWidget.h"
#include "entitiestreewidget.h"
#include "logwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Application;
    QAction *actionNew_Module;
    QAction *actionNew_Resource;
    QAction *actionOpen_File;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionImport_Files;
    QAction *actionQuit;
    QAction *actionSelect_All;
    QAction *actionExport_Graph;
    QAction *actionRun_all;
    QAction *actionStop_all;
    QAction *actionKill_all;
    QAction *actionConnect_all;
    QAction *actionDisconnect_all;
    QAction *actionRefresh_Status;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *action_Builder_Window;
    QAction *action_Manager_Window;
    QAction *actionRun;
    QAction *actionStop;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionKill;
    QAction *actionYarpClean;
    QAction *actionYarpNameList;
    QAction *actionAuto_reload;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *mainPanel;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QTabWidget *tabWidgetLeft;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_8;
    ClusterWidget *clusterWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    EntitiesTreeWidget *entitiesTree;
    QTabWidget *mainTabs;
    QWidget *bottomPanel;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabMessages;
    QHBoxLayout *horizontalLayout_3;
    LogWidget *logWidget;
    QWidget *tabNotes;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *notesWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuEdit;
    QMenu *menuManage;
    QMenu *menuHelp;
    QMenu *menu_View;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *applicationActionToolBar;
    QToolBar *selectionActionToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_Application = new QAction(MainWindow);
        actionNew_Application->setObjectName(QStringLiteral("actionNew_Application"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/run22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Application->setIcon(icon1);
        actionNew_Module = new QAction(MainWindow);
        actionNew_Module->setObjectName(QStringLiteral("actionNew_Module"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/module22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Module->setIcon(icon2);
        actionNew_Resource = new QAction(MainWindow);
        actionNew_Resource->setObjectName(QStringLiteral("actionNew_Resource"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/computer22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Resource->setIcon(icon3);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/file-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/file-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_As->setEnabled(false);
        actionSave_As->setIcon(icon6);
        actionImport_Files = new QAction(MainWindow);
        actionImport_Files->setObjectName(QStringLiteral("actionImport_Files"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/folder-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport_Files->setIcon(icon7);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionQuit->setIcon(icon5);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/select-all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon8);
        actionExport_Graph = new QAction(MainWindow);
        actionExport_Graph->setObjectName(QStringLiteral("actionExport_Graph"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/uml-app.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_Graph->setIcon(icon9);
        actionRun_all = new QAction(MainWindow);
        actionRun_all->setObjectName(QStringLiteral("actionRun_all"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/play_all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun_all->setIcon(icon10);
        actionStop_all = new QAction(MainWindow);
        actionStop_all->setObjectName(QStringLiteral("actionStop_all"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/stop_all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop_all->setIcon(icon11);
        actionKill_all = new QAction(MainWindow);
        actionKill_all->setObjectName(QStringLiteral("actionKill_all"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/kill_all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionKill_all->setIcon(icon12);
        actionConnect_all = new QAction(MainWindow);
        actionConnect_all->setObjectName(QStringLiteral("actionConnect_all"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/connect_all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect_all->setIcon(icon13);
        actionDisconnect_all = new QAction(MainWindow);
        actionDisconnect_all->setObjectName(QStringLiteral("actionDisconnect_all"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/disconnect_all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect_all->setIcon(icon14);
        actionRefresh_Status = new QAction(MainWindow);
        actionRefresh_Status->setObjectName(QStringLiteral("actionRefresh_Status"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh_Status->setIcon(icon15);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon16);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon17);
        action_Builder_Window = new QAction(MainWindow);
        action_Builder_Window->setObjectName(QStringLiteral("action_Builder_Window"));
        action_Builder_Window->setCheckable(true);
        action_Manager_Window = new QAction(MainWindow);
        action_Manager_Window->setObjectName(QStringLiteral("action_Manager_Window"));
        action_Manager_Window->setCheckable(true);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon18);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon19);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/connect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon20);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/disconnect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon21);
        actionKill = new QAction(MainWindow);
        actionKill->setObjectName(QStringLiteral("actionKill"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/kill.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionKill->setIcon(icon22);
        actionYarpClean = new QAction(MainWindow);
        actionYarpClean->setObjectName(QStringLiteral("actionYarpClean"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/yarpClean.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionYarpClean->setIcon(icon23);
        actionYarpNameList = new QAction(MainWindow);
        actionYarpNameList->setObjectName(QStringLiteral("actionYarpNameList"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/yarp_name_list.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionYarpNameList->setIcon(icon24);
        actionAuto_reload = new QAction(MainWindow);
        actionAuto_reload->setObjectName(QStringLiteral("actionAuto_reload"));
        actionAuto_reload->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        mainPanel = new QWidget(splitter);
        mainPanel->setObjectName(QStringLiteral("mainPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(mainPanel->sizePolicy().hasHeightForWidth());
        mainPanel->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(mainPanel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter_2 = new QSplitter(mainPanel);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        tabWidgetLeft = new QTabWidget(splitter_2);
        tabWidgetLeft->setObjectName(QStringLiteral("tabWidgetLeft"));
        tabWidgetLeft->setTabPosition(QTabWidget::West);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_8 = new QHBoxLayout(tab_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        clusterWidget = new ClusterWidget(tab_2);
        clusterWidget->setObjectName(QStringLiteral("clusterWidget"));

        horizontalLayout_8->addWidget(clusterWidget);

        tabWidgetLeft->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        entitiesTree = new EntitiesTreeWidget(tab);
        entitiesTree->setObjectName(QStringLiteral("entitiesTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(entitiesTree->sizePolicy().hasHeightForWidth());
        entitiesTree->setSizePolicy(sizePolicy1);
        entitiesTree->setFrameShape(QFrame::NoFrame);
        entitiesTree->setSortingEnabled(true);

        verticalLayout_2->addWidget(entitiesTree);

        tabWidgetLeft->addTab(tab, QString());
        splitter_2->addWidget(tabWidgetLeft);
        mainTabs = new QTabWidget(splitter_2);
        mainTabs->setObjectName(QStringLiteral("mainTabs"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(15);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainTabs->sizePolicy().hasHeightForWidth());
        mainTabs->setSizePolicy(sizePolicy2);
        mainTabs->setStyleSheet(QLatin1String("\n"
"              QTabBar::close-button {image: url(:/close22.svg);}\n"
"              QTabBar::close-button:hover { border: 2px solid transparent; image: url(:/close22-red.svg); }\n"
"              QTabWidget::pane { border: none; }\n"
"            "));
        mainTabs->setTabsClosable(true);
        mainTabs->setMovable(true);
        splitter_2->addWidget(mainTabs);

        horizontalLayout->addWidget(splitter_2);

        splitter->addWidget(mainPanel);
        bottomPanel = new QWidget(splitter);
        bottomPanel->setObjectName(QStringLiteral("bottomPanel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(bottomPanel->sizePolicy().hasHeightForWidth());
        bottomPanel->setSizePolicy(sizePolicy3);
        bottomPanel->setMinimumSize(QSize(0, 100));
        horizontalLayout_2 = new QHBoxLayout(bottomPanel);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(bottomPanel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::South);
        tabMessages = new QWidget();
        tabMessages->setObjectName(QStringLiteral("tabMessages"));
        horizontalLayout_3 = new QHBoxLayout(tabMessages);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        logWidget = new LogWidget(tabMessages);
        logWidget->setObjectName(QStringLiteral("logWidget"));
        logWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        logWidget->setFrameShape(QFrame::NoFrame);
        logWidget->setLineWidth(0);

        horizontalLayout_3->addWidget(logWidget);

        tabWidget->addTab(tabMessages, QString());
        tabNotes = new QWidget();
        tabNotes->setObjectName(QStringLiteral("tabNotes"));
        horizontalLayout_4 = new QHBoxLayout(tabNotes);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        notesWidget = new QPlainTextEdit(tabNotes);
        notesWidget->setObjectName(QStringLiteral("notesWidget"));
        notesWidget->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(notesWidget);

        tabWidget->addTab(tabNotes, QString());

        horizontalLayout_2->addWidget(tabWidget);

        splitter->addWidget(bottomPanel);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 26));
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setTearOffEnabled(false);
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuManage = new QMenu(menuBar);
        menuManage->setObjectName(QStringLiteral("menuManage"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        applicationActionToolBar = new QToolBar(MainWindow);
        applicationActionToolBar->setObjectName(QStringLiteral("applicationActionToolBar"));
        applicationActionToolBar->setMovable(true);
        MainWindow->addToolBar(Qt::LeftToolBarArea, applicationActionToolBar);
        selectionActionToolBar = new QToolBar(MainWindow);
        selectionActionToolBar->setObjectName(QStringLiteral("selectionActionToolBar"));
        selectionActionToolBar->setMovable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, selectionActionToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuManage->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionAuto_reload);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionImport_Files);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuNew->addAction(actionNew_Application);
        menuNew->addAction(actionNew_Module);
        menuNew->addAction(actionNew_Resource);
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionExport_Graph);
        menuManage->addAction(actionRun_all);
        menuManage->addAction(actionStop_all);
        menuManage->addAction(actionKill_all);
        menuManage->addSeparator();
        menuManage->addAction(actionConnect_all);
        menuManage->addAction(actionDisconnect_all);
        menuManage->addSeparator();
        menuManage->addAction(actionRefresh_Status);
        menuManage->addSeparator();
        menuManage->addAction(actionRun);
        menuManage->addAction(actionStop);
        menuManage->addAction(actionKill);
        menuManage->addSeparator();
        menuManage->addAction(actionConnect);
        menuManage->addAction(actionDisconnect);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menu_View->addAction(action_Builder_Window);
        menu_View->addAction(action_Manager_Window);
        mainToolBar->addAction(actionOpen_File);
        mainToolBar->addAction(actionImport_Files);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSelect_All);
        mainToolBar->addAction(actionRefresh_Status);
        applicationActionToolBar->addAction(actionRun_all);
        applicationActionToolBar->addAction(actionStop_all);
        applicationActionToolBar->addAction(actionKill_all);
        applicationActionToolBar->addSeparator();
        applicationActionToolBar->addAction(actionConnect_all);
        applicationActionToolBar->addAction(actionDisconnect_all);
        selectionActionToolBar->addAction(actionRun);
        selectionActionToolBar->addAction(actionStop);
        selectionActionToolBar->addAction(actionKill);
        selectionActionToolBar->addSeparator();
        selectionActionToolBar->addAction(actionConnect);
        selectionActionToolBar->addAction(actionDisconnect);
        selectionActionToolBar->addSeparator();
        selectionActionToolBar->addAction(actionYarpClean);
        selectionActionToolBar->addAction(actionYarpNameList);

        retranslateUi(MainWindow);

        tabWidgetLeft->setCurrentIndex(1);
        mainTabs->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YARP module manager", Q_NULLPTR));
        actionNew_Application->setText(QApplication::translate("MainWindow", "New Application", Q_NULLPTR));
        actionNew_Module->setText(QApplication::translate("MainWindow", "New Module", Q_NULLPTR));
        actionNew_Resource->setText(QApplication::translate("MainWindow", "New Resource", Q_NULLPTR));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionImport_Files->setText(QApplication::translate("MainWindow", "Import Folder", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", Q_NULLPTR));
        actionExport_Graph->setText(QApplication::translate("MainWindow", "Export Graph...", Q_NULLPTR));
        actionRun_all->setText(QApplication::translate("MainWindow", "Run all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRun_all->setToolTip(QApplication::translate("MainWindow", "Run all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop_all->setText(QApplication::translate("MainWindow", "Stop all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop_all->setToolTip(QApplication::translate("MainWindow", "Stop all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionKill_all->setText(QApplication::translate("MainWindow", "Kill all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionKill_all->setToolTip(QApplication::translate("MainWindow", "Kill all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect_all->setText(QApplication::translate("MainWindow", "Connect all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect_all->setToolTip(QApplication::translate("MainWindow", "Connect all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDisconnect_all->setText(QApplication::translate("MainWindow", "Disconnect all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisconnect_all->setToolTip(QApplication::translate("MainWindow", "Disconnect all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRefresh_Status->setText(QApplication::translate("MainWindow", "Refresh Status", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRefresh_Status->setShortcut(QApplication::translate("MainWindow", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        action_Builder_Window->setText(QApplication::translate("MainWindow", "&Builder Window", Q_NULLPTR));
        action_Manager_Window->setText(QApplication::translate("MainWindow", "&Manager Window", Q_NULLPTR));
        actionRun->setText(QApplication::translate("MainWindow", "Play selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRun->setToolTip(QApplication::translate("MainWindow", "Run selected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("MainWindow", "Stop selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("MainWindow", "Stop selected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect->setText(QApplication::translate("MainWindow", "Connect selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect selected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect selected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionKill->setText(QApplication::translate("MainWindow", "Kill selected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionKill->setToolTip(QApplication::translate("MainWindow", "Kill selected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionYarpClean->setText(QApplication::translate("MainWindow", "YarpClean", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionYarpClean->setToolTip(QApplication::translate("MainWindow", "Run yarp clean", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionYarpNameList->setText(QApplication::translate("MainWindow", "YarpNameList", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionYarpNameList->setToolTip(QApplication::translate("MainWindow", "Run yarp name list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAuto_reload->setText(QApplication::translate("MainWindow", "Auto-reload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAuto_reload->setToolTip(QApplication::translate("MainWindow", "Enable  the automatic reload of the applications", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidgetLeft->setTabText(tabWidgetLeft->indexOf(tab_2), QApplication::translate("MainWindow", "Cluster", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = entitiesTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Entities", Q_NULLPTR));
        tabWidgetLeft->setTabText(tabWidgetLeft->indexOf(tab), QApplication::translate("MainWindow", "Entities", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabMessages), QApplication::translate("MainWindow", "Messages", Q_NULLPTR));
        notesWidget->setPlainText(QApplication::translate("MainWindow", "<< Yellow Notes >>\n"
"", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabNotes), QApplication::translate("MainWindow", "Notes", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuManage->setTitle(QApplication::translate("MainWindow", "Manage", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", Q_NULLPTR));
        applicationActionToolBar->setWindowTitle(QApplication::translate("MainWindow", "Application Action Toolbar", Q_NULLPTR));
        selectionActionToolBar->setWindowTitle(QApplication::translate("MainWindow", "Selection Action Toolbar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
