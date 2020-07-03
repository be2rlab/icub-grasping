/********************************************************************************
** Form generated from reading UI file 'stdoutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STDOUTWINDOW_H
#define UI_STDOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StdoutWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *StdoutWindow)
    {
        if (StdoutWindow->objectName().isEmpty())
            StdoutWindow->setObjectName(QStringLiteral("StdoutWindow"));
        StdoutWindow->resize(300, 300);
        StdoutWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        horizontalLayout = new QHBoxLayout(StdoutWindow);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(StdoutWindow);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setPlainText(QStringLiteral(""));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(StdoutWindow);

        QMetaObject::connectSlotsByName(StdoutWindow);
    } // setupUi

    void retranslateUi(QWidget *StdoutWindow)
    {
        StdoutWindow->setWindowTitle(QApplication::translate("StdoutWindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StdoutWindow: public Ui_StdoutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STDOUTWINDOW_H
