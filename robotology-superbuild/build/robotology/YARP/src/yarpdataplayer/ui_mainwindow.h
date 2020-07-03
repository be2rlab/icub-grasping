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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Directory;
    QAction *actionQuit;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionForward;
    QAction *actionRewind;
    QAction *actionIncrease;
    QAction *actionDecrease;
    QAction *actionNormal_1x;
    QAction *actionRepeat;
    QAction *actionStrict;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *mainWidget;
    QSlider *playSlider;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *rewButton;
    QToolButton *playButton;
    QToolButton *stopButton;
    QToolButton *ffwButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *speedLbl;
    QSlider *horizontalSlider;
    QLabel *speedValueLbl;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAction;
    QMenu *menuOption;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 300);
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName(QStringLiteral("actionOpen_Directory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/folder-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Directory->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        actionPlay->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon2);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionStop->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QStringLiteral("actionForward"));
        actionForward->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/forward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon5);
        actionRewind = new QAction(MainWindow);
        actionRewind->setObjectName(QStringLiteral("actionRewind"));
        actionRewind->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/backward.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRewind->setIcon(icon6);
        actionIncrease = new QAction(MainWindow);
        actionIncrease->setObjectName(QStringLiteral("actionIncrease"));
        actionIncrease->setEnabled(false);
        actionDecrease = new QAction(MainWindow);
        actionDecrease->setObjectName(QStringLiteral("actionDecrease"));
        actionDecrease->setEnabled(false);
        actionNormal_1x = new QAction(MainWindow);
        actionNormal_1x->setObjectName(QStringLiteral("actionNormal_1x"));
        actionNormal_1x->setEnabled(false);
        actionRepeat = new QAction(MainWindow);
        actionRepeat->setObjectName(QStringLiteral("actionRepeat"));
        actionRepeat->setCheckable(true);
        actionRepeat->setEnabled(false);
        actionStrict = new QAction(MainWindow);
        actionStrict->setObjectName(QStringLiteral("actionStrict"));
        actionStrict->setCheckable(true);
        actionStrict->setEnabled(false);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        mainWidget = new QTreeWidget(centralWidget);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setFrameShape(QFrame::NoFrame);
        mainWidget->header()->setDefaultSectionSize(80);

        verticalLayout->addWidget(mainWidget);

        playSlider = new QSlider(centralWidget);
        playSlider->setObjectName(QStringLiteral("playSlider"));
        playSlider->setEnabled(false);
        playSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
"     border: 1px solid #999999;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
"QSlider::groove:horizontal:disabled {\n"
"     border: 1px solid #c8c8c8;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f0f0f0, stop:1 #dcdcdc);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal:enabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }\n"
"\n"
""
                        "\n"
" QSlider::handle:horizontal:disabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e6e6e6, stop:1 #c8c8c8);\n"
"     border: 1px solid #c8c8c8;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        playSlider->setMaximum(100);
        playSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(playSlider);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 5, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rewButton = new QToolButton(widget);
        rewButton->setObjectName(QStringLiteral("rewButton"));
        rewButton->setEnabled(false);
        rewButton->setMinimumSize(QSize(30, 30));
        rewButton->setMaximumSize(QSize(30, 30));
        rewButton->setStyleSheet(QLatin1String("QToolButton {border: none; background-color:none;}\n"
"QToolButton:hover {border: 3px solid transparent;}\n"
"QToolButton:pressed {border: 4px solid transparent;}"));
        rewButton->setIcon(icon6);
        rewButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(rewButton);

        playButton = new QToolButton(widget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setEnabled(false);
        playButton->setMinimumSize(QSize(30, 30));
        playButton->setMaximumSize(QSize(30, 30));
        playButton->setStyleSheet(QLatin1String("QToolButton {border: none; background-color:none;}\n"
"QToolButton:hover {border: 3px solid transparent;}\n"
"QToolButton:pressed {border: 4px solid transparent;}"));
        playButton->setIcon(icon2);
        playButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(playButton);

        stopButton = new QToolButton(widget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setMinimumSize(QSize(30, 30));
        stopButton->setMaximumSize(QSize(30, 30));
        stopButton->setStyleSheet(QLatin1String("QToolButton {border: none; background-color:none;}\n"
"QToolButton:hover {border: 3px solid transparent;}\n"
"QToolButton:pressed {border: 4px solid transparent;}"));
        stopButton->setIcon(icon4);
        stopButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(stopButton);

        ffwButton = new QToolButton(widget);
        ffwButton->setObjectName(QStringLiteral("ffwButton"));
        ffwButton->setEnabled(false);
        ffwButton->setMinimumSize(QSize(30, 30));
        ffwButton->setMaximumSize(QSize(30, 30));
        ffwButton->setStyleSheet(QLatin1String("QToolButton {border: none; background-color:none;}\n"
"QToolButton:hover {border: 3px solid transparent;}\n"
"QToolButton:pressed {border: 4px solid transparent;}"));
        ffwButton->setIcon(icon5);
        ffwButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(ffwButton);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        speedLbl = new QLabel(widget);
        speedLbl->setObjectName(QStringLiteral("speedLbl"));

        horizontalLayout_2->addWidget(speedLbl);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
"     border: 1px solid #999999;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
"QSlider::groove:horizontal:disabled {\n"
"     border: 1px solid #c8c8c8;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f0f0f0, stop:1 #dcdcdc);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal:enabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }\n"
"\n"
""
                        "\n"
" QSlider::handle:horizontal:disabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e6e6e6, stop:1 #c8c8c8);\n"
"     border: 1px solid #c8c8c8;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(20);
        horizontalSlider->setValue(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);

        horizontalLayout_2->addWidget(horizontalSlider);

        speedValueLbl = new QLabel(widget);
        speedValueLbl->setObjectName(QStringLiteral("speedValueLbl"));

        horizontalLayout_2->addWidget(speedValueLbl);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAction = new QMenu(menuBar);
        menuAction->setObjectName(QStringLiteral("menuAction"));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QStringLiteral("menuOption"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("border: none;"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAction->menuAction());
        menuBar->addAction(menuOption->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_Directory);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuAction->addAction(actionPlay);
        menuAction->addAction(actionPause);
        menuAction->addAction(actionStop);
        menuAction->addAction(actionForward);
        menuAction->addAction(actionRewind);
        menuOption->addAction(actionIncrease);
        menuOption->addAction(actionDecrease);
        menuOption->addAction(actionNormal_1x);
        menuOption->addSeparator();
        menuOption->addAction(actionRepeat);
        menuOption->addAction(actionStrict);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_Directory->setText(QApplication::translate("MainWindow", "Open Directory", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen_Directory->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        actionForward->setText(QApplication::translate("MainWindow", "Forward", Q_NULLPTR));
        actionRewind->setText(QApplication::translate("MainWindow", "Rewind", Q_NULLPTR));
        actionIncrease->setText(QApplication::translate("MainWindow", "Increase ++", Q_NULLPTR));
        actionDecrease->setText(QApplication::translate("MainWindow", "Decrease --", Q_NULLPTR));
        actionNormal_1x->setText(QApplication::translate("MainWindow", "Normal 1x", Q_NULLPTR));
        actionRepeat->setText(QApplication::translate("MainWindow", "Repeat", Q_NULLPTR));
        actionStrict->setText(QApplication::translate("MainWindow", "Strict", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mainWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("MainWindow", "Status", Q_NULLPTR));
        ___qtreewidgetitem->setText(6, QApplication::translate("MainWindow", "Time Taken", Q_NULLPTR));
        ___qtreewidgetitem->setText(5, QApplication::translate("MainWindow", "Port Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "Sample Rate", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "Frames", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Part", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Active", Q_NULLPTR));
        rewButton->setText(QString());
        playButton->setText(QString());
        stopButton->setText(QString());
        ffwButton->setText(QString());
        speedLbl->setText(QApplication::translate("MainWindow", "Speed:", Q_NULLPTR));
        speedValueLbl->setText(QApplication::translate("MainWindow", "1X", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuAction->setTitle(QApplication::translate("MainWindow", "Action", Q_NULLPTR));
        menuOption->setTitle(QApplication::translate("MainWindow", "Option", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
