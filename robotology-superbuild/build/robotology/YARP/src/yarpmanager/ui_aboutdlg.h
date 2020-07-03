/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

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

class Ui_AboutDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblName;
    QLabel *lblVersion;
    QSpacerItem *verticalSpacer;
    QLabel *copyright;
    QTextBrowser *website;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLicence;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QStringLiteral("AboutDlg"));
        AboutDlg->resize(480, 211);
        AboutDlg->setMinimumSize(QSize(480, 211));
        AboutDlg->setMaximumSize(QSize(480, 211));
        verticalLayout = new QVBoxLayout(AboutDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblName = new QLabel(AboutDlg);
        lblName->setObjectName(QStringLiteral("lblName"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        lblName->setFont(font);
        lblName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblName);

        lblVersion = new QLabel(AboutDlg);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        lblVersion->setFont(font1);
        lblVersion->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblVersion);

        verticalSpacer = new QSpacerItem(0, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        copyright = new QLabel(AboutDlg);
        copyright->setObjectName(QStringLiteral("copyright"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(copyright->sizePolicy().hasHeightForWidth());
        copyright->setSizePolicy(sizePolicy);
        copyright->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(copyright);

        website = new QTextBrowser(AboutDlg);
        website->setObjectName(QStringLiteral("website"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(website->sizePolicy().hasHeightForWidth());
        website->setSizePolicy(sizePolicy1);
        website->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255,0);"));
        website->setFrameShape(QFrame::NoFrame);
        website->setFrameShadow(QFrame::Plain);
        website->setOpenExternalLinks(true);

        verticalLayout->addWidget(website);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnLicence = new QPushButton(AboutDlg);
        btnLicence->setObjectName(QStringLiteral("btnLicence"));

        horizontalLayout_2->addWidget(btnLicence);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnClose = new QPushButton(AboutDlg);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AboutDlg);

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "Dialog", Q_NULLPTR));
        lblName->setText(QApplication::translate("AboutDlg", "yarpmanager", Q_NULLPTR));
        lblVersion->setText(QApplication::translate("AboutDlg", "3.0.0", Q_NULLPTR));
        copyright->setText(QApplication::translate("AboutDlg", "Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)", Q_NULLPTR));
        website->setHtml(QApplication::translate("AboutDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.iit.it/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#0000ff;\">https://www.iit.it/</span></a></p></body></html>", Q_NULLPTR));
        btnLicence->setText(QApplication::translate("AboutDlg", "Licence", Q_NULLPTR));
        btnClose->setText(QApplication::translate("AboutDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
