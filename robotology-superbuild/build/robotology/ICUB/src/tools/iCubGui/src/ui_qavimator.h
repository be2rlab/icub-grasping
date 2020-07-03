/********************************************************************************
** Form generated from reading UI file 'qavimator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QAVIMATOR_H
#define UI_QAVIMATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "animationview.h"

QT_BEGIN_NAMESPACE

class Ui_qavimator
{
public:
    QAction *fileExitAction;
    QAction *optionsConfigureiCubGUIAction;
    QAction *helpAboutAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    AnimationView *animationView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *qavimator)
    {
        if (qavimator->objectName().isEmpty())
            qavimator->setObjectName(QStringLiteral("qavimator"));
        qavimator->resize(640, 480);
        fileExitAction = new QAction(qavimator);
        fileExitAction->setObjectName(QStringLiteral("fileExitAction"));
        optionsConfigureiCubGUIAction = new QAction(qavimator);
        optionsConfigureiCubGUIAction->setObjectName(QStringLiteral("optionsConfigureiCubGUIAction"));
        helpAboutAction = new QAction(qavimator);
        helpAboutAction->setObjectName(QStringLiteral("helpAboutAction"));
        centralwidget = new QWidget(qavimator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        animationView = new AnimationView(centralwidget);
        animationView->setObjectName(QStringLiteral("animationView"));

        verticalLayout->addWidget(animationView);

        qavimator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qavimator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        qavimator->setMenuBar(menubar);
        toolBar = new QToolBar(qavimator);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        qavimator->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(fileExitAction);
        menuOptions->addAction(optionsConfigureiCubGUIAction);
        menuHelp->addAction(helpAboutAction);

        retranslateUi(qavimator);

        QMetaObject::connectSlotsByName(qavimator);
    } // setupUi

    void retranslateUi(QMainWindow *qavimator)
    {
        qavimator->setWindowTitle(QApplication::translate("qavimator", "MainWindow", Q_NULLPTR));
        fileExitAction->setText(QApplication::translate("qavimator", "Exit", Q_NULLPTR));
        optionsConfigureiCubGUIAction->setText(QApplication::translate("qavimator", "Configure iCubGui...", Q_NULLPTR));
        helpAboutAction->setText(QApplication::translate("qavimator", "About", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("qavimator", "File", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("qavimator", "Options", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("qavimator", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("qavimator", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qavimator: public Ui_qavimator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAVIMATOR_H
