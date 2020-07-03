/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "QGraphicsViewEc.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_project;
    QAction *actionQuit;
    QAction *actionDocumentaion;
    QAction *actionAbout;
    QAction *action_Save_project;
    QAction *actionProfile_YARP_network;
    QAction *actionOrthogonal;
    QAction *actionPolyline;
    QAction *actionCurved;
    QAction *actionSubgraph;
    QAction *actionMessageBox;
    QAction *actionItemswindow;
    QAction *actionExport_scene;
    QAction *actionHighlight_Loops;
    QAction *actionLine;
    QAction *actionHidePorts;
    QAction *actionHideConnectionsLable;
    QAction *actionUpdateConnectionQosStatus;
    QAction *actionProfilePortsRate;
    QAction *actionExport_connections_list;
    QAction *actionConfigure_connections_QOS;
    QAction *actionHideDisconnectedPorts;
    QAction *actionDebugMode;
    QAction *actionColorMode;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *hsplitter_1;
    QSplitter *vsplitter_1;
    QGraphicsViewEc *graphicsView;
    QListView *messageView;
    QTreeWidget *nodesTreeWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuProfiling;
    QMenu *menuView;
    QMenu *menuLayout;
    QMenu *menuView_2;
    QMenu *menu_Tools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(817, 567);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/resources/profiling.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Load_project = new QAction(MainWindow);
        action_Load_project->setObjectName(QStringLiteral("action_Load_project"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionDocumentaion = new QAction(MainWindow);
        actionDocumentaion->setObjectName(QStringLiteral("actionDocumentaion"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action_Save_project = new QAction(MainWindow);
        action_Save_project->setObjectName(QStringLiteral("action_Save_project"));
        actionProfile_YARP_network = new QAction(MainWindow);
        actionProfile_YARP_network->setObjectName(QStringLiteral("actionProfile_YARP_network"));
        actionProfile_YARP_network->setIcon(icon);
        actionOrthogonal = new QAction(MainWindow);
        actionOrthogonal->setObjectName(QStringLiteral("actionOrthogonal"));
        actionOrthogonal->setCheckable(true);
        actionPolyline = new QAction(MainWindow);
        actionPolyline->setObjectName(QStringLiteral("actionPolyline"));
        actionPolyline->setCheckable(true);
        actionCurved = new QAction(MainWindow);
        actionCurved->setObjectName(QStringLiteral("actionCurved"));
        actionCurved->setCheckable(true);
        actionSubgraph = new QAction(MainWindow);
        actionSubgraph->setObjectName(QStringLiteral("actionSubgraph"));
        actionSubgraph->setCheckable(true);
        actionMessageBox = new QAction(MainWindow);
        actionMessageBox->setObjectName(QStringLiteral("actionMessageBox"));
        actionMessageBox->setCheckable(true);
        actionItemswindow = new QAction(MainWindow);
        actionItemswindow->setObjectName(QStringLiteral("actionItemswindow"));
        actionItemswindow->setCheckable(true);
        actionExport_scene = new QAction(MainWindow);
        actionExport_scene->setObjectName(QStringLiteral("actionExport_scene"));
        actionHighlight_Loops = new QAction(MainWindow);
        actionHighlight_Loops->setObjectName(QStringLiteral("actionHighlight_Loops"));
        actionHighlight_Loops->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/resources/chain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHighlight_Loops->setIcon(icon1);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        actionLine->setCheckable(true);
        actionHidePorts = new QAction(MainWindow);
        actionHidePorts->setObjectName(QStringLiteral("actionHidePorts"));
        actionHidePorts->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/resources/port_hide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHidePorts->setIcon(icon2);
        actionHideConnectionsLable = new QAction(MainWindow);
        actionHideConnectionsLable->setObjectName(QStringLiteral("actionHideConnectionsLable"));
        actionHideConnectionsLable->setCheckable(true);
        actionUpdateConnectionQosStatus = new QAction(MainWindow);
        actionUpdateConnectionQosStatus->setObjectName(QStringLiteral("actionUpdateConnectionQosStatus"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/resources/qos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdateConnectionQosStatus->setIcon(icon3);
        actionProfilePortsRate = new QAction(MainWindow);
        actionProfilePortsRate->setObjectName(QStringLiteral("actionProfilePortsRate"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/resources/profile_rate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProfilePortsRate->setIcon(icon4);
        actionExport_connections_list = new QAction(MainWindow);
        actionExport_connections_list->setObjectName(QStringLiteral("actionExport_connections_list"));
        actionConfigure_connections_QOS = new QAction(MainWindow);
        actionConfigure_connections_QOS->setObjectName(QStringLiteral("actionConfigure_connections_QOS"));
        actionHideDisconnectedPorts = new QAction(MainWindow);
        actionHideDisconnectedPorts->setObjectName(QStringLiteral("actionHideDisconnectedPorts"));
        actionHideDisconnectedPorts->setCheckable(true);
        actionDebugMode = new QAction(MainWindow);
        actionDebugMode->setObjectName(QStringLiteral("actionDebugMode"));
        actionDebugMode->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/resources/debugMode.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebugMode->setIcon(icon5);
        actionColorMode = new QAction(MainWindow);
        actionColorMode->setObjectName(QStringLiteral("actionColorMode"));
        actionColorMode->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/resources/atooma.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionColorMode->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hsplitter_1 = new QSplitter(centralWidget);
        hsplitter_1->setObjectName(QStringLiteral("hsplitter_1"));
        hsplitter_1->setOrientation(Qt::Horizontal);
        vsplitter_1 = new QSplitter(hsplitter_1);
        vsplitter_1->setObjectName(QStringLiteral("vsplitter_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vsplitter_1->sizePolicy().hasHeightForWidth());
        vsplitter_1->setSizePolicy(sizePolicy);
        vsplitter_1->setOrientation(Qt::Vertical);
        graphicsView = new QGraphicsViewEc(vsplitter_1);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(15);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
        vsplitter_1->addWidget(graphicsView);
        messageView = new QListView(vsplitter_1);
        messageView->setObjectName(QStringLiteral("messageView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(messageView->sizePolicy().hasHeightForWidth());
        messageView->setSizePolicy(sizePolicy2);
        messageView->setMaximumSize(QSize(16777215, 16777215));
        messageView->setBaseSize(QSize(0, 0));
        vsplitter_1->addWidget(messageView);
        hsplitter_1->addWidget(vsplitter_1);
        nodesTreeWidget = new QTreeWidget(hsplitter_1);
        nodesTreeWidget->setObjectName(QStringLiteral("nodesTreeWidget"));
        nodesTreeWidget->setUniformRowHeights(true);
        nodesTreeWidget->setSortingEnabled(true);
        nodesTreeWidget->setAnimated(true);
        nodesTreeWidget->setColumnCount(1);
        hsplitter_1->addWidget(nodesTreeWidget);

        gridLayout->addWidget(hsplitter_1, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 817, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuProfiling = new QMenu(menuBar);
        menuProfiling->setObjectName(QStringLiteral("menuProfiling"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuLayout = new QMenu(menuView);
        menuLayout->setObjectName(QStringLiteral("menuLayout"));
        menuView_2 = new QMenu(menuBar);
        menuView_2->setObjectName(QStringLiteral("menuView_2"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuProfiling->menuAction());
        menuBar->addAction(menuView_2->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(action_Load_project);
        menuFile->addAction(action_Save_project);
        menuFile->addSeparator();
        menuFile->addAction(actionExport_scene);
        menuFile->addAction(actionExport_connections_list);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionDocumentaion);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuProfiling->addAction(actionProfile_YARP_network);
        menuProfiling->addAction(actionHighlight_Loops);
        menuProfiling->addAction(actionUpdateConnectionQosStatus);
        menuProfiling->addAction(actionProfilePortsRate);
        menuView->addSeparator();
        menuView->addAction(menuLayout->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionHidePorts);
        menuView->addAction(actionHideConnectionsLable);
        menuView->addAction(actionHideDisconnectedPorts);
        menuView->addAction(actionColorMode);
        menuView->addAction(actionDebugMode);
        menuLayout->addAction(actionOrthogonal);
        menuLayout->addAction(actionPolyline);
        menuLayout->addAction(actionCurved);
        menuLayout->addAction(actionLine);
        menuLayout->addSeparator();
        menuLayout->addAction(actionSubgraph);
        menuView_2->addAction(actionMessageBox);
        menuView_2->addAction(actionItemswindow);
        menu_Tools->addAction(actionConfigure_connections_QOS);
        mainToolBar->addAction(actionProfile_YARP_network);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionColorMode);
        mainToolBar->addAction(actionDebugMode);
        mainToolBar->addAction(actionHidePorts);
        mainToolBar->addAction(actionHighlight_Loops);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "yarpviz", Q_NULLPTR));
        action_Load_project->setText(QApplication::translate("MainWindow", "&Load project...", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        actionDocumentaion->setText(QApplication::translate("MainWindow", "Documentation...", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        action_Save_project->setText(QApplication::translate("MainWindow", "&Save project", Q_NULLPTR));
        actionProfile_YARP_network->setText(QApplication::translate("MainWindow", "&Profile YARP network...", Q_NULLPTR));
        actionOrthogonal->setText(QApplication::translate("MainWindow", "Orthogonal", Q_NULLPTR));
        actionPolyline->setText(QApplication::translate("MainWindow", "Polyline", Q_NULLPTR));
        actionCurved->setText(QApplication::translate("MainWindow", "Curved", Q_NULLPTR));
        actionSubgraph->setText(QApplication::translate("MainWindow", "Subgraph", Q_NULLPTR));
        actionMessageBox->setText(QApplication::translate("MainWindow", "&Message box", Q_NULLPTR));
        actionItemswindow->setText(QApplication::translate("MainWindow", "Items window", Q_NULLPTR));
        actionExport_scene->setText(QApplication::translate("MainWindow", "Export scene...", Q_NULLPTR));
        actionHighlight_Loops->setText(QApplication::translate("MainWindow", "Highlight strongly connected Modules", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionHighlight_Loops->setToolTip(QApplication::translate("MainWindow", "Highlight Strongly connected modules", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        actionHidePorts->setText(QApplication::translate("MainWindow", "Hide Ports", Q_NULLPTR));
        actionHideConnectionsLable->setText(QApplication::translate("MainWindow", "Hide Connections Label", Q_NULLPTR));
        actionUpdateConnectionQosStatus->setText(QApplication::translate("MainWindow", "Update connection &Qos status...", Q_NULLPTR));
        actionProfilePortsRate->setText(QApplication::translate("MainWindow", "Profile ports rate...", Q_NULLPTR));
        actionExport_connections_list->setText(QApplication::translate("MainWindow", "Export &connections list...", Q_NULLPTR));
        actionConfigure_connections_QOS->setText(QApplication::translate("MainWindow", "&Configure connections QOS...", Q_NULLPTR));
        actionHideDisconnectedPorts->setText(QApplication::translate("MainWindow", "Hide Disconnected Ports", Q_NULLPTR));
        actionDebugMode->setText(QApplication::translate("MainWindow", "DebugMode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDebugMode->setToolTip(QApplication::translate("MainWindow", "Check it to show yarplogger and \"/log\" ports", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionColorMode->setText(QApplication::translate("MainWindow", "ColorMode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionColorMode->setToolTip(QApplication::translate("MainWindow", "Enable the Color Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = nodesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Items", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuProfiling->setTitle(QApplication::translate("MainWindow", "Profile", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "View", Q_NULLPTR));
        menuLayout->setTitle(QApplication::translate("MainWindow", "Layout", Q_NULLPTR));
        menuView_2->setTitle(QApplication::translate("MainWindow", "Window", Q_NULLPTR));
        menu_Tools->setTitle(QApplication::translate("MainWindow", "&Tools", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
