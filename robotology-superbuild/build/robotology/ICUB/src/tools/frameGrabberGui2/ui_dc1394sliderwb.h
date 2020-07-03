/********************************************************************************
** Form generated from reading UI file 'dc1394sliderwb.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DC1394SLIDERWB_H
#define UI_DC1394SLIDERWB_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DC1394SliderWB
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *label;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *pPwr;
    QRadioButton *pRBa;
    QRadioButton *pRBm;
    QPushButton *m_OnePush;
    QWidget *_lblValueRed;
    QLabel *lblValueRed;
    QLabel *label_2;
    QSlider *m_SliderRed;
    QWidget *_lblValueBlue;
    QLabel *lblValueBlue;
    QLabel *label_3;
    QSlider *m_SliderBlue;

    void setupUi(QWidget *DC1394SliderWB)
    {
        if (DC1394SliderWB->objectName().isEmpty())
            DC1394SliderWB->setObjectName(QStringLiteral("DC1394SliderWB"));
        DC1394SliderWB->resize(270, 141);
        gridLayout_3 = new QGridLayout(DC1394SliderWB);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        label = new QGroupBox(DC1394SliderWB);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        gridLayout_2 = new QGridLayout(label);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(label);
        widget->setObjectName(QStringLiteral("widget"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        widget->setFont(font1);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pPwr = new QCheckBox(widget);
        pPwr->setObjectName(QStringLiteral("pPwr"));

        horizontalLayout->addWidget(pPwr);

        pRBa = new QRadioButton(widget);
        pRBa->setObjectName(QStringLiteral("pRBa"));

        horizontalLayout->addWidget(pRBa);

        pRBm = new QRadioButton(widget);
        pRBm->setObjectName(QStringLiteral("pRBm"));

        horizontalLayout->addWidget(pRBm);

        m_OnePush = new QPushButton(widget);
        m_OnePush->setObjectName(QStringLiteral("m_OnePush"));

        horizontalLayout->addWidget(m_OnePush);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2->setStretch(0, 10);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        _lblValueRed = new QWidget(widget);
        _lblValueRed->setObjectName(QStringLiteral("_lblValueRed"));
        _lblValueRed->setMinimumSize(QSize(0, 20));
        lblValueRed = new QLabel(_lblValueRed);
        lblValueRed->setObjectName(QStringLiteral("lblValueRed"));
        lblValueRed->setGeometry(QRect(0, 0, 30, 20));
        lblValueRed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(_lblValueRed, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_SliderRed = new QSlider(widget);
        m_SliderRed->setObjectName(QStringLiteral("m_SliderRed"));
        m_SliderRed->setEnabled(true);
        m_SliderRed->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
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
        m_SliderRed->setMaximum(1000);
        m_SliderRed->setTracking(true);
        m_SliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_SliderRed, 2, 1, 1, 1);

        _lblValueBlue = new QWidget(widget);
        _lblValueBlue->setObjectName(QStringLiteral("_lblValueBlue"));
        _lblValueBlue->setMinimumSize(QSize(0, 20));
        lblValueBlue = new QLabel(_lblValueBlue);
        lblValueBlue->setObjectName(QStringLiteral("lblValueBlue"));
        lblValueBlue->setGeometry(QRect(0, 0, 30, 20));
        lblValueBlue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(_lblValueBlue, 3, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        m_SliderBlue = new QSlider(widget);
        m_SliderBlue->setObjectName(QStringLiteral("m_SliderBlue"));
        m_SliderBlue->setEnabled(true);
        m_SliderBlue->setStyleSheet(QLatin1String("QSlider::groove:horizontal:enabled {\n"
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
        m_SliderBlue->setMaximum(1000);
        m_SliderBlue->setTracking(true);
        m_SliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_SliderBlue, 4, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DC1394SliderWB);

        QMetaObject::connectSlotsByName(DC1394SliderWB);
    } // setupUi

    void retranslateUi(QWidget *DC1394SliderWB)
    {
        DC1394SliderWB->setWindowTitle(QApplication::translate("DC1394SliderWB", "Form", Q_NULLPTR));
        label->setTitle(QApplication::translate("DC1394SliderWB", "GroupBox", Q_NULLPTR));
        pPwr->setText(QApplication::translate("DC1394SliderWB", "pwr", Q_NULLPTR));
        pRBa->setText(QApplication::translate("DC1394SliderWB", "auto", Q_NULLPTR));
        pRBm->setText(QApplication::translate("DC1394SliderWB", "man", Q_NULLPTR));
        m_OnePush->setText(QApplication::translate("DC1394SliderWB", "One Push", Q_NULLPTR));
        lblValueRed->setText(QApplication::translate("DC1394SliderWB", "0,000", Q_NULLPTR));
        label_2->setText(QApplication::translate("DC1394SliderWB", "RED:", Q_NULLPTR));
        lblValueBlue->setText(QApplication::translate("DC1394SliderWB", "0,000", Q_NULLPTR));
        label_3->setText(QApplication::translate("DC1394SliderWB", "BLUE:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DC1394SliderWB: public Ui_DC1394SliderWB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DC1394SLIDERWB_H
