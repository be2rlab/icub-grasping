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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "messageWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_QtYarpLogger;
    QAction *actionShow_YarprunTimestamps;
    QAction *actionSave_Log;
    QAction *actionLoad_Log;
    QAction *actionStart_Logger;
    QAction *actionAbout_QtYarpLogger_2;
    QAction *actionStop_Logger;
    QAction *actionShow_Error_Level;
    QAction *actionShow_Colors;
    QAction *actionShow_Grid;
    QAction *actionAdvanced;
    QAction *actionShow_Mute_Ports;
    QAction *actionRefresh;
    QAction *actionClear;
    QAction *actionShow_LocalTimestamps;
    QAction *actionClear_current_log;
    QAction *actionExport_current_log_to_text_file;
    QAction *actionDisable_current_log;
    QAction *actionReset_current_log_error_warning_counters;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QFrame *left_frame;
    QVBoxLayout *verticalLayout;
    QTreeView *yarprunTreeView;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    MessageWidget *system_message;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QFrame *right_frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QPushButton *DisplayUnformattedEnable;
    QPushButton *DisplayWarningEnable;
    QPushButton *DisplayInfoEnable;
    QPushButton *DisplayDebugEnable;
    QPushButton *DisplayErrorEnable;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *DisplayTraceEnable;
    QTabWidget *logtabs;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuLog;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1072, 531);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout_QtYarpLogger = new QAction(MainWindow);
        actionAbout_QtYarpLogger->setObjectName(QStringLiteral("actionAbout_QtYarpLogger"));
        actionShow_YarprunTimestamps = new QAction(MainWindow);
        actionShow_YarprunTimestamps->setObjectName(QStringLiteral("actionShow_YarprunTimestamps"));
        actionShow_YarprunTimestamps->setCheckable(true);
        actionShow_YarprunTimestamps->setChecked(true);
        actionSave_Log = new QAction(MainWindow);
        actionSave_Log->setObjectName(QStringLiteral("actionSave_Log"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Log->setIcon(icon1);
        actionLoad_Log = new QAction(MainWindow);
        actionLoad_Log->setObjectName(QStringLiteral("actionLoad_Log"));
        actionStart_Logger = new QAction(MainWindow);
        actionStart_Logger->setObjectName(QStringLiteral("actionStart_Logger"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Logger->setIcon(icon2);
        actionAbout_QtYarpLogger_2 = new QAction(MainWindow);
        actionAbout_QtYarpLogger_2->setObjectName(QStringLiteral("actionAbout_QtYarpLogger_2"));
        actionStop_Logger = new QAction(MainWindow);
        actionStop_Logger->setObjectName(QStringLiteral("actionStop_Logger"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop_Logger->setIcon(icon3);
        actionShow_Error_Level = new QAction(MainWindow);
        actionShow_Error_Level->setObjectName(QStringLiteral("actionShow_Error_Level"));
        actionShow_Error_Level->setCheckable(true);
        actionShow_Error_Level->setChecked(true);
        actionShow_Colors = new QAction(MainWindow);
        actionShow_Colors->setObjectName(QStringLiteral("actionShow_Colors"));
        actionShow_Colors->setCheckable(true);
        actionShow_Colors->setChecked(true);
        actionShow_Grid = new QAction(MainWindow);
        actionShow_Grid->setObjectName(QStringLiteral("actionShow_Grid"));
        actionShow_Grid->setCheckable(true);
        actionShow_Grid->setChecked(true);
        actionAdvanced = new QAction(MainWindow);
        actionAdvanced->setObjectName(QStringLiteral("actionAdvanced"));
        actionShow_Mute_Ports = new QAction(MainWindow);
        actionShow_Mute_Ports->setObjectName(QStringLiteral("actionShow_Mute_Ports"));
        actionShow_Mute_Ports->setCheckable(true);
        actionShow_Mute_Ports->setChecked(true);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/progress.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon4);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionShow_LocalTimestamps = new QAction(MainWindow);
        actionShow_LocalTimestamps->setObjectName(QStringLiteral("actionShow_LocalTimestamps"));
        actionShow_LocalTimestamps->setCheckable(true);
        actionShow_LocalTimestamps->setChecked(true);
        actionClear_current_log = new QAction(MainWindow);
        actionClear_current_log->setObjectName(QStringLiteral("actionClear_current_log"));
        actionExport_current_log_to_text_file = new QAction(MainWindow);
        actionExport_current_log_to_text_file->setObjectName(QStringLiteral("actionExport_current_log_to_text_file"));
        actionDisable_current_log = new QAction(MainWindow);
        actionDisable_current_log->setObjectName(QStringLiteral("actionDisable_current_log"));
        actionReset_current_log_error_warning_counters = new QAction(MainWindow);
        actionReset_current_log_error_warning_counters->setObjectName(QStringLiteral("actionReset_current_log_error_warning_counters"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setMidLineWidth(0);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(7);
        left_frame = new QFrame(splitter);
        left_frame->setObjectName(QStringLiteral("left_frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(left_frame->sizePolicy().hasHeightForWidth());
        left_frame->setSizePolicy(sizePolicy2);
        left_frame->setMinimumSize(QSize(500, 0));
        left_frame->setFrameShape(QFrame::Panel);
        left_frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(left_frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        yarprunTreeView = new QTreeView(left_frame);
        yarprunTreeView->setObjectName(QStringLiteral("yarprunTreeView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(yarprunTreeView->sizePolicy().hasHeightForWidth());
        yarprunTreeView->setSizePolicy(sizePolicy3);
        yarprunTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        yarprunTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        yarprunTreeView->setRootIsDecorated(false);
        yarprunTreeView->setSortingEnabled(true);
        yarprunTreeView->header()->setVisible(true);

        verticalLayout->addWidget(yarprunTreeView);

        frame_2 = new QFrame(left_frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
        frame_2->setMinimumSize(QSize(0, 150));
        frame_2->setBaseSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(frame_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        system_message = new MessageWidget(tab);
        system_message->setObjectName(QStringLiteral("system_message"));
        system_message->setFrameShape(QFrame::StyledPanel);
        system_message->setFrameShadow(QFrame::Plain);

        verticalLayout_5->addWidget(system_message);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        plainTextEdit_2 = new QPlainTextEdit(tab_2);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setFrameShadow(QFrame::Plain);

        verticalLayout_6->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(plainTextEdit);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout->addWidget(frame_2);

        splitter->addWidget(left_frame);
        right_frame = new QFrame(splitter);
        right_frame->setObjectName(QStringLiteral("right_frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(3);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(right_frame->sizePolicy().hasHeightForWidth());
        right_frame->setSizePolicy(sizePolicy5);
        right_frame->setMinimumSize(QSize(550, 0));
        right_frame->setFrameShape(QFrame::Panel);
        right_frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(right_frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(right_frame);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 60));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        DisplayUnformattedEnable = new QPushButton(frame);
        DisplayUnformattedEnable->setObjectName(QStringLiteral("DisplayUnformattedEnable"));
        DisplayUnformattedEnable->setGeometry(QRect(470, 10, 41, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/all_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/images/all.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayUnformattedEnable->setIcon(icon5);
        DisplayUnformattedEnable->setIconSize(QSize(32, 32));
        DisplayUnformattedEnable->setCheckable(true);
        DisplayUnformattedEnable->setChecked(true);
        DisplayUnformattedEnable->setAutoDefault(false);
        DisplayUnformattedEnable->setFlat(false);
        DisplayWarningEnable = new QPushButton(frame);
        DisplayWarningEnable->setObjectName(QStringLiteral("DisplayWarningEnable"));
        DisplayWarningEnable->setGeometry(QRect(270, 10, 41, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/warning_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/images/warning.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayWarningEnable->setIcon(icon6);
        DisplayWarningEnable->setIconSize(QSize(32, 32));
        DisplayWarningEnable->setCheckable(true);
        DisplayWarningEnable->setChecked(true);
        DisplayWarningEnable->setAutoDefault(false);
        DisplayWarningEnable->setFlat(false);
        DisplayInfoEnable = new QPushButton(frame);
        DisplayInfoEnable->setObjectName(QStringLiteral("DisplayInfoEnable"));
        DisplayInfoEnable->setGeometry(QRect(320, 10, 41, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/info_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/images/info.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayInfoEnable->setIcon(icon7);
        DisplayInfoEnable->setIconSize(QSize(32, 32));
        DisplayInfoEnable->setCheckable(true);
        DisplayInfoEnable->setChecked(true);
        DisplayInfoEnable->setAutoDefault(false);
        DisplayInfoEnable->setFlat(false);
        DisplayDebugEnable = new QPushButton(frame);
        DisplayDebugEnable->setObjectName(QStringLiteral("DisplayDebugEnable"));
        DisplayDebugEnable->setGeometry(QRect(370, 10, 41, 41));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/debug_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/images/debug.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayDebugEnable->setIcon(icon8);
        DisplayDebugEnable->setIconSize(QSize(32, 32));
        DisplayDebugEnable->setCheckable(true);
        DisplayDebugEnable->setChecked(true);
        DisplayDebugEnable->setAutoDefault(false);
        DisplayDebugEnable->setFlat(false);
        DisplayErrorEnable = new QPushButton(frame);
        DisplayErrorEnable->setObjectName(QStringLiteral("DisplayErrorEnable"));
        DisplayErrorEnable->setGeometry(QRect(220, 10, 41, 41));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/error_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral(":/images/error.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayErrorEnable->setIcon(icon9);
        DisplayErrorEnable->setIconSize(QSize(32, 32));
        DisplayErrorEnable->setCheckable(true);
        DisplayErrorEnable->setChecked(true);
        DisplayErrorEnable->setAutoDefault(false);
        DisplayErrorEnable->setFlat(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 51, 16));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 20, 191, 23));
        DisplayTraceEnable = new QPushButton(frame);
        DisplayTraceEnable->setObjectName(QStringLiteral("DisplayTraceEnable"));
        DisplayTraceEnable->setGeometry(QRect(420, 10, 41, 41));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/trace_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral(":/images/trace.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayTraceEnable->setIcon(icon10);
        DisplayTraceEnable->setIconSize(QSize(32, 32));
        DisplayTraceEnable->setCheckable(true);
        DisplayTraceEnable->setChecked(true);
        DisplayTraceEnable->setAutoDefault(false);
        DisplayTraceEnable->setFlat(false);

        verticalLayout_3->addWidget(frame);

        logtabs = new QTabWidget(right_frame);
        logtabs->setObjectName(QStringLiteral("logtabs"));
        logtabs->setTabsClosable(true);

        verticalLayout_3->addWidget(logtabs);

        splitter->addWidget(right_frame);

        verticalLayout_4->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1072, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLog = new QMenu(menuBar);
        menuLog->setObjectName(QStringLiteral("menuLog"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLog->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionStart_Logger);
        menuFile->addAction(actionStop_Logger);
        menuFile->addAction(actionRefresh);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_Log);
        menuFile->addAction(actionLoad_Log);
        menuFile->addSeparator();
        menuFile->addAction(actionClear);
        menuOptions->addAction(actionShow_YarprunTimestamps);
        menuOptions->addAction(actionShow_LocalTimestamps);
        menuOptions->addAction(actionShow_Error_Level);
        menuOptions->addAction(actionShow_Colors);
        menuOptions->addAction(actionShow_Grid);
        menuOptions->addAction(actionShow_Mute_Ports);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAdvanced);
        menuHelp->addAction(actionAbout_QtYarpLogger);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_QtYarpLogger_2);
        menuLog->addAction(actionClear_current_log);
        menuLog->addAction(actionExport_current_log_to_text_file);
        menuLog->addAction(actionDisable_current_log);
        menuLog->addAction(actionReset_current_log_error_warning_counters);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStart_Logger);
        mainToolBar->addAction(actionStop_Logger);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave_Log);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        DisplayUnformattedEnable->setDefault(false);
        DisplayWarningEnable->setDefault(false);
        DisplayInfoEnable->setDefault(false);
        DisplayDebugEnable->setDefault(false);
        DisplayErrorEnable->setDefault(false);
        DisplayTraceEnable->setDefault(false);
        logtabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QtYarprun Logger", Q_NULLPTR));
        actionAbout_QtYarpLogger->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionShow_YarprunTimestamps->setText(QApplication::translate("MainWindow", "Show Yarprun Timestamps", Q_NULLPTR));
        actionSave_Log->setText(QApplication::translate("MainWindow", "Save Log Session", Q_NULLPTR));
        actionLoad_Log->setText(QApplication::translate("MainWindow", "Load Log Session", Q_NULLPTR));
        actionStart_Logger->setText(QApplication::translate("MainWindow", "Start Logger", Q_NULLPTR));
        actionAbout_QtYarpLogger_2->setText(QApplication::translate("MainWindow", "about QtYarpLogger", Q_NULLPTR));
        actionStop_Logger->setText(QApplication::translate("MainWindow", "Stop Logger", Q_NULLPTR));
        actionShow_Error_Level->setText(QApplication::translate("MainWindow", "Show Error Level", Q_NULLPTR));
        actionShow_Colors->setText(QApplication::translate("MainWindow", "Show Colors", Q_NULLPTR));
        actionShow_Grid->setText(QApplication::translate("MainWindow", "Show Grid", Q_NULLPTR));
        actionAdvanced->setText(QApplication::translate("MainWindow", "Advanced...", Q_NULLPTR));
        actionShow_Mute_Ports->setText(QApplication::translate("MainWindow", "Show Mute Ports", Q_NULLPTR));
        actionRefresh->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        actionClear->setText(QApplication::translate("MainWindow", "Clear Session", Q_NULLPTR));
        actionShow_LocalTimestamps->setText(QApplication::translate("MainWindow", "Show Local Timestamps", Q_NULLPTR));
        actionClear_current_log->setText(QApplication::translate("MainWindow", "Clear current log", Q_NULLPTR));
        actionExport_current_log_to_text_file->setText(QApplication::translate("MainWindow", "Export current log to text file", Q_NULLPTR));
        actionDisable_current_log->setText(QApplication::translate("MainWindow", "Enable/Disable current log", Q_NULLPTR));
        actionReset_current_log_error_warning_counters->setText(QApplication::translate("MainWindow", "Reset error/warning counters", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "System Messages", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Log Statistics", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Notes", Q_NULLPTR));
        DisplayUnformattedEnable->setText(QString());
        DisplayWarningEnable->setText(QString());
        DisplayInfoEnable->setText(QString());
        DisplayDebugEnable->setText(QString());
        DisplayErrorEnable->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Filter:", Q_NULLPTR));
        DisplayTraceEnable->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuLog->setTitle(QApplication::translate("MainWindow", "Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
