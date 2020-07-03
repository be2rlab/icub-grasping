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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dc1394slider.h"
#include "dc1394sliderwb.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabFeatures;
    QVBoxLayout *verticalLayout_3;
    DC1394Slider *sliderShutter;
    DC1394Slider *sliderBrightness;
    DC1394Slider *sliderGain;
    DC1394Slider *sliderExposure;
    DC1394SliderWB *sliderWB;
    QPushButton *btnRefresh1;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabFeaturesAdv;
    QVBoxLayout *verticalLayout_4;
    DC1394Slider *sliderSharpness;
    DC1394Slider *sliderHue;
    DC1394Slider *sliderSaturation;
    DC1394Slider *sliderGamma;
    DC1394Slider *sliderIris;
    DC1394Slider *sliderFocus;
    QPushButton *btnRefresh2;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabFormat;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *m_MenuMode;
    QLabel *label_2;
    QComboBox *m_MenuFPS;
    QLabel *label_3;
    QComboBox *m_MenuISO;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *m_MenuColorCoding;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLabel *labelMaxWidth;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLabel *labelMaxHeight;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_85;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *m_xdim;
    QSpacerItem *horizontalSpacer_86;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *m_ydim;
    QSpacerItem *horizontalSpacer_87;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_145;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpinBox *m_xoff;
    QSpacerItem *horizontalSpacer_146;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpinBox *m_yoff;
    QSpacerItem *horizontalSpacer_147;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *m_bpp;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QWidget *tabCamera;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QComboBox *m_MenuOpMode;
    QFrame *line_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *m_power;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *m_transmission;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *m_reset;
    QPushButton *m_defaults;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(363, 454);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabFeatures = new QWidget();
        tabFeatures->setObjectName(QStringLiteral("tabFeatures"));
        verticalLayout_3 = new QVBoxLayout(tabFeatures);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        sliderShutter = new DC1394Slider(tabFeatures);
        sliderShutter->setObjectName(QStringLiteral("sliderShutter"));
        sliderShutter->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(sliderShutter);

        sliderBrightness = new DC1394Slider(tabFeatures);
        sliderBrightness->setObjectName(QStringLiteral("sliderBrightness"));
        sliderBrightness->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(sliderBrightness);

        sliderGain = new DC1394Slider(tabFeatures);
        sliderGain->setObjectName(QStringLiteral("sliderGain"));
        sliderGain->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(sliderGain);

        sliderExposure = new DC1394Slider(tabFeatures);
        sliderExposure->setObjectName(QStringLiteral("sliderExposure"));
        sliderExposure->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(sliderExposure);

        sliderWB = new DC1394SliderWB(tabFeatures);
        sliderWB->setObjectName(QStringLiteral("sliderWB"));

        verticalLayout_3->addWidget(sliderWB);

        btnRefresh1 = new QPushButton(tabFeatures);
        btnRefresh1->setObjectName(QStringLiteral("btnRefresh1"));

        verticalLayout_3->addWidget(btnRefresh1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        tabWidget->addTab(tabFeatures, QString());
        tabFeaturesAdv = new QWidget();
        tabFeaturesAdv->setObjectName(QStringLiteral("tabFeaturesAdv"));
        verticalLayout_4 = new QVBoxLayout(tabFeaturesAdv);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        sliderSharpness = new DC1394Slider(tabFeaturesAdv);
        sliderSharpness->setObjectName(QStringLiteral("sliderSharpness"));
        sliderSharpness->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderSharpness);

        sliderHue = new DC1394Slider(tabFeaturesAdv);
        sliderHue->setObjectName(QStringLiteral("sliderHue"));
        sliderHue->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderHue);

        sliderSaturation = new DC1394Slider(tabFeaturesAdv);
        sliderSaturation->setObjectName(QStringLiteral("sliderSaturation"));
        sliderSaturation->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderSaturation);

        sliderGamma = new DC1394Slider(tabFeaturesAdv);
        sliderGamma->setObjectName(QStringLiteral("sliderGamma"));
        sliderGamma->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderGamma);

        sliderIris = new DC1394Slider(tabFeaturesAdv);
        sliderIris->setObjectName(QStringLiteral("sliderIris"));
        sliderIris->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderIris);

        sliderFocus = new DC1394Slider(tabFeaturesAdv);
        sliderFocus->setObjectName(QStringLiteral("sliderFocus"));
        sliderFocus->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(sliderFocus);

        btnRefresh2 = new QPushButton(tabFeaturesAdv);
        btnRefresh2->setObjectName(QStringLiteral("btnRefresh2"));

        verticalLayout_4->addWidget(btnRefresh2);

        verticalSpacer_3 = new QSpacerItem(20, 690, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tabFeaturesAdv, QString());
        tabFormat = new QWidget();
        tabFormat->setObjectName(QStringLiteral("tabFormat"));
        verticalLayout = new QVBoxLayout(tabFormat);
        verticalLayout->setSpacing(15);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(15);
        label = new QLabel(tabFormat);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        m_MenuMode = new QComboBox(tabFormat);
        m_MenuMode->setObjectName(QStringLiteral("m_MenuMode"));

        gridLayout_2->addWidget(m_MenuMode, 0, 1, 1, 1);

        label_2 = new QLabel(tabFormat);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        m_MenuFPS = new QComboBox(tabFormat);
        m_MenuFPS->setObjectName(QStringLiteral("m_MenuFPS"));

        gridLayout_2->addWidget(m_MenuFPS, 1, 1, 1, 1);

        label_3 = new QLabel(tabFormat);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        m_MenuISO = new QComboBox(tabFormat);
        m_MenuISO->setObjectName(QStringLiteral("m_MenuISO"));

        gridLayout_2->addWidget(m_MenuISO, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 10);
        gridLayout_2->setColumnStretch(1, 90);

        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        label_5 = new QLabel(tabFormat);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(tabFormat);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        m_MenuColorCoding = new QComboBox(tabFormat);
        m_MenuColorCoding->setObjectName(QStringLiteral("m_MenuColorCoding"));

        horizontalLayout->addWidget(m_MenuColorCoding);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 90);

        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(tabFormat);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(tabFormat);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        labelMaxWidth = new QLabel(tabFormat);
        labelMaxWidth->setObjectName(QStringLiteral("labelMaxWidth"));

        horizontalLayout_2->addWidget(labelMaxWidth);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(tabFormat);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_3->addWidget(label_11);

        labelMaxHeight = new QLabel(tabFormat);
        labelMaxHeight->setObjectName(QStringLiteral("labelMaxHeight"));

        horizontalLayout_3->addWidget(labelMaxHeight);


        horizontalLayout_11->addLayout(horizontalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_85 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_85);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_6 = new QLabel(tabFormat);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        m_xdim = new QSpinBox(tabFormat);
        m_xdim->setObjectName(QStringLiteral("m_xdim"));
        m_xdim->setMaximum(5000);

        horizontalLayout_4->addWidget(m_xdim);


        horizontalLayout_8->addLayout(horizontalLayout_4);

        horizontalSpacer_86 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_86);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(tabFormat);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        m_ydim = new QSpinBox(tabFormat);
        m_ydim->setObjectName(QStringLiteral("m_ydim"));
        m_ydim->setMaximum(5000);

        horizontalLayout_5->addWidget(m_ydim);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalSpacer_87 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_87);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_145 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_145);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(tabFormat);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        m_xoff = new QSpinBox(tabFormat);
        m_xoff->setObjectName(QStringLiteral("m_xoff"));
        m_xoff->setMinimum(-5000);
        m_xoff->setMaximum(5000);

        horizontalLayout_6->addWidget(m_xoff);


        horizontalLayout_14->addLayout(horizontalLayout_6);

        horizontalSpacer_146 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_146);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(tabFormat);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        m_yoff = new QSpinBox(tabFormat);
        m_yoff->setObjectName(QStringLiteral("m_yoff"));
        m_yoff->setMinimum(-5000);
        m_yoff->setMaximum(5000);

        horizontalLayout_7->addWidget(m_yoff);


        horizontalLayout_14->addLayout(horizontalLayout_7);

        horizontalSpacer_147 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_147);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        m_bpp = new QSpinBox(tabFormat);
        m_bpp->setObjectName(QStringLiteral("m_bpp"));
        m_bpp->setMaximum(100);

        horizontalLayout_9->addWidget(m_bpp);

        label_12 = new QLabel(tabFormat);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);


        horizontalLayout_12->addLayout(horizontalLayout_9);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabFormat, QString());
        tabCamera = new QWidget();
        tabCamera->setObjectName(QStringLiteral("tabCamera"));
        verticalLayout_2 = new QVBoxLayout(tabCamera);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(tabCamera);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        m_MenuOpMode = new QComboBox(tabCamera);
        m_MenuOpMode->setObjectName(QStringLiteral("m_MenuOpMode"));

        horizontalLayout_13->addWidget(m_MenuOpMode);

        horizontalLayout_13->setStretch(0, 10);
        horizontalLayout_13->setStretch(1, 90);

        verticalLayout_2->addLayout(horizontalLayout_13);

        line_4 = new QFrame(tabCamera);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        m_power = new QCheckBox(tabCamera);
        m_power->setObjectName(QStringLiteral("m_power"));

        gridLayout_3->addWidget(m_power, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        m_transmission = new QCheckBox(tabCamera);
        m_transmission->setObjectName(QStringLiteral("m_transmission"));

        gridLayout_3->addWidget(m_transmission, 0, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 0, 4, 1, 1);

        m_reset = new QPushButton(tabCamera);
        m_reset->setObjectName(QStringLiteral("m_reset"));

        gridLayout_3->addWidget(m_reset, 1, 1, 1, 1);

        m_defaults = new QPushButton(tabCamera);
        m_defaults->setObjectName(QStringLiteral("m_defaults"));

        gridLayout_3->addWidget(m_defaults, 1, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 293, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tabCamera, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnRefresh1->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFeatures), QApplication::translate("MainWindow", "Features", Q_NULLPTR));
        btnRefresh2->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFeaturesAdv), QApplication::translate("MainWindow", "Features (adv)", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Video Format", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Framerate", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "ISO Speed", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "FORMAT 7", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Color Coding", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Max Width:", Q_NULLPTR));
        labelMaxWidth->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Max Height:", Q_NULLPTR));
        labelMaxHeight->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Width", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "X off", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Y off", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "% size bytes per packet", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFormat), QApplication::translate("MainWindow", "Format", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Op. Mode", Q_NULLPTR));
        m_power->setText(QApplication::translate("MainWindow", "Camera Power", Q_NULLPTR));
        m_transmission->setText(QApplication::translate("MainWindow", "Transmission", Q_NULLPTR));
        m_reset->setText(QApplication::translate("MainWindow", "Reset Camera", Q_NULLPTR));
        m_defaults->setText(QApplication::translate("MainWindow", "Load Default Parameters", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabCamera), QApplication::translate("MainWindow", "Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
