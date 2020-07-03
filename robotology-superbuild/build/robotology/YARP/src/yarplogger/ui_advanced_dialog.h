/********************************************************************************
** Form generated from reading UI file 'advanced_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_DIALOG_H
#define UI_ADVANCED_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_advanced_dialog
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *formFrame;
    QLabel *label_4;
    QCheckBox *cap_error;
    QLabel *label_5;
    QCheckBox *cap_warning;
    QLabel *label_6;
    QCheckBox *cap_info;
    QLabel *label_7;
    QCheckBox *cap_debug;
    QLabel *label_8;
    QCheckBox *cap_unformatted;
    QLabel *label_2;
    QFrame *frame;
    QRadioButton *radio_log_unlimited;
    QRadioButton *radio_log_limited;
    QLineEdit *log_max_size;
    QLabel *label_3;
    QFrame *frame_2;
    QLabel *label_9;
    QLineEdit *ports_max_size;
    QRadioButton *radio_ports_limited;
    QRadioButton *radio_ports_unlimited;
    QLabel *label_10;
    QLineEdit *refresh_rate;
    QLabel *label_20;
    QCheckBox *cap_trace;

    void setupUi(QDialog *advanced_dialog)
    {
        if (advanced_dialog->objectName().isEmpty())
            advanced_dialog->setObjectName(QStringLiteral("advanced_dialog"));
        advanced_dialog->setWindowModality(Qt::WindowModal);
        advanced_dialog->resize(475, 379);
        buttonBox = new QDialogButtonBox(advanced_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formFrame = new QFrame(advanced_dialog);
        formFrame->setObjectName(QStringLiteral("formFrame"));
        formFrame->setGeometry(QRect(30, 20, 421, 301));
        label_4 = new QLabel(formFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1, 1, 116, 16));
        cap_error = new QCheckBox(formFrame);
        cap_error->setObjectName(QStringLiteral("cap_error"));
        cap_error->setGeometry(QRect(180, 1, 16, 16));
        cap_error->setLayoutDirection(Qt::LeftToRight);
        cap_error->setChecked(true);
        label_5 = new QLabel(formFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1, 20, 132, 16));
        cap_warning = new QCheckBox(formFrame);
        cap_warning->setObjectName(QStringLiteral("cap_warning"));
        cap_warning->setGeometry(QRect(180, 20, 16, 16));
        cap_warning->setLayoutDirection(Qt::LeftToRight);
        cap_warning->setChecked(true);
        label_6 = new QLabel(formFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1, 40, 112, 16));
        cap_info = new QCheckBox(formFrame);
        cap_info->setObjectName(QStringLiteral("cap_info"));
        cap_info->setGeometry(QRect(180, 40, 16, 16));
        cap_info->setLayoutDirection(Qt::LeftToRight);
        cap_info->setChecked(true);
        label_7 = new QLabel(formFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1, 60, 123, 16));
        cap_debug = new QCheckBox(formFrame);
        cap_debug->setObjectName(QStringLiteral("cap_debug"));
        cap_debug->setGeometry(QRect(180, 60, 16, 16));
        cap_debug->setLayoutDirection(Qt::LeftToRight);
        cap_debug->setChecked(true);
        label_8 = new QLabel(formFrame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1, 80, 153, 16));
        cap_unformatted = new QCheckBox(formFrame);
        cap_unformatted->setObjectName(QStringLiteral("cap_unformatted"));
        cap_unformatted->setGeometry(QRect(180, 80, 16, 16));
        cap_unformatted->setLayoutDirection(Qt::LeftToRight);
        cap_unformatted->setChecked(true);
        label_2 = new QLabel(formFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 96, 16, 16));
        frame = new QFrame(formFrame);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 130, 391, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radio_log_unlimited = new QRadioButton(frame);
        radio_log_unlimited->setObjectName(QStringLiteral("radio_log_unlimited"));
        radio_log_unlimited->setGeometry(QRect(180, 10, 82, 17));
        radio_log_limited = new QRadioButton(frame);
        radio_log_limited->setObjectName(QStringLiteral("radio_log_limited"));
        radio_log_limited->setGeometry(QRect(180, 30, 111, 17));
        log_max_size = new QLineEdit(frame);
        log_max_size->setObjectName(QStringLiteral("log_max_size"));
        log_max_size->setGeometry(QRect(300, 30, 51, 20));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 101, 16));
        frame_2 = new QFrame(formFrame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 200, 391, 61));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 10, 171, 16));
        ports_max_size = new QLineEdit(frame_2);
        ports_max_size->setObjectName(QStringLiteral("ports_max_size"));
        ports_max_size->setGeometry(QRect(300, 30, 51, 20));
        radio_ports_limited = new QRadioButton(frame_2);
        radio_ports_limited->setObjectName(QStringLiteral("radio_ports_limited"));
        radio_ports_limited->setGeometry(QRect(180, 30, 111, 17));
        radio_ports_unlimited = new QRadioButton(frame_2);
        radio_ports_unlimited->setObjectName(QStringLiteral("radio_ports_unlimited"));
        radio_ports_unlimited->setGeometry(QRect(180, 10, 82, 17));
        label_10 = new QLabel(formFrame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 270, 171, 16));
        refresh_rate = new QLineEdit(formFrame);
        refresh_rate->setObjectName(QStringLiteral("refresh_rate"));
        refresh_rate->setGeometry(QRect(180, 270, 51, 20));
        label_20 = new QLabel(formFrame);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 100, 153, 16));
        cap_trace = new QCheckBox(formFrame);
        cap_trace->setObjectName(QStringLiteral("cap_trace"));
        cap_trace->setGeometry(QRect(180, 100, 16, 16));
        cap_trace->setLayoutDirection(Qt::LeftToRight);
        cap_trace->setChecked(true);
        frame_2->raise();
        frame->raise();
        label_4->raise();
        cap_error->raise();
        label_5->raise();
        cap_warning->raise();
        label_6->raise();
        cap_info->raise();
        label_7->raise();
        cap_debug->raise();
        label_8->raise();
        cap_unformatted->raise();
        label_2->raise();
        label_10->raise();
        refresh_rate->raise();
        label_20->raise();
        cap_trace->raise();

        retranslateUi(advanced_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), advanced_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), advanced_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(advanced_dialog);
    } // setupUi

    void retranslateUi(QDialog *advanced_dialog)
    {
        advanced_dialog->setWindowTitle(QApplication::translate("advanced_dialog", "Advanced Logger Options", Q_NULLPTR));
        label_4->setText(QApplication::translate("advanced_dialog", "Capture Error Messages", Q_NULLPTR));
        cap_error->setText(QString());
        label_5->setText(QApplication::translate("advanced_dialog", "Capture Warning Messages", Q_NULLPTR));
        cap_warning->setText(QString());
        label_6->setText(QApplication::translate("advanced_dialog", "Capture Info Messages", Q_NULLPTR));
        cap_info->setText(QString());
        label_7->setText(QApplication::translate("advanced_dialog", "Capture Debug Messages", Q_NULLPTR));
        cap_debug->setText(QString());
        label_8->setText(QApplication::translate("advanced_dialog", "Capture Unformatted Messages", Q_NULLPTR));
        cap_unformatted->setText(QString());
        label_2->setText(QString());
        radio_log_unlimited->setText(QApplication::translate("advanced_dialog", "Unlimited", Q_NULLPTR));
        radio_log_limited->setText(QApplication::translate("advanced_dialog", "Limited to # lines:", Q_NULLPTR));
        label_3->setText(QApplication::translate("advanced_dialog", "Maximum Log Size:", Q_NULLPTR));
        label_9->setText(QApplication::translate("advanced_dialog", "Maximum number of logged ports:", Q_NULLPTR));
        radio_ports_limited->setText(QApplication::translate("advanced_dialog", "Limited to # ports:", Q_NULLPTR));
        radio_ports_unlimited->setText(QApplication::translate("advanced_dialog", "Unlimited", Q_NULLPTR));
        label_10->setText(QApplication::translate("advanced_dialog", "GUI refresh rate (milliseconds)", Q_NULLPTR));
        label_20->setText(QApplication::translate("advanced_dialog", "Capture Trace Messages", Q_NULLPTR));
        cap_trace->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class advanced_dialog: public Ui_advanced_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_DIALOG_H
