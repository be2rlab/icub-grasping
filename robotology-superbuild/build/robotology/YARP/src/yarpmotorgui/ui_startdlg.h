/********************************************************************************
** Form generated from reading UI file 'startdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTDLG_H
#define UI_STARTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StartDlg)
    {
        if (StartDlg->objectName().isEmpty())
            StartDlg->setObjectName(QStringLiteral("StartDlg"));
        StartDlg->resize(300, 229);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartDlg->sizePolicy().hasHeightForWidth());
        StartDlg->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        StartDlg->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(StartDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(StartDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(StartDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 80);
        verticalLayout->setStretch(1, 10);

        retranslateUi(StartDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), StartDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StartDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(StartDlg);
    } // setupUi

    void retranslateUi(QDialog *StartDlg)
    {
        StartDlg->setWindowTitle(QApplication::translate("StartDlg", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("StartDlg", "Select Robot Parts:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StartDlg: public Ui_StartDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTDLG_H
