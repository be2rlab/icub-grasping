/********************************************************************************
** Form generated from reading UI file 'dc1394slider.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DC1394SLIDER_H
#define UI_DC1394SLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DC1394Slider
{
public:
    QGridLayout *gridLayout;
    QGroupBox *label;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *pPwr;
    QRadioButton *pRBa;
    QRadioButton *pRBm;
    QPushButton *m_OnePush;
    QWidget *widget;
    QLabel *lblValue;
    QSlider *m_Slider;

    void setupUi(QWidget *DC1394Slider)
    {
        if (DC1394Slider->objectName().isEmpty())
            DC1394Slider->setObjectName(QStringLiteral("DC1394Slider"));
        DC1394Slider->resize(286, 120);
        gridLayout = new QGridLayout(DC1394Slider);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label = new QGroupBox(DC1394Slider);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        verticalLayout_2 = new QVBoxLayout(label);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(label);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        widget_2->setFont(font1);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_1 = new QWidget(widget_2);
        widget_1->setObjectName(QStringLiteral("widget_1"));
        widget_1->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(widget_1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pPwr = new QCheckBox(widget_1);
        pPwr->setObjectName(QStringLiteral("pPwr"));

        horizontalLayout->addWidget(pPwr);

        pRBa = new QRadioButton(widget_1);
        pRBa->setObjectName(QStringLiteral("pRBa"));

        horizontalLayout->addWidget(pRBa);

        pRBm = new QRadioButton(widget_1);
        pRBm->setObjectName(QStringLiteral("pRBm"));

        horizontalLayout->addWidget(pRBm);

        m_OnePush = new QPushButton(widget_1);
        m_OnePush->setObjectName(QStringLiteral("m_OnePush"));

        horizontalLayout->addWidget(m_OnePush);


        horizontalLayout_2->addWidget(widget_1);


        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 20));
        widget->setMaximumSize(QSize(16777215, 20));
        lblValue = new QLabel(widget);
        lblValue->setObjectName(QStringLiteral("lblValue"));
        lblValue->setGeometry(QRect(0, 0, 30, 20));
        lblValue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(widget);

        m_Slider = new QSlider(widget_2);
        m_Slider->setObjectName(QStringLiteral("m_Slider"));
        m_Slider->setEnabled(true);
        m_Slider->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
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
        m_Slider->setMaximum(1000);
        m_Slider->setTracking(true);
        m_Slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(m_Slider);


        verticalLayout_2->addWidget(widget_2);


        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DC1394Slider);

        QMetaObject::connectSlotsByName(DC1394Slider);
    } // setupUi

    void retranslateUi(QWidget *DC1394Slider)
    {
        DC1394Slider->setWindowTitle(QApplication::translate("DC1394Slider", "Form", Q_NULLPTR));
        label->setTitle(QApplication::translate("DC1394Slider", "GroupBox", Q_NULLPTR));
        pPwr->setText(QApplication::translate("DC1394Slider", "pwr", Q_NULLPTR));
        pRBa->setText(QApplication::translate("DC1394Slider", "auto", Q_NULLPTR));
        pRBm->setText(QApplication::translate("DC1394Slider", "man", Q_NULLPTR));
        m_OnePush->setText(QApplication::translate("DC1394Slider", "One Push", Q_NULLPTR));
        lblValue->setText(QApplication::translate("DC1394Slider", "0,000", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DC1394Slider: public Ui_DC1394Slider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DC1394SLIDER_H
