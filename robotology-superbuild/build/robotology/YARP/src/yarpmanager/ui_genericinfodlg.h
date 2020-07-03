/********************************************************************************
** Form generated from reading UI file 'genericinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICINFODLG_H
#define UI_GENERICINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GenericInfoDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *description;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *GenericInfoDlg)
    {
        if (GenericInfoDlg->objectName().isEmpty())
            GenericInfoDlg->setObjectName(QStringLiteral("GenericInfoDlg"));
        GenericInfoDlg->resize(680, 480);
        verticalLayout = new QVBoxLayout(GenericInfoDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        description = new QLabel(GenericInfoDlg);
        description->setObjectName(QStringLiteral("description"));

        verticalLayout->addWidget(description);

        textBrowser = new QTextBrowser(GenericInfoDlg);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(GenericInfoDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GenericInfoDlg);

        QMetaObject::connectSlotsByName(GenericInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *GenericInfoDlg)
    {
        GenericInfoDlg->setWindowTitle(QApplication::translate("GenericInfoDlg", "Dialog", Q_NULLPTR));
        description->setText(QString());
        textBrowser->setHtml(QApplication::translate("GenericInfoDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">http://www.yarp.it/</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GenericInfoDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GenericInfoDlg: public Ui_GenericInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICINFODLG_H
