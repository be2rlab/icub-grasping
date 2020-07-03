/********************************************************************************
** Form generated from reading UI file 'applicationviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONVIEWWIDGET_H
#define UI_APPLICATIONVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "customtreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ApplicationViewWidget
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *mainSplietter;
    QWidget *topWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    CustomTreeWidget *moduleList;
    QWidget *builderContainer;
    QWidget *bottomWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    CustomTreeWidget *connectionList;
    CustomTreeWidget *resourcesList;

    void setupUi(QWidget *ApplicationViewWidget)
    {
        if (ApplicationViewWidget->objectName().isEmpty())
            ApplicationViewWidget->setObjectName(QStringLiteral("ApplicationViewWidget"));
        ApplicationViewWidget->resize(871, 464);
        gridLayout_3 = new QGridLayout(ApplicationViewWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mainSplietter = new QSplitter(ApplicationViewWidget);
        mainSplietter->setObjectName(QStringLiteral("mainSplietter"));
        mainSplietter->setOrientation(Qt::Vertical);
        topWidget = new QWidget(mainSplietter);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        gridLayout = new QGridLayout(topWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(topWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        moduleList = new CustomTreeWidget(splitter);
        moduleList->setObjectName(QStringLiteral("moduleList"));
        moduleList->setStyleSheet(QLatin1String("/*alternate-background-color: rgb(200, 200, 200);\n"
"background-color: rgb(255, 255, 255);*/\n"
""));
        moduleList->setRootIsDecorated(false);
        splitter->addWidget(moduleList);
        moduleList->header()->setDefaultSectionSize(80);
        builderContainer = new QWidget(splitter);
        builderContainer->setObjectName(QStringLiteral("builderContainer"));
        splitter->addWidget(builderContainer);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        mainSplietter->addWidget(topWidget);
        bottomWidget = new QWidget(mainSplietter);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        gridLayout_2 = new QGridLayout(bottomWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(bottomWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        connectionList = new CustomTreeWidget(splitter_2);
        connectionList->setObjectName(QStringLiteral("connectionList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connectionList->sizePolicy().hasHeightForWidth());
        connectionList->setSizePolicy(sizePolicy);
        connectionList->setStyleSheet(QLatin1String("/*alternate-background-color: rgb(200, 200, 200);\n"
"background-color: rgb(255, 255, 255);*/\n"
""));
        connectionList->setFrameShape(QFrame::NoFrame);
        connectionList->setRootIsDecorated(false);
        splitter_2->addWidget(connectionList);
        connectionList->header()->setDefaultSectionSize(70);
        resourcesList = new CustomTreeWidget(splitter_2);
        resourcesList->setObjectName(QStringLiteral("resourcesList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resourcesList->sizePolicy().hasHeightForWidth());
        resourcesList->setSizePolicy(sizePolicy1);
        resourcesList->setStyleSheet(QLatin1String("/*alternate-background-color: rgb(200, 200, 200);\n"
"background-color: rgb(255, 255, 255);*/\n"
""));
        resourcesList->setFrameShape(QFrame::NoFrame);
        resourcesList->setRootIsDecorated(false);
        splitter_2->addWidget(resourcesList);
        resourcesList->header()->setDefaultSectionSize(70);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);

        mainSplietter->addWidget(bottomWidget);

        gridLayout_3->addWidget(mainSplietter, 0, 0, 1, 1);


        retranslateUi(ApplicationViewWidget);

        QMetaObject::connectSlotsByName(ApplicationViewWidget);
    } // setupUi

    void retranslateUi(QWidget *ApplicationViewWidget)
    {
        ApplicationViewWidget->setWindowTitle(QApplication::translate("ApplicationViewWidget", "Form", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = moduleList->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("ApplicationViewWidget", "Environment", Q_NULLPTR));
        ___qtreewidgetitem->setText(6, QApplication::translate("ApplicationViewWidget", "Work Dir", Q_NULLPTR));
        ___qtreewidgetitem->setText(5, QApplication::translate("ApplicationViewWidget", "Stdio", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("ApplicationViewWidget", "Parameters", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("ApplicationViewWidget", "Host", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("ApplicationViewWidget", "Status", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("ApplicationViewWidget", "ID", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ApplicationViewWidget", "Module", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = connectionList->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("ApplicationViewWidget", "Modifiers", Q_NULLPTR));
        ___qtreewidgetitem1->setText(5, QApplication::translate("ApplicationViewWidget", "Carrier", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("ApplicationViewWidget", "To", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("ApplicationViewWidget", "From", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("ApplicationViewWidget", "Status", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("ApplicationViewWidget", "ID", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("ApplicationViewWidget", "Connection", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = resourcesList->headerItem();
        ___qtreewidgetitem2->setText(3, QApplication::translate("ApplicationViewWidget", "Status", Q_NULLPTR));
        ___qtreewidgetitem2->setText(2, QApplication::translate("ApplicationViewWidget", "Type", Q_NULLPTR));
        ___qtreewidgetitem2->setText(1, QApplication::translate("ApplicationViewWidget", "ID", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("ApplicationViewWidget", "Resource", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationViewWidget: public Ui_ApplicationViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONVIEWWIDGET_H
