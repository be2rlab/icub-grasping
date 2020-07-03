/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter;
    QWidget *controlsWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSmooth;
    QWidget *smoothControlContainer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *sliderContainer;
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QLabel *lblSmoothValue;
    QSlider *sliderScaleSmooth;
    QGroupBox *groupB;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnBinarization;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QSpinBox *spinThreashold;
    QLabel *label_3;
    QDoubleSpinBox *spinCompGain;
    QLabel *label_4;
    QDoubleSpinBox *spinCompContactGain;
    QPushButton *btnCalibrate;
    QFrame *line;
    QPushButton *btnShowTouchThres;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *spinNeighbor;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QWidget *widget_6;
    QGridLayout *gridLayout_8;
    QPlainTextEdit *infoPanel;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeCompensation;
    QWidget *sampleFreqContainer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *spinSampleFreq;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(677, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(tab);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setStyleSheet(QLatin1String("QSplitter::handle {\n"
"     image: url(:/images/splitter.png);\n"
" }\n"
"\n"
" QSplitter::handle:horizontal {\n"
"     width: 2px;\n"
" }\n"
"\n"
" QSplitter::handle:vertical {\n"
"     height: 2px;\n"
" }\n"
"\n"
" QSplitter::handle:pressed {\n"
"     image: url(:/images/splitter.png);\n"
" }"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(6);
        controlsWidget = new QWidget(splitter);
        controlsWidget->setObjectName(QStringLiteral("controlsWidget"));
        controlsWidget->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(controlsWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(controlsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 133));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        widget->setFont(font1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnSmooth = new QPushButton(widget);
        btnSmooth->setObjectName(QStringLiteral("btnSmooth"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSmooth->sizePolicy().hasHeightForWidth());
        btnSmooth->setSizePolicy(sizePolicy);
        btnSmooth->setCheckable(true);

        horizontalLayout->addWidget(btnSmooth);

        smoothControlContainer = new QWidget(widget);
        smoothControlContainer->setObjectName(QStringLiteral("smoothControlContainer"));
        verticalLayout_2 = new QVBoxLayout(smoothControlContainer);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(smoothControlContainer);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        sliderContainer = new QWidget(smoothControlContainer);
        sliderContainer->setObjectName(QStringLiteral("sliderContainer"));
        verticalLayout = new QVBoxLayout(sliderContainer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_5 = new QWidget(sliderContainer);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 20));
        widget_5->setMaximumSize(QSize(16777215, 20));
        lblSmoothValue = new QLabel(widget_5);
        lblSmoothValue->setObjectName(QStringLiteral("lblSmoothValue"));
        lblSmoothValue->setGeometry(QRect(0, 0, 30, 20));
        lblSmoothValue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(widget_5);

        sliderScaleSmooth = new QSlider(sliderContainer);
        sliderScaleSmooth->setObjectName(QStringLiteral("sliderScaleSmooth"));
        sliderScaleSmooth->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
"     border: 1px solid #999999;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
"QSlider::groove:horizontal:disabled {\n"
"     border: 1px solid #c8c8c8;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f0f0f0, stop:1 #dcdcdc);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal:enabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }\n"
"\n"
""
                        "\n"
" QSlider::handle:horizontal:disabled {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e6e6e6, stop:1 #c8c8c8);\n"
"     border: 1px solid #c8c8c8;\n"
"     width: 30px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        sliderScaleSmooth->setMaximum(10);
        sliderScaleSmooth->setTracking(true);
        sliderScaleSmooth->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(sliderScaleSmooth);


        verticalLayout_2->addWidget(sliderContainer);


        horizontalLayout->addWidget(smoothControlContainer);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupB = new QGroupBox(controlsWidget);
        groupB->setObjectName(QStringLiteral("groupB"));
        groupB->setMaximumSize(QSize(16777215, 60));
        groupB->setFont(font);
        gridLayout_3 = new QGridLayout(groupB);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(groupB);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setFont(font1);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnBinarization = new QPushButton(widget_2);
        btnBinarization->setObjectName(QStringLiteral("btnBinarization"));
        sizePolicy.setHeightForWidth(btnBinarization->sizePolicy().hasHeightForWidth());
        btnBinarization->setSizePolicy(sizePolicy);
        btnBinarization->setMaximumSize(QSize(16777215, 25));
        btnBinarization->setCheckable(true);

        horizontalLayout_2->addWidget(btnBinarization);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupB);

        groupBox_3 = new QGroupBox(controlsWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setFont(font1);
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        spinThreashold = new QSpinBox(widget_3);
        spinThreashold->setObjectName(QStringLiteral("spinThreashold"));
        spinThreashold->setMaximum(255);

        gridLayout_5->addWidget(spinThreashold, 0, 1, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        spinCompGain = new QDoubleSpinBox(widget_3);
        spinCompGain->setObjectName(QStringLiteral("spinCompGain"));
        spinCompGain->setMinimum(0.01);
        spinCompGain->setMaximum(10);
        spinCompGain->setSingleStep(0.01);
        spinCompGain->setValue(0.01);

        gridLayout_5->addWidget(spinCompGain, 1, 1, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        spinCompContactGain = new QDoubleSpinBox(widget_3);
        spinCompContactGain->setObjectName(QStringLiteral("spinCompContactGain"));
        spinCompContactGain->setMinimum(0);
        spinCompContactGain->setMaximum(10);
        spinCompContactGain->setSingleStep(0.01);
        spinCompContactGain->setValue(0);

        gridLayout_5->addWidget(spinCompContactGain, 2, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 80);
        gridLayout_5->setColumnStretch(1, 20);

        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        btnCalibrate = new QPushButton(controlsWidget);
        btnCalibrate->setObjectName(QStringLiteral("btnCalibrate"));

        verticalLayout_3->addWidget(btnCalibrate);

        line = new QFrame(controlsWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        btnShowTouchThres = new QPushButton(controlsWidget);
        btnShowTouchThres->setObjectName(QStringLiteral("btnShowTouchThres"));

        verticalLayout_3->addWidget(btnShowTouchThres);

        line_3 = new QFrame(controlsWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(controlsWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        spinNeighbor = new QDoubleSpinBox(controlsWidget);
        spinNeighbor->setObjectName(QStringLiteral("spinNeighbor"));
        spinNeighbor->setMaximum(100);
        spinNeighbor->setSingleStep(0.01);

        horizontalLayout_3->addWidget(spinNeighbor);

        horizontalLayout_3->setStretch(0, 80);
        horizontalLayout_3->setStretch(1, 20);

        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        splitter->addWidget(controlsWidget);
        groupBox_4 = new QGroupBox(splitter);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font);
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(groupBox_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setFont(font1);
        gridLayout_8 = new QGridLayout(widget_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        infoPanel = new QPlainTextEdit(widget_6);
        infoPanel->setObjectName(QStringLiteral("infoPanel"));

        gridLayout_8->addWidget(infoPanel, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_6, 0, 0, 1, 1);

        splitter->addWidget(groupBox_4);

        horizontalLayout_4->addWidget(splitter);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        treeCompensation = new QTreeWidget(tab_2);
        treeCompensation->setObjectName(QStringLiteral("treeCompensation"));
        treeCompensation->setEnabled(false);
        treeCompensation->header()->setDefaultSectionSize(100);

        verticalLayout_4->addWidget(treeCompensation);

        sampleFreqContainer = new QWidget(tab_2);
        sampleFreqContainer->setObjectName(QStringLiteral("sampleFreqContainer"));
        sampleFreqContainer->setEnabled(false);
        horizontalLayout_5 = new QHBoxLayout(sampleFreqContainer);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(sampleFreqContainer);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        spinSampleFreq = new QSpinBox(sampleFreqContainer);
        spinSampleFreq->setObjectName(QStringLiteral("spinSampleFreq"));
        spinSampleFreq->setMinimum(1);
        spinSampleFreq->setMaximum(50);
        spinSampleFreq->setValue(5);

        horizontalLayout_5->addWidget(spinSampleFreq);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(sampleFreqContainer);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QtSkinManagerGui", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Smooth Filter", Q_NULLPTR));
        btnSmooth->setText(QApplication::translate("MainWindow", "OFF", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Smooth Factor", Q_NULLPTR));
        lblSmoothValue->setText(QApplication::translate("MainWindow", "0,0", Q_NULLPTR));
        groupB->setTitle(QApplication::translate("MainWindow", "Binarization Filter", Q_NULLPTR));
        btnBinarization->setText(QApplication::translate("MainWindow", "OFF", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Compensation Parameters", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Safety Threshold", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Compensation Gain", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Contact Compensation Gain", Q_NULLPTR));
        btnCalibrate->setText(QApplication::translate("MainWindow", "Calibrate Skin", Q_NULLPTR));
        btnShowTouchThres->setText(QApplication::translate("MainWindow", "Show Touch Thresholds", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Max neighbor distance (cm)", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "INFO", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Filters", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeCompensation->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "Drift", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Taxel", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Triangle", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sample Frequency:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Compensation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
