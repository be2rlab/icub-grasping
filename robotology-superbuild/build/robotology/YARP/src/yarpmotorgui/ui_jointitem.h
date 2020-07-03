/********************************************************************************
** Form generated from reading UI file 'jointitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINTITEM_H
#define UI_JOINTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "jointitem.h"

QT_BEGIN_NAMESPACE

class Ui_JointItem
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QWidget *buttonsContainer;
    QVBoxLayout *verticalLayout;
    QComboBox *comboMode;
    QComboBox *comboInteraction;
    QPushButton *buttonHome;
    QPushButton *buttonIdle;
    QPushButton *buttonCalib;
    QPushButton *buttonRun;
    QPushButton *buttonPid;
    QStackedWidget *stackedWidget;
    QWidget *pageIdle;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *labelIdleCurrentUnits;
    QLineEdit *editIdleCurrent;
    QLabel *labelIdleCurrent;
    QLabel *labelIdleTorque;
    QLineEdit *editIdleSpeed;
    QLabel *labelIdleMotorPosUnits;
    QLabel *labelIdleSpeed;
    QLineEdit *editIdleMotorPos;
    QLabel *labelIdlevelUnits;
    QLabel *labelIdletrqUnits;
    QLineEdit *editIdleTorque;
    QLabel *labelIdleMotorPos;
    QLineEdit *editIdleJointPos;
    QLabel *labelIdleJointPos;
    QLabel *labelIdleposUnits;
    QWidget *pagePosition;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_19;
    SliderWithTarget *sliderTrajectoryPosition;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_18;
    SliderWithTarget *sliderTrajectoryVelocity;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *labelPositionCurrent;
    QLabel *labelPositionposUnits;
    QLabel *labelPositionvelUnits;
    QLabel *labelPositionJointPos;
    QLabel *labelPositionCurrentUnits;
    QLineEdit *editPositionCurrent;
    QLineEdit *editPositionSpeed;
    QLabel *labelPositiontrqUnits;
    QLabel *labelPositionMotorPosUnits;
    QLabel *labelPositionSpeed;
    QLabel *labelPositionMotorPos;
    QLineEdit *editPositionTorque;
    QLineEdit *editPositionMotorPos;
    QLineEdit *editPositionJointPos;
    QLabel *labelPositionTorque;
    QWidget *pagePositionDirect;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    SliderWithTarget *sliderDirectPosition;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_9;
    QGridLayout *gridLayout_4;
    QLineEdit *editPositionDirJointPos;
    QLabel *labelPositionDirTorque;
    QLabel *labelPositionDirCurrent;
    QLabel *labelPositionDirposUnits;
    QLabel *labelPositionDirtrqUnits;
    QLineEdit *editPositionDirSpeed;
    QLabel *labelPositionDirCurrentUnits;
    QLabel *labelPositionDirJointPos;
    QLabel *labelPositionDirSpeed;
    QLabel *labelPositionDirvelUnits;
    QLineEdit *editPositionDirCurrent;
    QLineEdit *editPositionDirTorque;
    QLabel *labelPositionDirMotorPos;
    QLineEdit *editPositionDirMotorPos;
    QLabel *labelPositionDirMotorPosUnits;
    QLineEdit *editPositionDirDuty;
    QLabel *labelPositionDirDutyUnits;
    QLabel *labelPositionDirDuty;
    QWidget *pageMixed;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_10;
    SliderWithTarget *sliderMixedPosition;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    SliderWithTarget *sliderMixedVelocity;
    QWidget *widget_13;
    QGridLayout *gridLayout_2;
    QLabel *labelMixedvelUnits;
    QLabel *labelMixedJointPos;
    QLineEdit *editMixedTorque;
    QLabel *labelMixedSpeed;
    QLineEdit *editMixedJointPos;
    QLineEdit *editMixedSpeed;
    QLabel *labelMixedTorque;
    QLabel *labelMixedtrqUnits;
    QLabel *labelMixedCurrent;
    QLineEdit *editMixedCurrent;
    QLabel *labelMixedCurrentUnits;
    QLabel *labelMixedposUnits;
    QLabel *labelMixedMotorPos;
    QLabel *labelMixedMotorPosUnits;
    QLineEdit *editMixedMotorPos;
    QWidget *pageVelocity;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_20;
    SliderWithTarget *sliderVelocityVelocity;
    QWidget *widget_16;
    QGridLayout *gridLayout_7;
    QLabel *labelVelocitytrqUnits;
    QLabel *labelVelocitySpeed;
    QLineEdit *editVelocitySpeed;
    QLabel *labelVelocityCurrent;
    QLineEdit *editVelocityTorque;
    QLabel *labelVelocityCurrentUnits;
    QLabel *labelVelocityTorque;
    QLineEdit *editVelocityCurrent;
    QLabel *labelVelocityvelUnits;
    QLineEdit *editVelocityJointPos;
    QLabel *labelVelocityposUnits;
    QLabel *labelVelocityJointPos;
    QLineEdit *editVelocityMotorPos;
    QLabel *labelVelocityMotorPosUnits;
    QLabel *labelVelocityMotorPos;
    QWidget *pageTorque;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_13;
    SliderWithTarget *sliderTorqueTorque;
    QWidget *widget_19;
    QGridLayout *gridLayout_5;
    QLabel *labelTorquetrqUnits;
    QLabel *labelTorqueCurrentUnits;
    QLabel *labelTorqueTorque;
    QLabel *labelTorqueSpeed;
    QLabel *labelTorquevelUnits;
    QLineEdit *editTorqueJointPos;
    QLineEdit *editTorqueCurrent;
    QLabel *labelTorqueCurrent;
    QLineEdit *editTorqueSpeed;
    QLineEdit *editTorqueTorque;
    QLabel *labelTorqueposUnits;
    QLabel *labelTorqueJointPos;
    QLabel *labelTorqueMotorPos;
    QLabel *labelTorqueMotorPosUnits;
    QLineEdit *editTorqueMotorPos;
    QLabel *labelTorqueDuty;
    QLineEdit *editTorqueDuty;
    QLabel *labelTorqueDutyUnits;
    QWidget *pagePWM;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_161;
    SliderWithTarget *sliderPWMOutput;
    QWidget *widget_22;
    QGridLayout *gridLayout_6;
    QLabel *labelPWMtrqUnits;
    QLineEdit *editPWMSpeed;
    QLabel *labelPWMTorque;
    QLineEdit *editPWMTorque;
    QLabel *labelPWMvelUnits;
    QLabel *labelPWMSpeed;
    QLabel *labelPWMJointPos;
    QLabel *labelPWMDutyUnits;
    QLineEdit *editPWMCurrent;
    QLabel *labelPWMDuty;
    QLineEdit *editPWMJointPos;
    QLabel *labelPWMposUnits;
    QLineEdit *editPWMDuty;
    QLabel *labelPWMCurrentUnits;
    QLabel *labelPWMCurrent;
    QLabel *labelPWMMotorPosUnits;
    QLabel *labelPWMMotorPos;
    QLineEdit *editPWMMotorPos;
    QWidget *pageCurrent;
    QVBoxLayout *verticalLayout_91;
    QGroupBox *groupBoxCurrent_11;
    QVBoxLayout *verticalLayout_16;
    SliderWithTarget *sliderCurrentOutput;
    QWidget *widget_221;
    QGridLayout *gridLayout_61;
    QLabel *labelCurrentvelUnits;
    QLabel *labelCurrentTorque;
    QLineEdit *editCurrentTorque;
    QLabel *labelCurrentposUnits;
    QLineEdit *editCurrentSpeed;
    QLineEdit *editCurrentCurrent;
    QLabel *labelCurrent_2;
    QLabel *labelCurrent;
    QLineEdit *editCurrentJointPos;
    QLabel *labelCurrenttrqUnits;
    QLabel *labelCurrentMotorPos;
    QLabel *labelCurrent_21;
    QLineEdit *editCurrentMotorPos;
    QLabel *labelCurrentSpeed;
    QLabel *labelCurrentMotorPosUnits;
    QLabel *labelCurrentDuty;
    QLabel *labelCurrentDutyUnits;
    QLineEdit *editCurrentDuty;

    void setupUi(QWidget *JointItem)
    {
        if (JointItem->objectName().isEmpty())
            JointItem->setObjectName(QStringLiteral("JointItem"));
        JointItem->setEnabled(true);
        JointItem->resize(329, 302);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JointItem->sizePolicy().hasHeightForWidth());
        JointItem->setSizePolicy(sizePolicy);
        JointItem->setMinimumSize(QSize(300, 302));
        JointItem->setMaximumSize(QSize(329, 302));
        JointItem->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(JointItem);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(JointItem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(300, 300));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        buttonsContainer = new QWidget(groupBox);
        buttonsContainer->setObjectName(QStringLiteral("buttonsContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonsContainer->sizePolicy().hasHeightForWidth());
        buttonsContainer->setSizePolicy(sizePolicy1);
        buttonsContainer->setMinimumSize(QSize(100, 0));
        buttonsContainer->setMaximumSize(QSize(100, 16777215));
        buttonsContainer->setStyleSheet(QLatin1String(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 80px;\n"
"	min-height:18px;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        verticalLayout = new QVBoxLayout(buttonsContainer);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboMode = new QComboBox(buttonsContainer);
        comboMode->setObjectName(QStringLiteral("comboMode"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboMode->sizePolicy().hasHeightForWidth());
        comboMode->setSizePolicy(sizePolicy2);
        comboMode->setMinimumSize(QSize(100, 0));
        comboMode->setMaximumSize(QSize(100, 16777215));
        comboMode->setMouseTracking(false);
        comboMode->setStyleSheet(QStringLiteral(""));
        comboMode->setEditable(false);

        verticalLayout->addWidget(comboMode);

        comboInteraction = new QComboBox(buttonsContainer);
        comboInteraction->setObjectName(QStringLiteral("comboInteraction"));
        sizePolicy2.setHeightForWidth(comboInteraction->sizePolicy().hasHeightForWidth());
        comboInteraction->setSizePolicy(sizePolicy2);
        comboInteraction->setMinimumSize(QSize(100, 0));
        comboInteraction->setMaximumSize(QSize(100, 16777215));
        comboInteraction->setMouseTracking(false);

        verticalLayout->addWidget(comboInteraction);

        buttonHome = new QPushButton(buttonsContainer);
        buttonHome->setObjectName(QStringLiteral("buttonHome"));
        sizePolicy2.setHeightForWidth(buttonHome->sizePolicy().hasHeightForWidth());
        buttonHome->setSizePolicy(sizePolicy2);
        buttonHome->setMinimumSize(QSize(82, 20));
        buttonHome->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonHome);

        buttonIdle = new QPushButton(buttonsContainer);
        buttonIdle->setObjectName(QStringLiteral("buttonIdle"));
        sizePolicy2.setHeightForWidth(buttonIdle->sizePolicy().hasHeightForWidth());
        buttonIdle->setSizePolicy(sizePolicy2);
        buttonIdle->setMinimumSize(QSize(82, 20));
        buttonIdle->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonIdle);

        buttonCalib = new QPushButton(buttonsContainer);
        buttonCalib->setObjectName(QStringLiteral("buttonCalib"));
        sizePolicy2.setHeightForWidth(buttonCalib->sizePolicy().hasHeightForWidth());
        buttonCalib->setSizePolicy(sizePolicy2);
        buttonCalib->setMinimumSize(QSize(82, 20));
        buttonCalib->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonCalib);

        buttonRun = new QPushButton(buttonsContainer);
        buttonRun->setObjectName(QStringLiteral("buttonRun"));
        sizePolicy2.setHeightForWidth(buttonRun->sizePolicy().hasHeightForWidth());
        buttonRun->setSizePolicy(sizePolicy2);
        buttonRun->setMinimumSize(QSize(82, 20));
        buttonRun->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonRun);

        buttonPid = new QPushButton(buttonsContainer);
        buttonPid->setObjectName(QStringLiteral("buttonPid"));
        sizePolicy2.setHeightForWidth(buttonPid->sizePolicy().hasHeightForWidth());
        buttonPid->setSizePolicy(sizePolicy2);
        buttonPid->setMinimumSize(QSize(82, 20));
        buttonPid->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonPid);


        horizontalLayout_3->addWidget(buttonsContainer);

        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        stackedWidget->setMinimumSize(QSize(204, 0));
        stackedWidget->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
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
        pageIdle = new QWidget();
        pageIdle->setObjectName(QStringLiteral("pageIdle"));
        verticalLayout_3 = new QVBoxLayout(pageIdle);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        widget_2 = new QWidget(pageIdle);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, -1, 2, -1);
        labelIdleCurrentUnits = new QLabel(widget_2);
        labelIdleCurrentUnits->setObjectName(QStringLiteral("labelIdleCurrentUnits"));

        gridLayout->addWidget(labelIdleCurrentUnits, 4, 2, 1, 1);

        editIdleCurrent = new QLineEdit(widget_2);
        editIdleCurrent->setObjectName(QStringLiteral("editIdleCurrent"));
        editIdleCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editIdleCurrent->setReadOnly(true);

        gridLayout->addWidget(editIdleCurrent, 4, 1, 1, 1);

        labelIdleCurrent = new QLabel(widget_2);
        labelIdleCurrent->setObjectName(QStringLiteral("labelIdleCurrent"));

        gridLayout->addWidget(labelIdleCurrent, 4, 0, 1, 1);

        labelIdleTorque = new QLabel(widget_2);
        labelIdleTorque->setObjectName(QStringLiteral("labelIdleTorque"));

        gridLayout->addWidget(labelIdleTorque, 1, 0, 1, 1);

        editIdleSpeed = new QLineEdit(widget_2);
        editIdleSpeed->setObjectName(QStringLiteral("editIdleSpeed"));
        editIdleSpeed->setMaximumSize(QSize(16777215, 16777215));
        editIdleSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editIdleSpeed->setReadOnly(true);

        gridLayout->addWidget(editIdleSpeed, 2, 1, 1, 1);

        labelIdleMotorPosUnits = new QLabel(widget_2);
        labelIdleMotorPosUnits->setObjectName(QStringLiteral("labelIdleMotorPosUnits"));

        gridLayout->addWidget(labelIdleMotorPosUnits, 3, 2, 1, 1);

        labelIdleSpeed = new QLabel(widget_2);
        labelIdleSpeed->setObjectName(QStringLiteral("labelIdleSpeed"));

        gridLayout->addWidget(labelIdleSpeed, 2, 0, 1, 1);

        editIdleMotorPos = new QLineEdit(widget_2);
        editIdleMotorPos->setObjectName(QStringLiteral("editIdleMotorPos"));
        editIdleMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editIdleMotorPos->setReadOnly(true);

        gridLayout->addWidget(editIdleMotorPos, 3, 1, 1, 1);

        labelIdlevelUnits = new QLabel(widget_2);
        labelIdlevelUnits->setObjectName(QStringLiteral("labelIdlevelUnits"));

        gridLayout->addWidget(labelIdlevelUnits, 2, 2, 1, 1);

        labelIdletrqUnits = new QLabel(widget_2);
        labelIdletrqUnits->setObjectName(QStringLiteral("labelIdletrqUnits"));

        gridLayout->addWidget(labelIdletrqUnits, 1, 2, 1, 1);

        editIdleTorque = new QLineEdit(widget_2);
        editIdleTorque->setObjectName(QStringLiteral("editIdleTorque"));
        editIdleTorque->setMaximumSize(QSize(16777215, 16777215));
        editIdleTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editIdleTorque->setReadOnly(true);

        gridLayout->addWidget(editIdleTorque, 1, 1, 1, 1);

        labelIdleMotorPos = new QLabel(widget_2);
        labelIdleMotorPos->setObjectName(QStringLiteral("labelIdleMotorPos"));

        gridLayout->addWidget(labelIdleMotorPos, 3, 0, 1, 1);

        editIdleJointPos = new QLineEdit(widget_2);
        editIdleJointPos->setObjectName(QStringLiteral("editIdleJointPos"));
        editIdleJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editIdleJointPos->setReadOnly(true);

        gridLayout->addWidget(editIdleJointPos, 0, 1, 1, 1);

        labelIdleJointPos = new QLabel(widget_2);
        labelIdleJointPos->setObjectName(QStringLiteral("labelIdleJointPos"));

        gridLayout->addWidget(labelIdleJointPos, 0, 0, 1, 1);

        labelIdleposUnits = new QLabel(widget_2);
        labelIdleposUnits->setObjectName(QStringLiteral("labelIdleposUnits"));

        gridLayout->addWidget(labelIdleposUnits, 0, 2, 1, 1);


        verticalLayout_3->addWidget(widget_2);

        stackedWidget->addWidget(pageIdle);
        pagePosition = new QWidget();
        pagePosition->setObjectName(QStringLiteral("pagePosition"));
        verticalLayout_2 = new QVBoxLayout(pagePosition);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        groupBox_13 = new QGroupBox(pagePosition);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy4);
        groupBox_13->setMinimumSize(QSize(0, 0));
        verticalLayout_19 = new QVBoxLayout(groupBox_13);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(4, 0, 4, 2);
        sliderTrajectoryPosition = new SliderWithTarget(groupBox_13);
        sliderTrajectoryPosition->setObjectName(QStringLiteral("sliderTrajectoryPosition"));
        sizePolicy2.setHeightForWidth(sliderTrajectoryPosition->sizePolicy().hasHeightForWidth());
        sliderTrajectoryPosition->setSizePolicy(sizePolicy2);
        sliderTrajectoryPosition->setMinimumSize(QSize(0, 40));
        sliderTrajectoryPosition->setMouseTracking(false);
        sliderTrajectoryPosition->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderTrajectoryPosition->setMinimum(0);
        sliderTrajectoryPosition->setMaximum(100);
        sliderTrajectoryPosition->setValue(0);
        sliderTrajectoryPosition->setOrientation(Qt::Horizontal);

        verticalLayout_19->addWidget(sliderTrajectoryPosition);

        widget_4 = new QWidget(groupBox_13);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_9 = new QHBoxLayout(widget_4);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);

        verticalLayout_19->addWidget(widget_4);


        verticalLayout_2->addWidget(groupBox_13);

        groupBox_12 = new QGroupBox(pagePosition);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        sizePolicy4.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy4);
        verticalLayout_18 = new QVBoxLayout(groupBox_12);
        verticalLayout_18->setSpacing(2);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(4, 0, 4, 2);
        sliderTrajectoryVelocity = new SliderWithTarget(groupBox_12);
        sliderTrajectoryVelocity->setObjectName(QStringLiteral("sliderTrajectoryVelocity"));
        sizePolicy2.setHeightForWidth(sliderTrajectoryVelocity->sizePolicy().hasHeightForWidth());
        sliderTrajectoryVelocity->setSizePolicy(sizePolicy2);
        sliderTrajectoryVelocity->setMinimumSize(QSize(0, 40));
        sliderTrajectoryVelocity->setMouseTracking(false);
        sliderTrajectoryVelocity->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderTrajectoryVelocity->setMinimum(1);
        sliderTrajectoryVelocity->setMaximum(100);
        sliderTrajectoryVelocity->setValue(10);
        sliderTrajectoryVelocity->setOrientation(Qt::Horizontal);

        verticalLayout_18->addWidget(sliderTrajectoryVelocity);


        verticalLayout_2->addWidget(groupBox_12);

        widget_6 = new QWidget(pagePosition);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        labelPositionCurrent = new QLabel(widget_6);
        labelPositionCurrent->setObjectName(QStringLiteral("labelPositionCurrent"));

        gridLayout_3->addWidget(labelPositionCurrent, 5, 0, 1, 1);

        labelPositionposUnits = new QLabel(widget_6);
        labelPositionposUnits->setObjectName(QStringLiteral("labelPositionposUnits"));

        gridLayout_3->addWidget(labelPositionposUnits, 0, 2, 1, 1);

        labelPositionvelUnits = new QLabel(widget_6);
        labelPositionvelUnits->setObjectName(QStringLiteral("labelPositionvelUnits"));

        gridLayout_3->addWidget(labelPositionvelUnits, 3, 2, 1, 1);

        labelPositionJointPos = new QLabel(widget_6);
        labelPositionJointPos->setObjectName(QStringLiteral("labelPositionJointPos"));

        gridLayout_3->addWidget(labelPositionJointPos, 0, 0, 1, 1);

        labelPositionCurrentUnits = new QLabel(widget_6);
        labelPositionCurrentUnits->setObjectName(QStringLiteral("labelPositionCurrentUnits"));

        gridLayout_3->addWidget(labelPositionCurrentUnits, 5, 2, 1, 1);

        editPositionCurrent = new QLineEdit(widget_6);
        editPositionCurrent->setObjectName(QStringLiteral("editPositionCurrent"));
        editPositionCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionCurrent->setReadOnly(true);

        gridLayout_3->addWidget(editPositionCurrent, 5, 1, 1, 1);

        editPositionSpeed = new QLineEdit(widget_6);
        editPositionSpeed->setObjectName(QStringLiteral("editPositionSpeed"));
        editPositionSpeed->setMaximumSize(QSize(16777215, 16777215));
        editPositionSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionSpeed->setReadOnly(true);

        gridLayout_3->addWidget(editPositionSpeed, 3, 1, 1, 1);

        labelPositiontrqUnits = new QLabel(widget_6);
        labelPositiontrqUnits->setObjectName(QStringLiteral("labelPositiontrqUnits"));

        gridLayout_3->addWidget(labelPositiontrqUnits, 1, 2, 1, 1);

        labelPositionMotorPosUnits = new QLabel(widget_6);
        labelPositionMotorPosUnits->setObjectName(QStringLiteral("labelPositionMotorPosUnits"));

        gridLayout_3->addWidget(labelPositionMotorPosUnits, 4, 2, 1, 1);

        labelPositionSpeed = new QLabel(widget_6);
        labelPositionSpeed->setObjectName(QStringLiteral("labelPositionSpeed"));

        gridLayout_3->addWidget(labelPositionSpeed, 3, 0, 1, 1);

        labelPositionMotorPos = new QLabel(widget_6);
        labelPositionMotorPos->setObjectName(QStringLiteral("labelPositionMotorPos"));

        gridLayout_3->addWidget(labelPositionMotorPos, 4, 0, 1, 1);

        editPositionTorque = new QLineEdit(widget_6);
        editPositionTorque->setObjectName(QStringLiteral("editPositionTorque"));
        editPositionTorque->setMaximumSize(QSize(16777215, 16777215));
        editPositionTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionTorque->setReadOnly(true);

        gridLayout_3->addWidget(editPositionTorque, 1, 1, 1, 1);

        editPositionMotorPos = new QLineEdit(widget_6);
        editPositionMotorPos->setObjectName(QStringLiteral("editPositionMotorPos"));
        editPositionMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionMotorPos->setReadOnly(true);

        gridLayout_3->addWidget(editPositionMotorPos, 4, 1, 1, 1);

        editPositionJointPos = new QLineEdit(widget_6);
        editPositionJointPos->setObjectName(QStringLiteral("editPositionJointPos"));
        editPositionJointPos->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        editPositionJointPos->setReadOnly(true);

        gridLayout_3->addWidget(editPositionJointPos, 0, 1, 1, 1);

        labelPositionTorque = new QLabel(widget_6);
        labelPositionTorque->setObjectName(QStringLiteral("labelPositionTorque"));

        gridLayout_3->addWidget(labelPositionTorque, 1, 0, 1, 1);


        verticalLayout_2->addWidget(widget_6);

        stackedWidget->addWidget(pagePosition);
        widget_6->raise();
        groupBox_12->raise();
        groupBox_13->raise();
        pagePositionDirect = new QWidget();
        pagePositionDirect->setObjectName(QStringLiteral("pagePositionDirect"));
        verticalLayout_4 = new QVBoxLayout(pagePositionDirect);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        groupBox_5 = new QGroupBox(pagePositionDirect);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 0, 4, 0);
        sliderDirectPosition = new SliderWithTarget(groupBox_5);
        sliderDirectPosition->setObjectName(QStringLiteral("sliderDirectPosition"));
        sliderDirectPosition->setMinimumSize(QSize(0, 40));
        sliderDirectPosition->setMouseTracking(false);
        sliderDirectPosition->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderDirectPosition->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(sliderDirectPosition);

        widget_8 = new QWidget(groupBox_5);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);

        verticalLayout_6->addWidget(widget_8);


        verticalLayout_4->addWidget(groupBox_5);

        widget_9 = new QWidget(pagePositionDirect);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        gridLayout_4 = new QGridLayout(widget_9);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(2, -1, 2, -1);
        editPositionDirJointPos = new QLineEdit(widget_9);
        editPositionDirJointPos->setObjectName(QStringLiteral("editPositionDirJointPos"));
        editPositionDirJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionDirJointPos->setReadOnly(true);

        gridLayout_4->addWidget(editPositionDirJointPos, 0, 1, 1, 1);

        labelPositionDirTorque = new QLabel(widget_9);
        labelPositionDirTorque->setObjectName(QStringLiteral("labelPositionDirTorque"));

        gridLayout_4->addWidget(labelPositionDirTorque, 2, 0, 1, 1);

        labelPositionDirCurrent = new QLabel(widget_9);
        labelPositionDirCurrent->setObjectName(QStringLiteral("labelPositionDirCurrent"));

        gridLayout_4->addWidget(labelPositionDirCurrent, 5, 0, 1, 1);

        labelPositionDirposUnits = new QLabel(widget_9);
        labelPositionDirposUnits->setObjectName(QStringLiteral("labelPositionDirposUnits"));

        gridLayout_4->addWidget(labelPositionDirposUnits, 0, 2, 1, 1);

        labelPositionDirtrqUnits = new QLabel(widget_9);
        labelPositionDirtrqUnits->setObjectName(QStringLiteral("labelPositionDirtrqUnits"));

        gridLayout_4->addWidget(labelPositionDirtrqUnits, 2, 2, 1, 1);

        editPositionDirSpeed = new QLineEdit(widget_9);
        editPositionDirSpeed->setObjectName(QStringLiteral("editPositionDirSpeed"));
        editPositionDirSpeed->setMaximumSize(QSize(16777215, 16777215));
        editPositionDirSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionDirSpeed->setReadOnly(true);

        gridLayout_4->addWidget(editPositionDirSpeed, 3, 1, 1, 1);

        labelPositionDirCurrentUnits = new QLabel(widget_9);
        labelPositionDirCurrentUnits->setObjectName(QStringLiteral("labelPositionDirCurrentUnits"));

        gridLayout_4->addWidget(labelPositionDirCurrentUnits, 5, 2, 1, 1);

        labelPositionDirJointPos = new QLabel(widget_9);
        labelPositionDirJointPos->setObjectName(QStringLiteral("labelPositionDirJointPos"));

        gridLayout_4->addWidget(labelPositionDirJointPos, 0, 0, 1, 1);

        labelPositionDirSpeed = new QLabel(widget_9);
        labelPositionDirSpeed->setObjectName(QStringLiteral("labelPositionDirSpeed"));

        gridLayout_4->addWidget(labelPositionDirSpeed, 3, 0, 1, 1);

        labelPositionDirvelUnits = new QLabel(widget_9);
        labelPositionDirvelUnits->setObjectName(QStringLiteral("labelPositionDirvelUnits"));

        gridLayout_4->addWidget(labelPositionDirvelUnits, 3, 2, 1, 1);

        editPositionDirCurrent = new QLineEdit(widget_9);
        editPositionDirCurrent->setObjectName(QStringLiteral("editPositionDirCurrent"));
        editPositionDirCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionDirCurrent->setReadOnly(true);

        gridLayout_4->addWidget(editPositionDirCurrent, 5, 1, 1, 1);

        editPositionDirTorque = new QLineEdit(widget_9);
        editPositionDirTorque->setObjectName(QStringLiteral("editPositionDirTorque"));
        editPositionDirTorque->setMaximumSize(QSize(16777215, 16777215));
        editPositionDirTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPositionDirTorque->setReadOnly(true);

        gridLayout_4->addWidget(editPositionDirTorque, 2, 1, 1, 1);

        labelPositionDirMotorPos = new QLabel(widget_9);
        labelPositionDirMotorPos->setObjectName(QStringLiteral("labelPositionDirMotorPos"));

        gridLayout_4->addWidget(labelPositionDirMotorPos, 4, 0, 1, 1);

        editPositionDirMotorPos = new QLineEdit(widget_9);
        editPositionDirMotorPos->setObjectName(QStringLiteral("editPositionDirMotorPos"));
        editPositionDirMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(editPositionDirMotorPos, 4, 1, 1, 1);

        labelPositionDirMotorPosUnits = new QLabel(widget_9);
        labelPositionDirMotorPosUnits->setObjectName(QStringLiteral("labelPositionDirMotorPosUnits"));

        gridLayout_4->addWidget(labelPositionDirMotorPosUnits, 4, 2, 1, 1);

        editPositionDirDuty = new QLineEdit(widget_9);
        editPositionDirDuty->setObjectName(QStringLiteral("editPositionDirDuty"));
        editPositionDirDuty->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(editPositionDirDuty, 1, 1, 1, 1);

        labelPositionDirDutyUnits = new QLabel(widget_9);
        labelPositionDirDutyUnits->setObjectName(QStringLiteral("labelPositionDirDutyUnits"));

        gridLayout_4->addWidget(labelPositionDirDutyUnits, 1, 2, 1, 1);

        labelPositionDirDuty = new QLabel(widget_9);
        labelPositionDirDuty->setObjectName(QStringLiteral("labelPositionDirDuty"));

        gridLayout_4->addWidget(labelPositionDirDuty, 1, 0, 1, 1);


        verticalLayout_4->addWidget(widget_9);

        stackedWidget->addWidget(pagePositionDirect);
        widget_9->raise();
        groupBox_5->raise();
        pageMixed = new QWidget();
        pageMixed->setObjectName(QStringLiteral("pageMixed"));
        verticalLayout_11 = new QVBoxLayout(pageMixed);
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(2, 2, 2, 2);
        groupBox_7 = new QGroupBox(pageMixed);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy5);
        groupBox_7->setMinimumSize(QSize(0, 0));
        verticalLayout_10 = new QVBoxLayout(groupBox_7);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(4, 0, 4, 2);
        sliderMixedPosition = new SliderWithTarget(groupBox_7);
        sliderMixedPosition->setObjectName(QStringLiteral("sliderMixedPosition"));
        sliderMixedPosition->setMinimumSize(QSize(0, 40));
        sliderMixedPosition->setBaseSize(QSize(0, 0));
        sliderMixedPosition->setMouseTracking(false);
        sliderMixedPosition->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderMixedPosition->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(sliderMixedPosition);

        widget_11 = new QWidget(groupBox_7);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_2 = new QHBoxLayout(widget_11);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_10->addWidget(widget_11);


        verticalLayout_11->addWidget(groupBox_7);

        groupBox_6 = new QGroupBox(pageMixed);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy5.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy5);
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(4, 0, 4, 2);
        sliderMixedVelocity = new SliderWithTarget(groupBox_6);
        sliderMixedVelocity->setObjectName(QStringLiteral("sliderMixedVelocity"));
        sliderMixedVelocity->setMinimumSize(QSize(0, 40));
        sliderMixedVelocity->setMouseTracking(false);
        sliderMixedVelocity->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderMixedVelocity->setMinimum(1);
        sliderMixedVelocity->setMaximum(100);
        sliderMixedVelocity->setValue(10);
        sliderMixedVelocity->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(sliderMixedVelocity);


        verticalLayout_11->addWidget(groupBox_6);

        widget_13 = new QWidget(pageMixed);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        gridLayout_2 = new QGridLayout(widget_13);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        labelMixedvelUnits = new QLabel(widget_13);
        labelMixedvelUnits->setObjectName(QStringLiteral("labelMixedvelUnits"));

        gridLayout_2->addWidget(labelMixedvelUnits, 2, 2, 1, 1);

        labelMixedJointPos = new QLabel(widget_13);
        labelMixedJointPos->setObjectName(QStringLiteral("labelMixedJointPos"));

        gridLayout_2->addWidget(labelMixedJointPos, 0, 0, 1, 1);

        editMixedTorque = new QLineEdit(widget_13);
        editMixedTorque->setObjectName(QStringLiteral("editMixedTorque"));
        editMixedTorque->setMaximumSize(QSize(16777215, 16777215));
        editMixedTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editMixedTorque->setReadOnly(true);

        gridLayout_2->addWidget(editMixedTorque, 1, 1, 1, 1);

        labelMixedSpeed = new QLabel(widget_13);
        labelMixedSpeed->setObjectName(QStringLiteral("labelMixedSpeed"));

        gridLayout_2->addWidget(labelMixedSpeed, 2, 0, 1, 1);

        editMixedJointPos = new QLineEdit(widget_13);
        editMixedJointPos->setObjectName(QStringLiteral("editMixedJointPos"));
        editMixedJointPos->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        editMixedJointPos->setReadOnly(true);

        gridLayout_2->addWidget(editMixedJointPos, 0, 1, 1, 1);

        editMixedSpeed = new QLineEdit(widget_13);
        editMixedSpeed->setObjectName(QStringLiteral("editMixedSpeed"));
        editMixedSpeed->setMaximumSize(QSize(16777215, 16777215));
        editMixedSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editMixedSpeed->setReadOnly(true);

        gridLayout_2->addWidget(editMixedSpeed, 2, 1, 1, 1);

        labelMixedTorque = new QLabel(widget_13);
        labelMixedTorque->setObjectName(QStringLiteral("labelMixedTorque"));

        gridLayout_2->addWidget(labelMixedTorque, 1, 0, 1, 1);

        labelMixedtrqUnits = new QLabel(widget_13);
        labelMixedtrqUnits->setObjectName(QStringLiteral("labelMixedtrqUnits"));

        gridLayout_2->addWidget(labelMixedtrqUnits, 1, 2, 1, 1);

        labelMixedCurrent = new QLabel(widget_13);
        labelMixedCurrent->setObjectName(QStringLiteral("labelMixedCurrent"));

        gridLayout_2->addWidget(labelMixedCurrent, 4, 0, 1, 1);

        editMixedCurrent = new QLineEdit(widget_13);
        editMixedCurrent->setObjectName(QStringLiteral("editMixedCurrent"));
        editMixedCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editMixedCurrent->setReadOnly(true);

        gridLayout_2->addWidget(editMixedCurrent, 4, 1, 1, 1);

        labelMixedCurrentUnits = new QLabel(widget_13);
        labelMixedCurrentUnits->setObjectName(QStringLiteral("labelMixedCurrentUnits"));

        gridLayout_2->addWidget(labelMixedCurrentUnits, 4, 2, 1, 1);

        labelMixedposUnits = new QLabel(widget_13);
        labelMixedposUnits->setObjectName(QStringLiteral("labelMixedposUnits"));

        gridLayout_2->addWidget(labelMixedposUnits, 0, 2, 1, 1);

        labelMixedMotorPos = new QLabel(widget_13);
        labelMixedMotorPos->setObjectName(QStringLiteral("labelMixedMotorPos"));

        gridLayout_2->addWidget(labelMixedMotorPos, 3, 0, 1, 1);

        labelMixedMotorPosUnits = new QLabel(widget_13);
        labelMixedMotorPosUnits->setObjectName(QStringLiteral("labelMixedMotorPosUnits"));

        gridLayout_2->addWidget(labelMixedMotorPosUnits, 3, 2, 1, 1);

        editMixedMotorPos = new QLineEdit(widget_13);
        editMixedMotorPos->setObjectName(QStringLiteral("editMixedMotorPos"));
        editMixedMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(editMixedMotorPos, 3, 1, 1, 1);


        verticalLayout_11->addWidget(widget_13);

        stackedWidget->addWidget(pageMixed);
        pageVelocity = new QWidget();
        pageVelocity->setObjectName(QStringLiteral("pageVelocity"));
        verticalLayout_14 = new QVBoxLayout(pageVelocity);
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(2, 2, 2, 2);
        groupBox_15 = new QGroupBox(pageVelocity);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        verticalLayout_20 = new QVBoxLayout(groupBox_15);
        verticalLayout_20->setSpacing(2);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(4, 0, 4, 0);
        sliderVelocityVelocity = new SliderWithTarget(groupBox_15);
        sliderVelocityVelocity->setObjectName(QStringLiteral("sliderVelocityVelocity"));
        sliderVelocityVelocity->setMinimumSize(QSize(0, 40));
        sliderVelocityVelocity->setMouseTracking(false);
        sliderVelocityVelocity->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderVelocityVelocity->setMinimum(-30);
        sliderVelocityVelocity->setMaximum(30);
        sliderVelocityVelocity->setSingleStep(1);
        sliderVelocityVelocity->setOrientation(Qt::Horizontal);

        verticalLayout_20->addWidget(sliderVelocityVelocity);


        verticalLayout_14->addWidget(groupBox_15);

        widget_16 = new QWidget(pageVelocity);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        gridLayout_7 = new QGridLayout(widget_16);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(2, -1, 2, -1);
        labelVelocitytrqUnits = new QLabel(widget_16);
        labelVelocitytrqUnits->setObjectName(QStringLiteral("labelVelocitytrqUnits"));

        gridLayout_7->addWidget(labelVelocitytrqUnits, 1, 2, 1, 1);

        labelVelocitySpeed = new QLabel(widget_16);
        labelVelocitySpeed->setObjectName(QStringLiteral("labelVelocitySpeed"));

        gridLayout_7->addWidget(labelVelocitySpeed, 2, 0, 1, 1);

        editVelocitySpeed = new QLineEdit(widget_16);
        editVelocitySpeed->setObjectName(QStringLiteral("editVelocitySpeed"));
        editVelocitySpeed->setMaximumSize(QSize(16777215, 16777215));
        editVelocitySpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editVelocitySpeed->setReadOnly(true);

        gridLayout_7->addWidget(editVelocitySpeed, 2, 1, 1, 1);

        labelVelocityCurrent = new QLabel(widget_16);
        labelVelocityCurrent->setObjectName(QStringLiteral("labelVelocityCurrent"));

        gridLayout_7->addWidget(labelVelocityCurrent, 4, 0, 1, 1);

        editVelocityTorque = new QLineEdit(widget_16);
        editVelocityTorque->setObjectName(QStringLiteral("editVelocityTorque"));
        editVelocityTorque->setMaximumSize(QSize(16777215, 16777215));
        editVelocityTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editVelocityTorque->setReadOnly(true);

        gridLayout_7->addWidget(editVelocityTorque, 1, 1, 1, 1);

        labelVelocityCurrentUnits = new QLabel(widget_16);
        labelVelocityCurrentUnits->setObjectName(QStringLiteral("labelVelocityCurrentUnits"));

        gridLayout_7->addWidget(labelVelocityCurrentUnits, 4, 2, 1, 1);

        labelVelocityTorque = new QLabel(widget_16);
        labelVelocityTorque->setObjectName(QStringLiteral("labelVelocityTorque"));

        gridLayout_7->addWidget(labelVelocityTorque, 1, 0, 1, 1);

        editVelocityCurrent = new QLineEdit(widget_16);
        editVelocityCurrent->setObjectName(QStringLiteral("editVelocityCurrent"));
        editVelocityCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editVelocityCurrent->setReadOnly(true);

        gridLayout_7->addWidget(editVelocityCurrent, 4, 1, 1, 1);

        labelVelocityvelUnits = new QLabel(widget_16);
        labelVelocityvelUnits->setObjectName(QStringLiteral("labelVelocityvelUnits"));

        gridLayout_7->addWidget(labelVelocityvelUnits, 2, 2, 1, 1);

        editVelocityJointPos = new QLineEdit(widget_16);
        editVelocityJointPos->setObjectName(QStringLiteral("editVelocityJointPos"));
        editVelocityJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editVelocityJointPos->setReadOnly(true);

        gridLayout_7->addWidget(editVelocityJointPos, 0, 1, 1, 1);

        labelVelocityposUnits = new QLabel(widget_16);
        labelVelocityposUnits->setObjectName(QStringLiteral("labelVelocityposUnits"));

        gridLayout_7->addWidget(labelVelocityposUnits, 0, 2, 1, 1);

        labelVelocityJointPos = new QLabel(widget_16);
        labelVelocityJointPos->setObjectName(QStringLiteral("labelVelocityJointPos"));

        gridLayout_7->addWidget(labelVelocityJointPos, 0, 0, 1, 1);

        editVelocityMotorPos = new QLineEdit(widget_16);
        editVelocityMotorPos->setObjectName(QStringLiteral("editVelocityMotorPos"));
        editVelocityMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(editVelocityMotorPos, 3, 1, 1, 1);

        labelVelocityMotorPosUnits = new QLabel(widget_16);
        labelVelocityMotorPosUnits->setObjectName(QStringLiteral("labelVelocityMotorPosUnits"));

        gridLayout_7->addWidget(labelVelocityMotorPosUnits, 3, 2, 1, 1);

        labelVelocityMotorPos = new QLabel(widget_16);
        labelVelocityMotorPos->setObjectName(QStringLiteral("labelVelocityMotorPos"));

        gridLayout_7->addWidget(labelVelocityMotorPos, 3, 0, 1, 1);


        verticalLayout_14->addWidget(widget_16);

        stackedWidget->addWidget(pageVelocity);
        pageTorque = new QWidget();
        pageTorque->setObjectName(QStringLiteral("pageTorque"));
        verticalLayout_7 = new QVBoxLayout(pageTorque);
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        groupBox_9 = new QGroupBox(pageTorque);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_13 = new QVBoxLayout(groupBox_9);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(4, 0, 4, 0);
        sliderTorqueTorque = new SliderWithTarget(groupBox_9);
        sliderTorqueTorque->setObjectName(QStringLiteral("sliderTorqueTorque"));
        sliderTorqueTorque->setMinimumSize(QSize(0, 40));
        sliderTorqueTorque->setMouseTracking(false);
        sliderTorqueTorque->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderTorqueTorque->setMinimum(-50);
        sliderTorqueTorque->setMaximum(50);
        sliderTorqueTorque->setOrientation(Qt::Horizontal);

        verticalLayout_13->addWidget(sliderTorqueTorque);


        verticalLayout_7->addWidget(groupBox_9);

        widget_19 = new QWidget(pageTorque);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        gridLayout_5 = new QGridLayout(widget_19);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, -1, 2, -1);
        labelTorquetrqUnits = new QLabel(widget_19);
        labelTorquetrqUnits->setObjectName(QStringLiteral("labelTorquetrqUnits"));

        gridLayout_5->addWidget(labelTorquetrqUnits, 0, 2, 1, 1);

        labelTorqueCurrentUnits = new QLabel(widget_19);
        labelTorqueCurrentUnits->setObjectName(QStringLiteral("labelTorqueCurrentUnits"));

        gridLayout_5->addWidget(labelTorqueCurrentUnits, 6, 2, 1, 1);

        labelTorqueTorque = new QLabel(widget_19);
        labelTorqueTorque->setObjectName(QStringLiteral("labelTorqueTorque"));
        labelTorqueTorque->setEnabled(true);

        gridLayout_5->addWidget(labelTorqueTorque, 0, 0, 1, 1);

        labelTorqueSpeed = new QLabel(widget_19);
        labelTorqueSpeed->setObjectName(QStringLiteral("labelTorqueSpeed"));

        gridLayout_5->addWidget(labelTorqueSpeed, 4, 0, 1, 1);

        labelTorquevelUnits = new QLabel(widget_19);
        labelTorquevelUnits->setObjectName(QStringLiteral("labelTorquevelUnits"));

        gridLayout_5->addWidget(labelTorquevelUnits, 4, 2, 1, 1);

        editTorqueJointPos = new QLineEdit(widget_19);
        editTorqueJointPos->setObjectName(QStringLiteral("editTorqueJointPos"));
        editTorqueJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editTorqueJointPos->setReadOnly(true);

        gridLayout_5->addWidget(editTorqueJointPos, 2, 1, 1, 1);

        editTorqueCurrent = new QLineEdit(widget_19);
        editTorqueCurrent->setObjectName(QStringLiteral("editTorqueCurrent"));
        editTorqueCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editTorqueCurrent->setReadOnly(true);

        gridLayout_5->addWidget(editTorqueCurrent, 6, 1, 1, 1);

        labelTorqueCurrent = new QLabel(widget_19);
        labelTorqueCurrent->setObjectName(QStringLiteral("labelTorqueCurrent"));

        gridLayout_5->addWidget(labelTorqueCurrent, 6, 0, 1, 1);

        editTorqueSpeed = new QLineEdit(widget_19);
        editTorqueSpeed->setObjectName(QStringLiteral("editTorqueSpeed"));
        editTorqueSpeed->setMaximumSize(QSize(16777215, 16777215));
        editTorqueSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editTorqueSpeed->setReadOnly(true);

        gridLayout_5->addWidget(editTorqueSpeed, 4, 1, 1, 1);

        editTorqueTorque = new QLineEdit(widget_19);
        editTorqueTorque->setObjectName(QStringLiteral("editTorqueTorque"));
        editTorqueTorque->setMaximumSize(QSize(16777215, 16777215));
        editTorqueTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editTorqueTorque->setReadOnly(true);

        gridLayout_5->addWidget(editTorqueTorque, 0, 1, 1, 1);

        labelTorqueposUnits = new QLabel(widget_19);
        labelTorqueposUnits->setObjectName(QStringLiteral("labelTorqueposUnits"));

        gridLayout_5->addWidget(labelTorqueposUnits, 2, 2, 1, 1);

        labelTorqueJointPos = new QLabel(widget_19);
        labelTorqueJointPos->setObjectName(QStringLiteral("labelTorqueJointPos"));

        gridLayout_5->addWidget(labelTorqueJointPos, 2, 0, 1, 1);

        labelTorqueMotorPos = new QLabel(widget_19);
        labelTorqueMotorPos->setObjectName(QStringLiteral("labelTorqueMotorPos"));

        gridLayout_5->addWidget(labelTorqueMotorPos, 5, 0, 1, 1);

        labelTorqueMotorPosUnits = new QLabel(widget_19);
        labelTorqueMotorPosUnits->setObjectName(QStringLiteral("labelTorqueMotorPosUnits"));

        gridLayout_5->addWidget(labelTorqueMotorPosUnits, 5, 2, 1, 1);

        editTorqueMotorPos = new QLineEdit(widget_19);
        editTorqueMotorPos->setObjectName(QStringLiteral("editTorqueMotorPos"));
        editTorqueMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(editTorqueMotorPos, 5, 1, 1, 1);

        labelTorqueDuty = new QLabel(widget_19);
        labelTorqueDuty->setObjectName(QStringLiteral("labelTorqueDuty"));

        gridLayout_5->addWidget(labelTorqueDuty, 1, 0, 1, 1);

        editTorqueDuty = new QLineEdit(widget_19);
        editTorqueDuty->setObjectName(QStringLiteral("editTorqueDuty"));
        editTorqueDuty->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(editTorqueDuty, 1, 1, 1, 1);

        labelTorqueDutyUnits = new QLabel(widget_19);
        labelTorqueDutyUnits->setObjectName(QStringLiteral("labelTorqueDutyUnits"));

        gridLayout_5->addWidget(labelTorqueDutyUnits, 1, 2, 1, 1);


        verticalLayout_7->addWidget(widget_19);

        stackedWidget->addWidget(pageTorque);
        pagePWM = new QWidget();
        pagePWM->setObjectName(QStringLiteral("pagePWM"));
        verticalLayout_9 = new QVBoxLayout(pagePWM);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        groupBox_11 = new QGroupBox(pagePWM);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        verticalLayout_161 = new QVBoxLayout(groupBox_11);
        verticalLayout_161->setSpacing(2);
        verticalLayout_161->setObjectName(QStringLiteral("verticalLayout_161"));
        verticalLayout_161->setContentsMargins(4, 0, 4, 0);
        sliderPWMOutput = new SliderWithTarget(groupBox_11);
        sliderPWMOutput->setObjectName(QStringLiteral("sliderPWMOutput"));
        sliderPWMOutput->setMinimumSize(QSize(0, 40));
        sliderPWMOutput->setBaseSize(QSize(0, 40));
        sliderPWMOutput->setMouseTracking(false);
        sliderPWMOutput->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderPWMOutput->setMinimum(-50);
        sliderPWMOutput->setMaximum(50);
        sliderPWMOutput->setOrientation(Qt::Horizontal);

        verticalLayout_161->addWidget(sliderPWMOutput);


        verticalLayout_9->addWidget(groupBox_11);

        widget_22 = new QWidget(pagePWM);
        widget_22->setObjectName(QStringLiteral("widget_22"));
        gridLayout_6 = new QGridLayout(widget_22);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(2, -1, 2, -1);
        labelPWMtrqUnits = new QLabel(widget_22);
        labelPWMtrqUnits->setObjectName(QStringLiteral("labelPWMtrqUnits"));

        gridLayout_6->addWidget(labelPWMtrqUnits, 2, 2, 1, 1);

        editPWMSpeed = new QLineEdit(widget_22);
        editPWMSpeed->setObjectName(QStringLiteral("editPWMSpeed"));
        editPWMSpeed->setMaximumSize(QSize(16777215, 16777215));
        editPWMSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPWMSpeed->setReadOnly(true);

        gridLayout_6->addWidget(editPWMSpeed, 3, 1, 1, 1);

        labelPWMTorque = new QLabel(widget_22);
        labelPWMTorque->setObjectName(QStringLiteral("labelPWMTorque"));

        gridLayout_6->addWidget(labelPWMTorque, 2, 0, 1, 1);

        editPWMTorque = new QLineEdit(widget_22);
        editPWMTorque->setObjectName(QStringLiteral("editPWMTorque"));
        editPWMTorque->setMaximumSize(QSize(16777215, 16777215));
        editPWMTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPWMTorque->setReadOnly(true);

        gridLayout_6->addWidget(editPWMTorque, 2, 1, 1, 1);

        labelPWMvelUnits = new QLabel(widget_22);
        labelPWMvelUnits->setObjectName(QStringLiteral("labelPWMvelUnits"));

        gridLayout_6->addWidget(labelPWMvelUnits, 3, 2, 1, 1);

        labelPWMSpeed = new QLabel(widget_22);
        labelPWMSpeed->setObjectName(QStringLiteral("labelPWMSpeed"));

        gridLayout_6->addWidget(labelPWMSpeed, 3, 0, 1, 1);

        labelPWMJointPos = new QLabel(widget_22);
        labelPWMJointPos->setObjectName(QStringLiteral("labelPWMJointPos"));

        gridLayout_6->addWidget(labelPWMJointPos, 1, 0, 1, 1);

        labelPWMDutyUnits = new QLabel(widget_22);
        labelPWMDutyUnits->setObjectName(QStringLiteral("labelPWMDutyUnits"));

        gridLayout_6->addWidget(labelPWMDutyUnits, 0, 2, 1, 1);

        editPWMCurrent = new QLineEdit(widget_22);
        editPWMCurrent->setObjectName(QStringLiteral("editPWMCurrent"));
        editPWMCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPWMCurrent->setReadOnly(true);

        gridLayout_6->addWidget(editPWMCurrent, 5, 1, 1, 1);

        labelPWMDuty = new QLabel(widget_22);
        labelPWMDuty->setObjectName(QStringLiteral("labelPWMDuty"));

        gridLayout_6->addWidget(labelPWMDuty, 0, 0, 1, 1);

        editPWMJointPos = new QLineEdit(widget_22);
        editPWMJointPos->setObjectName(QStringLiteral("editPWMJointPos"));
        editPWMJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editPWMJointPos->setReadOnly(true);

        gridLayout_6->addWidget(editPWMJointPos, 1, 1, 1, 1);

        labelPWMposUnits = new QLabel(widget_22);
        labelPWMposUnits->setObjectName(QStringLiteral("labelPWMposUnits"));

        gridLayout_6->addWidget(labelPWMposUnits, 1, 2, 1, 1);

        editPWMDuty = new QLineEdit(widget_22);
        editPWMDuty->setObjectName(QStringLiteral("editPWMDuty"));
        editPWMDuty->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(editPWMDuty, 0, 1, 1, 1);

        labelPWMCurrentUnits = new QLabel(widget_22);
        labelPWMCurrentUnits->setObjectName(QStringLiteral("labelPWMCurrentUnits"));

        gridLayout_6->addWidget(labelPWMCurrentUnits, 5, 2, 1, 1);

        labelPWMCurrent = new QLabel(widget_22);
        labelPWMCurrent->setObjectName(QStringLiteral("labelPWMCurrent"));

        gridLayout_6->addWidget(labelPWMCurrent, 5, 0, 1, 1);

        labelPWMMotorPosUnits = new QLabel(widget_22);
        labelPWMMotorPosUnits->setObjectName(QStringLiteral("labelPWMMotorPosUnits"));

        gridLayout_6->addWidget(labelPWMMotorPosUnits, 4, 2, 1, 1);

        labelPWMMotorPos = new QLabel(widget_22);
        labelPWMMotorPos->setObjectName(QStringLiteral("labelPWMMotorPos"));

        gridLayout_6->addWidget(labelPWMMotorPos, 4, 0, 1, 1);

        editPWMMotorPos = new QLineEdit(widget_22);
        editPWMMotorPos->setObjectName(QStringLiteral("editPWMMotorPos"));
        editPWMMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(editPWMMotorPos, 4, 1, 1, 1);


        verticalLayout_9->addWidget(widget_22);

        stackedWidget->addWidget(pagePWM);
        pageCurrent = new QWidget();
        pageCurrent->setObjectName(QStringLiteral("pageCurrent"));
        verticalLayout_91 = new QVBoxLayout(pageCurrent);
        verticalLayout_91->setSpacing(2);
        verticalLayout_91->setObjectName(QStringLiteral("verticalLayout_91"));
        verticalLayout_91->setContentsMargins(2, 2, 2, 2);
        groupBoxCurrent_11 = new QGroupBox(pageCurrent);
        groupBoxCurrent_11->setObjectName(QStringLiteral("groupBoxCurrent_11"));
        verticalLayout_16 = new QVBoxLayout(groupBoxCurrent_11);
        verticalLayout_16->setSpacing(2);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(4, 0, 4, 0);
        sliderCurrentOutput = new SliderWithTarget(groupBoxCurrent_11);
        sliderCurrentOutput->setObjectName(QStringLiteral("sliderCurrentOutput"));
        sliderCurrentOutput->setMinimumSize(QSize(0, 40));
        sliderCurrentOutput->setBaseSize(QSize(0, 40));
        sliderCurrentOutput->setMouseTracking(false);
        sliderCurrentOutput->setStyleSheet(QLatin1String("margin-top:10px;\n"
"\n"
""));
        sliderCurrentOutput->setMinimum(-50);
        sliderCurrentOutput->setMaximum(50);
        sliderCurrentOutput->setOrientation(Qt::Horizontal);

        verticalLayout_16->addWidget(sliderCurrentOutput);


        verticalLayout_91->addWidget(groupBoxCurrent_11);

        widget_221 = new QWidget(pageCurrent);
        widget_221->setObjectName(QStringLiteral("widget_221"));
        gridLayout_61 = new QGridLayout(widget_221);
        gridLayout_61->setObjectName(QStringLiteral("gridLayout_61"));
        gridLayout_61->setContentsMargins(2, -1, 2, -1);
        labelCurrentvelUnits = new QLabel(widget_221);
        labelCurrentvelUnits->setObjectName(QStringLiteral("labelCurrentvelUnits"));

        gridLayout_61->addWidget(labelCurrentvelUnits, 4, 2, 1, 1);

        labelCurrentTorque = new QLabel(widget_221);
        labelCurrentTorque->setObjectName(QStringLiteral("labelCurrentTorque"));

        gridLayout_61->addWidget(labelCurrentTorque, 3, 0, 1, 1);

        editCurrentTorque = new QLineEdit(widget_221);
        editCurrentTorque->setObjectName(QStringLiteral("editCurrentTorque"));
        editCurrentTorque->setMaximumSize(QSize(16777215, 16777215));
        editCurrentTorque->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editCurrentTorque->setReadOnly(true);

        gridLayout_61->addWidget(editCurrentTorque, 3, 1, 1, 1);

        labelCurrentposUnits = new QLabel(widget_221);
        labelCurrentposUnits->setObjectName(QStringLiteral("labelCurrentposUnits"));

        gridLayout_61->addWidget(labelCurrentposUnits, 2, 2, 1, 1);

        editCurrentSpeed = new QLineEdit(widget_221);
        editCurrentSpeed->setObjectName(QStringLiteral("editCurrentSpeed"));
        editCurrentSpeed->setMaximumSize(QSize(16777215, 16777215));
        editCurrentSpeed->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editCurrentSpeed->setReadOnly(true);

        gridLayout_61->addWidget(editCurrentSpeed, 4, 1, 1, 1);

        editCurrentCurrent = new QLineEdit(widget_221);
        editCurrentCurrent->setObjectName(QStringLiteral("editCurrentCurrent"));
        editCurrentCurrent->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_61->addWidget(editCurrentCurrent, 0, 1, 1, 1);

        labelCurrent_2 = new QLabel(widget_221);
        labelCurrent_2->setObjectName(QStringLiteral("labelCurrent_2"));

        gridLayout_61->addWidget(labelCurrent_2, 0, 2, 1, 1);

        labelCurrent = new QLabel(widget_221);
        labelCurrent->setObjectName(QStringLiteral("labelCurrent"));

        gridLayout_61->addWidget(labelCurrent, 0, 0, 1, 1);

        editCurrentJointPos = new QLineEdit(widget_221);
        editCurrentJointPos->setObjectName(QStringLiteral("editCurrentJointPos"));
        editCurrentJointPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        editCurrentJointPos->setReadOnly(true);

        gridLayout_61->addWidget(editCurrentJointPos, 2, 1, 1, 1);

        labelCurrenttrqUnits = new QLabel(widget_221);
        labelCurrenttrqUnits->setObjectName(QStringLiteral("labelCurrenttrqUnits"));

        gridLayout_61->addWidget(labelCurrenttrqUnits, 3, 2, 1, 1);

        labelCurrentMotorPos = new QLabel(widget_221);
        labelCurrentMotorPos->setObjectName(QStringLiteral("labelCurrentMotorPos"));

        gridLayout_61->addWidget(labelCurrentMotorPos, 5, 0, 1, 1);

        labelCurrent_21 = new QLabel(widget_221);
        labelCurrent_21->setObjectName(QStringLiteral("labelCurrent_21"));

        gridLayout_61->addWidget(labelCurrent_21, 2, 0, 1, 1);

        editCurrentMotorPos = new QLineEdit(widget_221);
        editCurrentMotorPos->setObjectName(QStringLiteral("editCurrentMotorPos"));
        editCurrentMotorPos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_61->addWidget(editCurrentMotorPos, 5, 1, 1, 1);

        labelCurrentSpeed = new QLabel(widget_221);
        labelCurrentSpeed->setObjectName(QStringLiteral("labelCurrentSpeed"));

        gridLayout_61->addWidget(labelCurrentSpeed, 4, 0, 1, 1);

        labelCurrentMotorPosUnits = new QLabel(widget_221);
        labelCurrentMotorPosUnits->setObjectName(QStringLiteral("labelCurrentMotorPosUnits"));

        gridLayout_61->addWidget(labelCurrentMotorPosUnits, 5, 2, 1, 1);

        labelCurrentDuty = new QLabel(widget_221);
        labelCurrentDuty->setObjectName(QStringLiteral("labelCurrentDuty"));

        gridLayout_61->addWidget(labelCurrentDuty, 1, 0, 1, 1);

        labelCurrentDutyUnits = new QLabel(widget_221);
        labelCurrentDutyUnits->setObjectName(QStringLiteral("labelCurrentDutyUnits"));

        gridLayout_61->addWidget(labelCurrentDutyUnits, 1, 2, 1, 1);

        editCurrentDuty = new QLineEdit(widget_221);
        editCurrentDuty->setObjectName(QStringLiteral("editCurrentDuty"));
        editCurrentDuty->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_61->addWidget(editCurrentDuty, 1, 1, 1, 1);


        verticalLayout_91->addWidget(widget_221);

        stackedWidget->addWidget(pageCurrent);

        horizontalLayout_3->addWidget(stackedWidget);


        horizontalLayout_4->addWidget(groupBox);


        retranslateUi(JointItem);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(JointItem);
    } // setupUi

    void retranslateUi(QWidget *JointItem)
    {
        JointItem->setWindowTitle(QApplication::translate("JointItem", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("JointItem", "JOINT", Q_NULLPTR));
        comboMode->clear();
        comboMode->insertItems(0, QStringList()
         << QApplication::translate("JointItem", "Idle", Q_NULLPTR)
         << QApplication::translate("JointItem", "Position", Q_NULLPTR)
         << QApplication::translate("JointItem", "Position Direct", Q_NULLPTR)
         << QApplication::translate("JointItem", "Mixed", Q_NULLPTR)
         << QApplication::translate("JointItem", "Velocity", Q_NULLPTR)
         << QApplication::translate("JointItem", "Torque", Q_NULLPTR)
         << QApplication::translate("JointItem", "PWM", Q_NULLPTR)
         << QApplication::translate("JointItem", "Current", Q_NULLPTR)
        );
        comboInteraction->clear();
        comboInteraction->insertItems(0, QStringList()
         << QApplication::translate("JointItem", "Stiff Mode", Q_NULLPTR)
         << QApplication::translate("JointItem", "Compliant Mode", Q_NULLPTR)
        );
        buttonHome->setText(QApplication::translate("JointItem", "Home", Q_NULLPTR));
        buttonIdle->setText(QApplication::translate("JointItem", "Idle", Q_NULLPTR));
        buttonCalib->setText(QApplication::translate("JointItem", "Calib", Q_NULLPTR));
        buttonRun->setText(QApplication::translate("JointItem", "Run", Q_NULLPTR));
        buttonPid->setText(QApplication::translate("JointItem", "PID", Q_NULLPTR));
        labelIdleCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelIdleCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelIdleTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelIdleMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelIdleSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelIdlevelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelIdletrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelIdleMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelIdleJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelIdleposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("JointItem", "Position", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("JointItem", "Velocity", Q_NULLPTR));
        labelPositionCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelPositionposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPositionvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelPositionJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelPositionCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelPositiontrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelPositionMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPositionSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelPositionMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelPositionTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("JointItem", "Position", Q_NULLPTR));
        labelPositionDirTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelPositionDirCurrent->setText(QApplication::translate("JointItem", "Current", Q_NULLPTR));
        labelPositionDirposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPositionDirtrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelPositionDirCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelPositionDirJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelPositionDirSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelPositionDirvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelPositionDirMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelPositionDirMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPositionDirDutyUnits->setText(QApplication::translate("JointItem", "%", Q_NULLPTR));
        labelPositionDirDuty->setText(QApplication::translate("JointItem", "DutyCycle:", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("JointItem", "Position", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("JointItem", "Velocity", Q_NULLPTR));
        labelMixedvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelMixedJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelMixedSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelMixedTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelMixedtrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelMixedCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelMixedCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelMixedposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelMixedMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelMixedMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("JointItem", "Velocity", Q_NULLPTR));
        labelVelocitytrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelVelocitySpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelVelocityCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelVelocityCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelVelocityTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelVelocityvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelVelocityposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelVelocityJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelVelocityMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelVelocityMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("JointItem", "Torque", Q_NULLPTR));
        labelTorquetrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelTorqueCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelTorqueTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelTorqueSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelTorquevelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelTorqueCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelTorqueposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelTorqueJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelTorqueMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelTorqueMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelTorqueDuty->setText(QApplication::translate("JointItem", "DutyCycle:", Q_NULLPTR));
        labelTorqueDutyUnits->setText(QApplication::translate("JointItem", "%", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("JointItem", "PWM", Q_NULLPTR));
        labelPWMtrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelPWMTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelPWMvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelPWMSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelPWMJointPos->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelPWMDutyUnits->setText(QApplication::translate("JointItem", "%", Q_NULLPTR));
        labelPWMDuty->setText(QApplication::translate("JointItem", "DutyCycle:", Q_NULLPTR));
        labelPWMposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPWMCurrentUnits->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelPWMCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelPWMMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelPWMMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        groupBoxCurrent_11->setTitle(QApplication::translate("JointItem", "Current", Q_NULLPTR));
        labelCurrentvelUnits->setText(QApplication::translate("JointItem", "deg/s", Q_NULLPTR));
        labelCurrentTorque->setText(QApplication::translate("JointItem", "Torque:", Q_NULLPTR));
        labelCurrentposUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelCurrent_2->setText(QApplication::translate("JointItem", "A", Q_NULLPTR));
        labelCurrent->setText(QApplication::translate("JointItem", "Current:", Q_NULLPTR));
        labelCurrenttrqUnits->setText(QApplication::translate("JointItem", "Nm", Q_NULLPTR));
        labelCurrentMotorPos->setText(QApplication::translate("JointItem", "MotorPos:", Q_NULLPTR));
        labelCurrent_21->setText(QApplication::translate("JointItem", "Encoder:", Q_NULLPTR));
        labelCurrentSpeed->setText(QApplication::translate("JointItem", "Speed:", Q_NULLPTR));
        labelCurrentMotorPosUnits->setText(QApplication::translate("JointItem", "deg", Q_NULLPTR));
        labelCurrentDuty->setText(QApplication::translate("JointItem", "DutyCycle:", Q_NULLPTR));
        labelCurrentDutyUnits->setText(QApplication::translate("JointItem", "%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class JointItem: public Ui_JointItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINTITEM_H
