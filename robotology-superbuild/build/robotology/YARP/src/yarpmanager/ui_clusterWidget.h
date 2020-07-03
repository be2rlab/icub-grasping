/********************************************************************************
** Form generated from reading UI file 'clusterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUSTERWIDGET_H
#define UI_CLUSTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "customtreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ClusterWidget
{
public:
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditNs;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *nsNodeComboBox;
    QLabel *labelNs;
    QCheckBox *checkRos;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *checkServerBtn;
    QPushButton *runServerBtn;
    QPushButton *stopServerBtn;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *checkAllBtn;
    QPushButton *runSelBtn;
    QPushButton *stopSelBtn;
    QPushButton *killSelBtn;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_12;
    CustomTreeWidget *nodestreeWidget;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditExecute;
    QComboBox *executeComboBox;
    QPushButton *executeBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ClusterWidget)
    {
        if (ClusterWidget->objectName().isEmpty())
            ClusterWidget->setObjectName(QStringLiteral("ClusterWidget"));
        ClusterWidget->resize(600, 781);
        ClusterWidget->setMinimumSize(QSize(286, 155));
        ClusterWidget->setSizeIncrement(QSize(0, 0));
        ClusterWidget->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_6 = new QVBoxLayout(ClusterWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollArea = new QScrollArea(ClusterWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 584, 765));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(211, 0));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_6);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditUser = new QLineEdit(scrollAreaWidgetContents);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setEnabled(true);

        horizontalLayout->addWidget(lineEditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditNs = new QLineEdit(scrollAreaWidgetContents);
        lineEditNs->setObjectName(QStringLiteral("lineEditNs"));
        lineEditNs->setEnabled(false);

        horizontalLayout_2->addWidget(lineEditNs);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_9->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_4);


        verticalLayout_5->addLayout(horizontalLayout_9);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(131, 0));
        label_4->setSizeIncrement(QSize(132, 0));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nsNodeComboBox = new QComboBox(scrollAreaWidgetContents);
        nsNodeComboBox->setObjectName(QStringLiteral("nsNodeComboBox"));
        nsNodeComboBox->setMinimumSize(QSize(180, 35));

        horizontalLayout_4->addWidget(nsNodeComboBox);

        labelNs = new QLabel(scrollAreaWidgetContents);
        labelNs->setObjectName(QStringLiteral("labelNs"));

        horizontalLayout_4->addWidget(labelNs);

        checkRos = new QCheckBox(scrollAreaWidgetContents);
        checkRos->setObjectName(QStringLiteral("checkRos"));

        horizontalLayout_4->addWidget(checkRos);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkServerBtn = new QPushButton(scrollAreaWidgetContents);
        checkServerBtn->setObjectName(QStringLiteral("checkServerBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        checkServerBtn->setIcon(icon);
        checkServerBtn->setIconSize(QSize(22, 22));

        horizontalLayout_5->addWidget(checkServerBtn);

        runServerBtn = new QPushButton(scrollAreaWidgetContents);
        runServerBtn->setObjectName(QStringLiteral("runServerBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        runServerBtn->setIcon(icon1);
        runServerBtn->setIconSize(QSize(22, 22));

        horizontalLayout_5->addWidget(runServerBtn);

        stopServerBtn = new QPushButton(scrollAreaWidgetContents);
        stopServerBtn->setObjectName(QStringLiteral("stopServerBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        stopServerBtn->setIcon(icon2);
        stopServerBtn->setIconSize(QSize(22, 22));

        horizontalLayout_5->addWidget(stopServerBtn);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_8);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        checkAllBtn = new QPushButton(scrollAreaWidgetContents);
        checkAllBtn->setObjectName(QStringLiteral("checkAllBtn"));
        checkAllBtn->setIcon(icon);
        checkAllBtn->setIconSize(QSize(22, 22));

        horizontalLayout_10->addWidget(checkAllBtn);

        runSelBtn = new QPushButton(scrollAreaWidgetContents);
        runSelBtn->setObjectName(QStringLiteral("runSelBtn"));
        runSelBtn->setIcon(icon1);
        runSelBtn->setIconSize(QSize(22, 22));

        horizontalLayout_10->addWidget(runSelBtn);

        stopSelBtn = new QPushButton(scrollAreaWidgetContents);
        stopSelBtn->setObjectName(QStringLiteral("stopSelBtn"));
        stopSelBtn->setIcon(icon2);
        stopSelBtn->setIconSize(QSize(22, 22));

        horizontalLayout_10->addWidget(stopSelBtn);

        killSelBtn = new QPushButton(scrollAreaWidgetContents);
        killSelBtn->setObjectName(QStringLiteral("killSelBtn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/kill22.svg"), QSize(), QIcon::Normal, QIcon::Off);
        killSelBtn->setIcon(icon3);
        killSelBtn->setIconSize(QSize(22, 22));

        horizontalLayout_10->addWidget(killSelBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        nodestreeWidget = new CustomTreeWidget(scrollAreaWidgetContents);
        nodestreeWidget->setObjectName(QStringLiteral("nodestreeWidget"));
        nodestreeWidget->setColumnCount(6);

        horizontalLayout_12->addWidget(nodestreeWidget);


        verticalLayout_5->addLayout(horizontalLayout_12);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEditExecute = new QLineEdit(scrollAreaWidgetContents);
        lineEditExecute->setObjectName(QStringLiteral("lineEditExecute"));

        horizontalLayout_7->addWidget(lineEditExecute);

        executeComboBox = new QComboBox(scrollAreaWidgetContents);
        executeComboBox->setObjectName(QStringLiteral("executeComboBox"));

        horizontalLayout_7->addWidget(executeComboBox);

        executeBtn = new QPushButton(scrollAreaWidgetContents);
        executeBtn->setObjectName(QStringLiteral("executeBtn"));

        horizontalLayout_7->addWidget(executeBtn);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);


        retranslateUi(ClusterWidget);

        QMetaObject::connectSlotsByName(ClusterWidget);
    } // setupUi

    void retranslateUi(QWidget *ClusterWidget)
    {
        ClusterWidget->setWindowTitle(QApplication::translate("ClusterWidget", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClusterWidget", "Cluster Management Window", Q_NULLPTR));
        label->setText(QApplication::translate("ClusterWidget", "User:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClusterWidget", "Namespace", Q_NULLPTR));
        label_4->setText(QApplication::translate("ClusterWidget", "Nameserver node:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ClusterWidget", "--ros", Q_NULLPTR));
        labelNs->setText(QString());
        checkRos->setText(QString());
#ifndef QT_NO_TOOLTIP
        checkServerBtn->setToolTip(QApplication::translate("ClusterWidget", "Check yarpserver", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkServerBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        runServerBtn->setToolTip(QApplication::translate("ClusterWidget", "Run yarpserver", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        runServerBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopServerBtn->setToolTip(QApplication::translate("ClusterWidget", "Stop yarpserver", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopServerBtn->setText(QString());
        label_6->setText(QApplication::translate("ClusterWidget", "Nodes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkAllBtn->setToolTip(QApplication::translate("ClusterWidget", "Refresh", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkAllBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        runSelBtn->setToolTip(QApplication::translate("ClusterWidget", "Run selected nodes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        runSelBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopSelBtn->setToolTip(QApplication::translate("ClusterWidget", "Stop selected nodes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopSelBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        killSelBtn->setToolTip(QApplication::translate("ClusterWidget", "Kill selected nodes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        killSelBtn->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = nodestreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("ClusterWidget", "Log", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("ClusterWidget", "Address", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("ClusterWidget", "User", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("ClusterWidget", "Display", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("ClusterWidget", "Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ClusterWidget", "Status", Q_NULLPTR));
        label_7->setText(QApplication::translate("ClusterWidget", "Type the command you wish to execute:", Q_NULLPTR));
        executeBtn->setText(QApplication::translate("ClusterWidget", "Execute", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClusterWidget: public Ui_ClusterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERWIDGET_H
