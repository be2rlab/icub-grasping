/********************************************************************************
** Form generated from reading UI file 'portloggerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTLOGGERDIALOG_H
#define UI_PORTLOGGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PortLoggerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetCons;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QSpacerItem *horizontalSpacer_3;
    QTreeWidget *treeWidgetSelectedCons;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumberLogTime;
    QLabel *label_3;
    QLineEdit *lineEditLogPath;
    QToolButton *toolButtonLogPath;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxCollect;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *PortLoggerDialog)
    {
        if (PortLoggerDialog->objectName().isEmpty())
            PortLoggerDialog->setObjectName(QStringLiteral("PortLoggerDialog"));
        PortLoggerDialog->resize(997, 514);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/resources/profile_rate.png"), QSize(), QIcon::Normal, QIcon::Off);
        PortLoggerDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(PortLoggerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidgetCons = new QTreeWidget(PortLoggerDialog);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setText(0, QStringLiteral("Source"));
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidgetCons->setHeaderItem(__qtreewidgetitem);
        treeWidgetCons->setObjectName(QStringLiteral("treeWidgetCons"));
        treeWidgetCons->setAlternatingRowColors(true);
        treeWidgetCons->setSelectionMode(QAbstractItemView::MultiSelection);
        treeWidgetCons->setSortingEnabled(true);
        treeWidgetCons->setAnimated(true);
        treeWidgetCons->setAllColumnsShowFocus(false);
        treeWidgetCons->header()->setDefaultSectionSize(240);

        verticalLayout->addWidget(treeWidgetCons);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(PortLoggerDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonAdd = new QPushButton(PortLoggerDialog);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/resources/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon1);
        pushButtonAdd->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(PortLoggerDialog);
        pushButtonRemove->setObjectName(QStringLiteral("pushButtonRemove"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/resources/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRemove->setIcon(icon2);
        pushButtonRemove->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButtonRemove);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidgetSelectedCons = new QTreeWidget(PortLoggerDialog);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem1->setFont(2, font);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem1->setFont(1, font);
        __qtreewidgetitem1->setText(0, QStringLiteral("Source"));
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem1->setFont(0, font);
        treeWidgetSelectedCons->setHeaderItem(__qtreewidgetitem1);
        treeWidgetSelectedCons->setObjectName(QStringLiteral("treeWidgetSelectedCons"));
        treeWidgetSelectedCons->setAlternatingRowColors(true);
        treeWidgetSelectedCons->setSelectionMode(QAbstractItemView::MultiSelection);
        treeWidgetSelectedCons->setSortingEnabled(true);
        treeWidgetSelectedCons->setAnimated(true);
        treeWidgetSelectedCons->setAllColumnsShowFocus(false);
        treeWidgetSelectedCons->header()->setDefaultSectionSize(240);

        verticalLayout->addWidget(treeWidgetSelectedCons);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(PortLoggerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lcdNumberLogTime = new QLCDNumber(PortLoggerDialog);
        lcdNumberLogTime->setObjectName(QStringLiteral("lcdNumberLogTime"));
        lcdNumberLogTime->setSmallDecimalPoint(false);
        lcdNumberLogTime->setDigitCount(6);
        lcdNumberLogTime->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberLogTime);

        label_3 = new QLabel(PortLoggerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditLogPath = new QLineEdit(PortLoggerDialog);
        lineEditLogPath->setObjectName(QStringLiteral("lineEditLogPath"));
        lineEditLogPath->setMinimumSize(QSize(150, 0));
        lineEditLogPath->setReadOnly(false);

        horizontalLayout->addWidget(lineEditLogPath);

        toolButtonLogPath = new QToolButton(PortLoggerDialog);
        toolButtonLogPath->setObjectName(QStringLiteral("toolButtonLogPath"));

        horizontalLayout->addWidget(toolButtonLogPath);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxCollect = new QCheckBox(PortLoggerDialog);
        checkBoxCollect->setObjectName(QStringLiteral("checkBoxCollect"));

        horizontalLayout->addWidget(checkBoxCollect);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonStart = new QPushButton(PortLoggerDialog);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonOpen = new QPushButton(PortLoggerDialog);
        pushButtonOpen->setObjectName(QStringLiteral("pushButtonOpen"));

        horizontalLayout->addWidget(pushButtonOpen);

        pushButtonClose = new QPushButton(PortLoggerDialog);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PortLoggerDialog);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), PortLoggerDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(PortLoggerDialog);
    } // setupUi

    void retranslateUi(QDialog *PortLoggerDialog)
    {
        PortLoggerDialog->setWindowTitle(QApplication::translate("PortLoggerDialog", "Profile ports rate", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetCons->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("PortLoggerDialog", "Carrier", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("PortLoggerDialog", "Destination", Q_NULLPTR));
        label->setText(QApplication::translate("PortLoggerDialog", "Selected connections:", Q_NULLPTR));
        pushButtonAdd->setText(QString());
        pushButtonRemove->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetSelectedCons->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("PortLoggerDialog", "Carrier", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("PortLoggerDialog", "Destination", Q_NULLPTR));
        label_2->setText(QApplication::translate("PortLoggerDialog", "Elapsed time (s):", Q_NULLPTR));
        label_3->setText(QApplication::translate("PortLoggerDialog", "Logs Path:", Q_NULLPTR));
        toolButtonLogPath->setText(QApplication::translate("PortLoggerDialog", "...", Q_NULLPTR));
        checkBoxCollect->setText(QApplication::translate("PortLoggerDialog", "Collect the results", Q_NULLPTR));
        pushButtonStart->setText(QApplication::translate("PortLoggerDialog", "&Start", Q_NULLPTR));
        pushButtonOpen->setText(QApplication::translate("PortLoggerDialog", "&Open", Q_NULLPTR));
        pushButtonClose->setText(QApplication::translate("PortLoggerDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PortLoggerDialog: public Ui_PortLoggerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTLOGGERDIALOG_H
