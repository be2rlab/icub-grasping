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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *loadingIco;
    QLabel *label_2;

    void setupUi(QWidget *LoadingWidget)
    {
        if (LoadingWidget->objectName().isEmpty())
            LoadingWidget->setObjectName(QStringLiteral("LoadingWidget"));
        LoadingWidget->resize(128, 180);
        LoadingWidget->setMinimumSize(QSize(128, 180));
        LoadingWidget->setMaximumSize(QSize(128, 180));
        LoadingWidget->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0,0);"));
        verticalLayout = new QVBoxLayout(LoadingWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loadingIco = new QLabel(LoadingWidget);
        loadingIco->setObjectName(QStringLiteral("loadingIco"));
        loadingIco->setMinimumSize(QSize(128, 128));
        loadingIco->setMaximumSize(QSize(128, 128));
        loadingIco->setScaledContents(true);

        verticalLayout->addWidget(loadingIco);

        label_2 = new QLabel(LoadingWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        retranslateUi(LoadingWidget);

        QMetaObject::connectSlotsByName(LoadingWidget);
    } // setupUi

    void retranslateUi(QWidget *LoadingWidget)
    {
        LoadingWidget->setWindowTitle(QApplication::translate("LoadingWidget", "Form", Q_NULLPTR));
        loadingIco->setText(QString());
        label_2->setText(QApplication::translate("LoadingWidget", "Loading...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoadingWidget: public Ui_LoadingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGWIDGET_H
