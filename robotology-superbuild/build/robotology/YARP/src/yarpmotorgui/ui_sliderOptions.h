/********************************************************************************
** Form generated from reading UI file 'sliderOptions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDEROPTIONS_H
#define UI_SLIDEROPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_sliderOptions
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QRadioButton *radio_pos_auto;
    QRadioButton *radio_pos_user;
    QRadioButton *radio_pos_one;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *pos_step;
    QGroupBox *groupBox_2;
    QRadioButton *radio_vel_auto;
    QLabel *label_4;
    QRadioButton *radio_vel_user;
    QLabel *label_5;
    QRadioButton *radio_vel_one;
    QLabel *label_6;
    QLineEdit *vel_step;
    QLineEdit *vel_limiter;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QRadioButton *radio_trq_auto;
    QLabel *label_7;
    QRadioButton *radio_trq_user;
    QLabel *label_8;
    QRadioButton *radio_trq_one;
    QLabel *label_9;
    QLineEdit *trq_step;

    void setupUi(QDialog *sliderOptions)
    {
        if (sliderOptions->objectName().isEmpty())
            sliderOptions->setObjectName(QStringLiteral("sliderOptions"));
        sliderOptions->resize(632, 350);
        horizontalLayout = new QHBoxLayout(sliderOptions);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(sliderOptions);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        radio_pos_auto = new QRadioButton(groupBox);
        radio_pos_auto->setObjectName(QStringLiteral("radio_pos_auto"));
        radio_pos_auto->setGeometry(QRect(10, 23, 95, 17));
        radio_pos_user = new QRadioButton(groupBox);
        radio_pos_user->setObjectName(QStringLiteral("radio_pos_user"));
        radio_pos_user->setGeometry(QRect(10, 114, 70, 17));
        radio_pos_one = new QRadioButton(groupBox);
        radio_pos_one->setObjectName(QStringLiteral("radio_pos_one"));
        radio_pos_one->setGeometry(QRect(10, 214, 99, 17));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 240, 71, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 61, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 50, 141, 16));
        pos_step = new QLineEdit(groupBox);
        pos_step->setObjectName(QStringLiteral("pos_step"));
        pos_step->setGeometry(QRect(90, 140, 91, 20));

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(sliderOptions);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        radio_vel_auto = new QRadioButton(groupBox_2);
        radio_vel_auto->setObjectName(QStringLiteral("radio_vel_auto"));
        radio_vel_auto->setGeometry(QRect(20, 23, 95, 17));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 240, 71, 16));
        radio_vel_user = new QRadioButton(groupBox_2);
        radio_vel_user->setObjectName(QStringLiteral("radio_vel_user"));
        radio_vel_user->setGeometry(QRect(20, 114, 70, 17));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 140, 61, 16));
        radio_vel_one = new QRadioButton(groupBox_2);
        radio_vel_one->setObjectName(QStringLiteral("radio_vel_one"));
        radio_vel_one->setGeometry(QRect(20, 214, 99, 17));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 50, 141, 16));
        vel_step = new QLineEdit(groupBox_2);
        vel_step->setObjectName(QStringLiteral("vel_step"));
        vel_step->setGeometry(QRect(100, 140, 81, 20));
        vel_limiter = new QLineEdit(groupBox_2);
        vel_limiter->setObjectName(QStringLiteral("vel_limiter"));
        vel_limiter->setGeometry(QRect(120, 290, 51, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 280, 101, 31));

        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(sliderOptions);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        radio_trq_auto = new QRadioButton(groupBox_3);
        radio_trq_auto->setObjectName(QStringLiteral("radio_trq_auto"));
        radio_trq_auto->setGeometry(QRect(20, 23, 95, 17));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 240, 71, 16));
        radio_trq_user = new QRadioButton(groupBox_3);
        radio_trq_user->setObjectName(QStringLiteral("radio_trq_user"));
        radio_trq_user->setGeometry(QRect(20, 114, 70, 17));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 140, 61, 16));
        radio_trq_one = new QRadioButton(groupBox_3);
        radio_trq_one->setObjectName(QStringLiteral("radio_trq_one"));
        radio_trq_one->setGeometry(QRect(20, 214, 99, 17));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 50, 141, 16));
        trq_step = new QLineEdit(groupBox_3);
        trq_step->setObjectName(QStringLiteral("trq_step"));
        trq_step->setGeometry(QRect(100, 140, 81, 21));

        horizontalLayout->addWidget(groupBox_3);


        retranslateUi(sliderOptions);

        QMetaObject::connectSlotsByName(sliderOptions);
    } // setupUi

    void retranslateUi(QDialog *sliderOptions)
    {
        sliderOptions->setWindowTitle(QApplication::translate("sliderOptions", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("sliderOptions", "Position Slider", Q_NULLPTR));
        radio_pos_auto->setText(QApplication::translate("sliderOptions", "Automatic step", Q_NULLPTR));
        radio_pos_user->setText(QApplication::translate("sliderOptions", "User Step", Q_NULLPTR));
        radio_pos_one->setText(QApplication::translate("sliderOptions", "Predefined step", Q_NULLPTR));
        label->setText(QApplication::translate("sliderOptions", "Step size = 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("sliderOptions", "Step size =", Q_NULLPTR));
        label_3->setText(QApplication::translate("sliderOptions", "Step size = (Max-Min)/100", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("sliderOptions", "Velocity Slider", Q_NULLPTR));
        radio_vel_auto->setText(QApplication::translate("sliderOptions", "Automatic step", Q_NULLPTR));
        label_4->setText(QApplication::translate("sliderOptions", "Step size = 1", Q_NULLPTR));
        radio_vel_user->setText(QApplication::translate("sliderOptions", "User Step", Q_NULLPTR));
        label_5->setText(QApplication::translate("sliderOptions", "Step size =", Q_NULLPTR));
        radio_vel_one->setText(QApplication::translate("sliderOptions", "Predefined step", Q_NULLPTR));
        label_6->setText(QApplication::translate("sliderOptions", "Step size = (Max-Min)/100", Q_NULLPTR));
        label_10->setText(QApplication::translate("sliderOptions", "Limiter on joint \n"
"max vel: (0-100)", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("sliderOptions", "Torque Slider", Q_NULLPTR));
        radio_trq_auto->setText(QApplication::translate("sliderOptions", "Automatic step", Q_NULLPTR));
        label_7->setText(QApplication::translate("sliderOptions", "Step size = 1", Q_NULLPTR));
        radio_trq_user->setText(QApplication::translate("sliderOptions", "User Step", Q_NULLPTR));
        label_8->setText(QApplication::translate("sliderOptions", "Step size =", Q_NULLPTR));
        radio_trq_one->setText(QApplication::translate("sliderOptions", "Predefined step", Q_NULLPTR));
        label_9->setText(QApplication::translate("sliderOptions", "Step size = (Max-Min)/100", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sliderOptions: public Ui_sliderOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDEROPTIONS_H
