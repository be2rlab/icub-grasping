/********************************************************************************
** Form generated from reading UI file 'piddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIDDLG_H
#define UI_PIDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PidDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabMain;
    QWidget *tabPosition;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tablePosition;
    QWidget *tab;
    QTableWidget *tableVelocity;
    QWidget *tabTorque;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableTorque;
    QWidget *tabStiff;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableStiffness;
    QWidget *tabPWM;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tablePWM;
    QWidget *tabCurrent;
    QTableWidget *tableCurrent;
    QWidget *tabVariables;
    QTableWidget *tableVariables;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDump;
    QPushButton *btnRefresh;
    QPushButton *btnSend;
    QPushButton *btnCancel;

    void setupUi(QDialog *PidDlg)
    {
        if (PidDlg->objectName().isEmpty())
            PidDlg->setObjectName(QStringLiteral("PidDlg"));
        PidDlg->resize(735, 653);
        verticalLayout = new QVBoxLayout(PidDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabMain = new QTabWidget(PidDlg);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabMain->setStyleSheet(QStringLiteral(""));
        tabPosition = new QWidget();
        tabPosition->setObjectName(QStringLiteral("tabPosition"));
        horizontalLayout = new QHBoxLayout(tabPosition);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tablePosition = new QTableWidget(tabPosition);
        if (tablePosition->columnCount() < 2)
            tablePosition->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePosition->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePosition->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tablePosition->rowCount() < 9)
            tablePosition->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tablePosition->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QBrush brush(QColor(207, 207, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setBackground(brush);
        __qtablewidgetitem11->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setBackground(brush);
        __qtablewidgetitem13->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(1, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setBackground(brush);
        __qtablewidgetitem15->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setBackground(brush);
        __qtablewidgetitem17->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(3, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(3, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setBackground(brush);
        __qtablewidgetitem19->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(4, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(4, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setBackground(brush);
        __qtablewidgetitem21->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(5, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(5, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setBackground(brush);
        __qtablewidgetitem23->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(6, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(6, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setBackground(brush);
        __qtablewidgetitem25->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(7, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(7, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setBackground(brush);
        __qtablewidgetitem27->setFlags(Qt::ItemIsEnabled);
        tablePosition->setItem(8, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePosition->setItem(8, 1, __qtablewidgetitem28);
        tablePosition->setObjectName(QStringLiteral("tablePosition"));
        tablePosition->setAlternatingRowColors(true);
        tablePosition->setSelectionMode(QAbstractItemView::NoSelection);
        tablePosition->setShowGrid(true);

        horizontalLayout->addWidget(tablePosition);

        tabMain->addTab(tabPosition, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableVelocity = new QTableWidget(tab);
        if (tableVelocity->columnCount() < 2)
            tableVelocity->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableVelocity->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableVelocity->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        if (tableVelocity->rowCount() < 9)
            tableVelocity->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(5, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(6, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(7, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableVelocity->setVerticalHeaderItem(8, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setBackground(brush);
        __qtablewidgetitem40->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(0, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(0, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setBackground(brush);
        __qtablewidgetitem42->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(1, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(1, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setBackground(brush);
        __qtablewidgetitem44->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(2, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(2, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setBackground(brush);
        __qtablewidgetitem46->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(3, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(3, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setBackground(brush);
        __qtablewidgetitem48->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(4, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(4, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setBackground(brush);
        __qtablewidgetitem50->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(5, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(5, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setBackground(brush);
        __qtablewidgetitem52->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(6, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(6, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setBackground(brush);
        __qtablewidgetitem54->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(7, 0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(7, 1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setBackground(brush);
        __qtablewidgetitem56->setFlags(Qt::ItemIsEnabled);
        tableVelocity->setItem(8, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableVelocity->setItem(8, 1, __qtablewidgetitem57);
        tableVelocity->setObjectName(QStringLiteral("tableVelocity"));
        tableVelocity->setGeometry(QRect(0, 0, 729, 596));
        tableVelocity->setAlternatingRowColors(true);
        tableVelocity->setSelectionMode(QAbstractItemView::NoSelection);
        tableVelocity->setShowGrid(true);
        tabMain->addTab(tab, QString());
        tabTorque = new QWidget();
        tabTorque->setObjectName(QStringLiteral("tabTorque"));
        verticalLayout_2 = new QVBoxLayout(tabTorque);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableTorque = new QTableWidget(tabTorque);
        if (tableTorque->columnCount() < 2)
            tableTorque->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableTorque->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableTorque->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        if (tableTorque->rowCount() < 14)
            tableTorque->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(4, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(5, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(6, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(7, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(8, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(9, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(10, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(11, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(12, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableTorque->setVerticalHeaderItem(13, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        __qtablewidgetitem74->setBackground(brush);
        __qtablewidgetitem74->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(0, 0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        __qtablewidgetitem75->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(0, 1, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        __qtablewidgetitem76->setBackground(brush);
        __qtablewidgetitem76->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(1, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        __qtablewidgetitem77->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(1, 1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        __qtablewidgetitem78->setBackground(brush);
        __qtablewidgetitem78->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(2, 0, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        __qtablewidgetitem79->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(2, 1, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        __qtablewidgetitem80->setBackground(brush);
        __qtablewidgetitem80->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(3, 0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(3, 1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setBackground(brush);
        __qtablewidgetitem82->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(4, 0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(4, 1, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setBackground(brush);
        __qtablewidgetitem84->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(5, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(5, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setBackground(brush);
        __qtablewidgetitem86->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(6, 0, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(6, 1, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        __qtablewidgetitem88->setBackground(brush);
        __qtablewidgetitem88->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(7, 0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        __qtablewidgetitem89->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(7, 1, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        __qtablewidgetitem90->setBackground(brush);
        __qtablewidgetitem90->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(8, 0, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        __qtablewidgetitem91->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(8, 1, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        __qtablewidgetitem92->setBackground(brush);
        __qtablewidgetitem92->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(9, 0, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        __qtablewidgetitem93->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(9, 1, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        __qtablewidgetitem94->setBackground(brush);
        __qtablewidgetitem94->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(10, 0, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        __qtablewidgetitem95->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(10, 1, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        __qtablewidgetitem96->setBackground(brush);
        __qtablewidgetitem96->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(11, 0, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        __qtablewidgetitem97->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(11, 1, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        __qtablewidgetitem98->setBackground(brush);
        __qtablewidgetitem98->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(12, 0, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        __qtablewidgetitem99->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(12, 1, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        __qtablewidgetitem100->setBackground(brush);
        __qtablewidgetitem100->setFlags(Qt::ItemIsEnabled);
        tableTorque->setItem(13, 0, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        __qtablewidgetitem101->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableTorque->setItem(13, 1, __qtablewidgetitem101);
        tableTorque->setObjectName(QStringLiteral("tableTorque"));
        tableTorque->setAlternatingRowColors(true);
        tableTorque->setSelectionMode(QAbstractItemView::NoSelection);
        tableTorque->setShowGrid(true);

        verticalLayout_2->addWidget(tableTorque);

        tabMain->addTab(tabTorque, QString());
        tabStiff = new QWidget();
        tabStiff->setObjectName(QStringLiteral("tabStiff"));
        horizontalLayout_2 = new QHBoxLayout(tabStiff);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableStiffness = new QTableWidget(tabStiff);
        if (tableStiffness->columnCount() < 4)
            tableStiffness->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableStiffness->setHorizontalHeaderItem(0, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableStiffness->setHorizontalHeaderItem(1, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableStiffness->setHorizontalHeaderItem(2, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableStiffness->setHorizontalHeaderItem(3, __qtablewidgetitem105);
        if (tableStiffness->rowCount() < 3)
            tableStiffness->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableStiffness->setVerticalHeaderItem(0, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        tableStiffness->setVerticalHeaderItem(1, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        tableStiffness->setVerticalHeaderItem(2, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        __qtablewidgetitem109->setBackground(brush);
        __qtablewidgetitem109->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(0, 0, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        __qtablewidgetitem110->setBackground(brush);
        __qtablewidgetitem110->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(0, 1, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        __qtablewidgetitem111->setBackground(brush);
        __qtablewidgetitem111->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(0, 2, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        __qtablewidgetitem112->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableStiffness->setItem(0, 3, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        __qtablewidgetitem113->setBackground(brush);
        __qtablewidgetitem113->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(1, 0, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        __qtablewidgetitem114->setBackground(brush);
        __qtablewidgetitem114->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(1, 1, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        __qtablewidgetitem115->setBackground(brush);
        __qtablewidgetitem115->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(1, 2, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        __qtablewidgetitem116->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableStiffness->setItem(1, 3, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        __qtablewidgetitem117->setBackground(brush);
        __qtablewidgetitem117->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(2, 0, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        __qtablewidgetitem118->setBackground(brush);
        __qtablewidgetitem118->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(2, 1, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        __qtablewidgetitem119->setBackground(brush);
        __qtablewidgetitem119->setFlags(Qt::ItemIsEnabled);
        tableStiffness->setItem(2, 2, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        __qtablewidgetitem120->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableStiffness->setItem(2, 3, __qtablewidgetitem120);
        tableStiffness->setObjectName(QStringLiteral("tableStiffness"));
        tableStiffness->setAlternatingRowColors(true);
        tableStiffness->setSelectionMode(QAbstractItemView::NoSelection);
        tableStiffness->setShowGrid(true);

        horizontalLayout_2->addWidget(tableStiffness);

        tabMain->addTab(tabStiff, QString());
        tabPWM = new QWidget();
        tabPWM->setObjectName(QStringLiteral("tabPWM"));
        horizontalLayout_3 = new QHBoxLayout(tabPWM);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tablePWM = new QTableWidget(tabPWM);
        if (tablePWM->columnCount() < 2)
            tablePWM->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        tablePWM->setHorizontalHeaderItem(0, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        tablePWM->setHorizontalHeaderItem(1, __qtablewidgetitem122);
        if (tablePWM->rowCount() < 2)
            tablePWM->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        tablePWM->setVerticalHeaderItem(0, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        tablePWM->setVerticalHeaderItem(1, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        __qtablewidgetitem125->setBackground(brush);
        __qtablewidgetitem125->setFlags(Qt::ItemIsEnabled);
        tablePWM->setItem(0, 0, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        __qtablewidgetitem126->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tablePWM->setItem(0, 1, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        __qtablewidgetitem127->setBackground(brush);
        __qtablewidgetitem127->setFlags(Qt::ItemIsEnabled);
        tablePWM->setItem(1, 0, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        __qtablewidgetitem128->setBackground(brush);
        __qtablewidgetitem128->setFlags(Qt::ItemIsEnabled);
        tablePWM->setItem(1, 1, __qtablewidgetitem128);
        tablePWM->setObjectName(QStringLiteral("tablePWM"));
        tablePWM->setAlternatingRowColors(true);
        tablePWM->setSelectionMode(QAbstractItemView::NoSelection);
        tablePWM->setShowGrid(true);

        horizontalLayout_3->addWidget(tablePWM);

        tabMain->addTab(tabPWM, QString());
        tabCurrent = new QWidget();
        tabCurrent->setObjectName(QStringLiteral("tabCurrent"));
        tableCurrent = new QTableWidget(tabCurrent);
        if (tableCurrent->columnCount() < 2)
            tableCurrent->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        tableCurrent->setHorizontalHeaderItem(0, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        tableCurrent->setHorizontalHeaderItem(1, __qtablewidgetitem130);
        if (tableCurrent->rowCount() < 7)
            tableCurrent->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(0, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(1, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(2, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(3, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(4, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(5, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        tableCurrent->setVerticalHeaderItem(6, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        __qtablewidgetitem138->setBackground(brush);
        __qtablewidgetitem138->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(0, 0, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        __qtablewidgetitem139->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(0, 1, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        __qtablewidgetitem140->setBackground(brush);
        __qtablewidgetitem140->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(1, 0, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        __qtablewidgetitem141->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(1, 1, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        __qtablewidgetitem142->setBackground(brush);
        __qtablewidgetitem142->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(2, 0, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        __qtablewidgetitem143->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(2, 1, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        __qtablewidgetitem144->setBackground(brush);
        __qtablewidgetitem144->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(3, 0, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        __qtablewidgetitem145->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(3, 1, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        __qtablewidgetitem146->setBackground(brush);
        __qtablewidgetitem146->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(4, 0, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        __qtablewidgetitem147->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(4, 1, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        __qtablewidgetitem148->setBackground(brush);
        __qtablewidgetitem148->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(5, 0, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        __qtablewidgetitem149->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(5, 1, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        __qtablewidgetitem150->setBackground(brush);
        __qtablewidgetitem150->setFlags(Qt::ItemIsEnabled);
        tableCurrent->setItem(6, 0, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        __qtablewidgetitem151->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableCurrent->setItem(6, 1, __qtablewidgetitem151);
        tableCurrent->setObjectName(QStringLiteral("tableCurrent"));
        tableCurrent->setGeometry(QRect(0, 0, 729, 596));
        tableCurrent->setAlternatingRowColors(true);
        tableCurrent->setSelectionMode(QAbstractItemView::NoSelection);
        tableCurrent->setShowGrid(true);
        tabMain->addTab(tabCurrent, QString());
        tabVariables = new QWidget();
        tabVariables->setObjectName(QStringLiteral("tabVariables"));
        tableVariables = new QTableWidget(tabVariables);
        tableVariables->setObjectName(QStringLiteral("tableVariables"));
        tableVariables->setGeometry(QRect(20, 20, 681, 551));
        tableVariables->setAlternatingRowColors(true);
        tabMain->addTab(tabVariables, QString());

        verticalLayout->addWidget(tabMain);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnDump = new QPushButton(PidDlg);
        btnDump->setObjectName(QStringLiteral("btnDump"));

        horizontalLayout_4->addWidget(btnDump);

        btnRefresh = new QPushButton(PidDlg);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));

        horizontalLayout_4->addWidget(btnRefresh);

        btnSend = new QPushButton(PidDlg);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout_4->addWidget(btnSend);

        btnCancel = new QPushButton(PidDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(PidDlg);

        tabMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PidDlg);
    } // setupUi

    void retranslateUi(QDialog *PidDlg)
    {
        PidDlg->setWindowTitle(QApplication::translate("PidDlg", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tablePosition->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tablePosition->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tablePosition->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("PidDlg", "Position Kp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tablePosition->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("PidDlg", "Position Kd", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tablePosition->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("PidDlg", "Position Ki", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tablePosition->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("PidDlg", "Position Shift Factor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tablePosition->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("PidDlg", "PID Output Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tablePosition->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("PidDlg", "PID Integral Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tablePosition->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("PidDlg", "PID Output Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tablePosition->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("PidDlg", "Positive Stiction Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tablePosition->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("PidDlg", "Negative Stiction Offset", Q_NULLPTR));

        const bool __sortingEnabled = tablePosition->isSortingEnabled();
        tablePosition->setSortingEnabled(false);
        tablePosition->setSortingEnabled(__sortingEnabled);

        tabMain->setTabText(tabMain->indexOf(tabPosition), QApplication::translate("PidDlg", "Position PID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableVelocity->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableVelocity->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableVelocity->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("PidDlg", "Velocity Kp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableVelocity->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("PidDlg", "Velocity Kd", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableVelocity->verticalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("PidDlg", "Velocity Ki", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableVelocity->verticalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("PidDlg", "Velocity Shift Factor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableVelocity->verticalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("PidDlg", "PID Output Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableVelocity->verticalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("PidDlg", "PID Integral Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableVelocity->verticalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("PidDlg", "PID Output Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableVelocity->verticalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("PidDlg", "Positive Stiction Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableVelocity->verticalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("PidDlg", "Negative Stiction Offset", Q_NULLPTR));

        const bool __sortingEnabled1 = tableVelocity->isSortingEnabled();
        tableVelocity->setSortingEnabled(false);
        tableVelocity->setSortingEnabled(__sortingEnabled1);

        tabMain->setTabText(tabMain->indexOf(tab), QApplication::translate("PidDlg", "Velocity PID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableTorque->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableTorque->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableTorque->verticalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("PidDlg", "Torque Kp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableTorque->verticalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("PidDlg", "Torque Kd", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableTorque->verticalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("PidDlg", "Torque Ki", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableTorque->verticalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("PidDlg", "Torque Shift Factor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableTorque->verticalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("PidDlg", "PID Output Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableTorque->verticalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("PidDlg", "PID Integral Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableTorque->verticalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("PidDlg", "PID Output Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableTorque->verticalHeaderItem(7);
        ___qtablewidgetitem31->setText(QApplication::translate("PidDlg", "Positive Stiction Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableTorque->verticalHeaderItem(8);
        ___qtablewidgetitem32->setText(QApplication::translate("PidDlg", "Negative Stiction Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableTorque->verticalHeaderItem(9);
        ___qtablewidgetitem33->setText(QApplication::translate("PidDlg", "Torque Kff", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableTorque->verticalHeaderItem(10);
        ___qtablewidgetitem34->setText(QApplication::translate("PidDlg", "Torque Kbemf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableTorque->verticalHeaderItem(11);
        ___qtablewidgetitem35->setText(QApplication::translate("PidDlg", "Torque Kbemf Scale", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableTorque->verticalHeaderItem(12);
        ___qtablewidgetitem36->setText(QApplication::translate("PidDlg", "Torque Ktau", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableTorque->verticalHeaderItem(13);
        ___qtablewidgetitem37->setText(QApplication::translate("PidDlg", "Torque Ktau Scale", Q_NULLPTR));

        const bool __sortingEnabled2 = tableTorque->isSortingEnabled();
        tableTorque->setSortingEnabled(false);
        tableTorque->setSortingEnabled(__sortingEnabled2);

        tabMain->setTabText(tabMain->indexOf(tabTorque), QApplication::translate("PidDlg", "Torque PID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableStiffness->horizontalHeaderItem(0);
        ___qtablewidgetitem38->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableStiffness->horizontalHeaderItem(1);
        ___qtablewidgetitem39->setText(QApplication::translate("PidDlg", "Min", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableStiffness->horizontalHeaderItem(2);
        ___qtablewidgetitem40->setText(QApplication::translate("PidDlg", "Max", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableStiffness->horizontalHeaderItem(3);
        ___qtablewidgetitem41->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableStiffness->verticalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("PidDlg", "Joint Stiffness", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableStiffness->verticalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("PidDlg", "Joint Damping", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableStiffness->verticalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("PidDlg", "Joint Torque Feedforward", Q_NULLPTR));

        const bool __sortingEnabled3 = tableStiffness->isSortingEnabled();
        tableStiffness->setSortingEnabled(false);
        tableStiffness->setSortingEnabled(__sortingEnabled3);

        tabMain->setTabText(tabMain->indexOf(tabStiff), QApplication::translate("PidDlg", "Stiffness Params", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tablePWM->horizontalHeaderItem(0);
        ___qtablewidgetitem45->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tablePWM->horizontalHeaderItem(1);
        ___qtablewidgetitem46->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tablePWM->verticalHeaderItem(0);
        ___qtablewidgetitem47->setText(QApplication::translate("PidDlg", "PWM value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tablePWM->verticalHeaderItem(1);
        ___qtablewidgetitem48->setText(QApplication::translate("PidDlg", "Measured PWM", Q_NULLPTR));

        const bool __sortingEnabled4 = tablePWM->isSortingEnabled();
        tablePWM->setSortingEnabled(false);
        tablePWM->setSortingEnabled(__sortingEnabled4);

        tabMain->setTabText(tabMain->indexOf(tabPWM), QApplication::translate("PidDlg", "PWM Params", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableCurrent->horizontalHeaderItem(0);
        ___qtablewidgetitem49->setText(QApplication::translate("PidDlg", "Current", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableCurrent->horizontalHeaderItem(1);
        ___qtablewidgetitem50->setText(QApplication::translate("PidDlg", "Desired", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableCurrent->verticalHeaderItem(0);
        ___qtablewidgetitem51->setText(QApplication::translate("PidDlg", "Current Kp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableCurrent->verticalHeaderItem(1);
        ___qtablewidgetitem52->setText(QApplication::translate("PidDlg", "Current Kd", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableCurrent->verticalHeaderItem(2);
        ___qtablewidgetitem53->setText(QApplication::translate("PidDlg", "Current Ki", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableCurrent->verticalHeaderItem(3);
        ___qtablewidgetitem54->setText(QApplication::translate("PidDlg", "Current Shift Factor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableCurrent->verticalHeaderItem(4);
        ___qtablewidgetitem55->setText(QApplication::translate("PidDlg", "PID Output Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableCurrent->verticalHeaderItem(5);
        ___qtablewidgetitem56->setText(QApplication::translate("PidDlg", "PID Integral Limit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableCurrent->verticalHeaderItem(6);
        ___qtablewidgetitem57->setText(QApplication::translate("PidDlg", "PID Output Offset", Q_NULLPTR));

        const bool __sortingEnabled5 = tableCurrent->isSortingEnabled();
        tableCurrent->setSortingEnabled(false);
        tableCurrent->setSortingEnabled(__sortingEnabled5);

        tabMain->setTabText(tabMain->indexOf(tabCurrent), QApplication::translate("PidDlg", "Current PID", Q_NULLPTR));
        tabMain->setTabText(tabMain->indexOf(tabVariables), QApplication::translate("PidDlg", "Internal Variables", Q_NULLPTR));
        btnDump->setText(QApplication::translate("PidDlg", "DumpToFile", Q_NULLPTR));
        btnRefresh->setText(QApplication::translate("PidDlg", "Refresh", Q_NULLPTR));
        btnSend->setText(QApplication::translate("PidDlg", "Send", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("PidDlg", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PidDlg: public Ui_PidDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIDDLG_H
