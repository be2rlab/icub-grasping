/********************************************************************************
** Form generated from reading UI file 'loadingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGWIDGET_H
#define UI_LOADINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *loadingIco;
    QSpacerItem *horizontalSpacer_2;
    QLabel *text;

    void setupUi(QWidget *LoadingWidget)
    {
        if (LoadingWidget->objectName().isEmpty())
            LoadingWidget->setObjectName(QStringLiteral("LoadingWidget"));
        LoadingWidget->resize(128, 180);
        LoadingWidget->setMinimumSize(QSize(128, 180));
        LoadingWidget->setMaximumSize(QSize(142, 180));
        LoadingWidget->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0,0);"));
        verticalLayout = new QVBoxLayout(LoadingWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loadingIco = new QLabel(LoadingWidget);
        loadingIco->setObjectName(QStringLiteral("loadingIco"));
        loadingIco->setMinimumSize(QSize(128, 128));
        loadingIco->setMaximumSize(QSize(128, 128));
        loadingIco->setScaledContents(true);

        horizontalLayout->addWidget(loadingIco);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        text = new QLabel(LoadingWidget);
        text->setObjectName(QStringLiteral("text"));
        QFont font;
        font.setPointSize(12);
        text->setFont(font);
        text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(text);


        retranslateUi(LoadingWidget);

        QMetaObject::connectSlotsByName(LoadingWidget);
    } // setupUi

    void retranslateUi(QWidget *LoadingWidget)
    {
        LoadingWidget->setWindowTitle(QApplication::translate("LoadingWidget", "Form", Q_NULLPTR));
        loadingIco->setText(QString());
        text->setText(QApplication::translate("LoadingWidget", "Loading...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoadingWidget: public Ui_LoadingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGWIDGET_H
