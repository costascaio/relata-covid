/********************************************************************************
** Form generated from reading UI file 'reporttable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTTABLE_H
#define UI_REPORTTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportTable
{
public:
    QFrame *frame;
    QPushButton *backButton;
    QFrame *line;
    QLabel *logo;
    QLabel *reportLogo;
    QLabel *userIcon;
    QPushButton *generateButton;
    QTableWidget *tableReport;
    QLabel *duplicityicon;
    QLabel *nDuplicityLabel;
    QLabel *amountDuplicity;

    void setupUi(QDialog *ReportTable)
    {
        if (ReportTable->objectName().isEmpty())
            ReportTable->setObjectName(QString::fromUtf8("ReportTable"));
        ReportTable->resize(700, 400);
        ReportTable->setMinimumSize(QSize(700, 400));
        ReportTable->setSizeGripEnabled(false);
        frame = new QFrame(ReportTable);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 400));
        frame->setStyleSheet(QString::fromUtf8("margin:  0;\n"
"padding: 0;\n"
"width: 1152px;\n"
"height: 700px;\n"
"background: #FBFBFB;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setEnabled(true);
        backButton->setGeometry(QRect(2, 2, 36, 36));
        backButton->setAutoFillBackground(false);
        backButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 50px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/assets/img/button-back.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(40, 40));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 701, 20));
        line->setAcceptDrops(false);
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("color:1C1C1C;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        logo = new QLabel(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(40, 5, 30, 30));
        logo->setStyleSheet(QString::fromUtf8("background:transparent;"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/logo.PNG")));
        logo->setScaledContents(true);
        reportLogo = new QLabel(frame);
        reportLogo->setObjectName(QString::fromUtf8("reportLogo"));
        reportLogo->setGeometry(QRect(280, 6, 140, 30));
        reportLogo->setStyleSheet(QString::fromUtf8("background:transparent;"));
        reportLogo->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/report-logo.PNG")));
        reportLogo->setScaledContents(true);
        reportLogo->setWordWrap(false);
        userIcon = new QLabel(frame);
        userIcon->setObjectName(QString::fromUtf8("userIcon"));
        userIcon->setGeometry(QRect(665, 10, 20, 22));
        userIcon->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/user-icon.PNG")));
        userIcon->setScaledContents(true);
        generateButton = new QPushButton(frame);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(599, 40, 101, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        generateButton->setFont(font);
        generateButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/assets/img/export-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        generateButton->setIcon(icon1);
        generateButton->setIconSize(QSize(130, 30));
        tableReport = new QTableWidget(frame);
        tableReport->setObjectName(QString::fromUtf8("tableReport"));
        tableReport->setGeometry(QRect(5, 70, 691, 331));
        duplicityicon = new QLabel(frame);
        duplicityicon->setObjectName(QString::fromUtf8("duplicityicon"));
        duplicityicon->setGeometry(QRect(10, 40, 31, 31));
        duplicityicon->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/duplicity-icon.png")));
        duplicityicon->setScaledContents(true);
        nDuplicityLabel = new QLabel(frame);
        nDuplicityLabel->setObjectName(QString::fromUtf8("nDuplicityLabel"));
        nDuplicityLabel->setGeometry(QRect(50, 50, 141, 20));
        amountDuplicity = new QLabel(frame);
        amountDuplicity->setObjectName(QString::fromUtf8("amountDuplicity"));
        amountDuplicity->setGeometry(QRect(200, 50, 47, 13));
        amountDuplicity->setStyleSheet(QString::fromUtf8("color: #000\n"
""));
        line->raise();
        duplicityicon->raise();
        backButton->raise();
        logo->raise();
        reportLogo->raise();
        userIcon->raise();
        generateButton->raise();
        tableReport->raise();
        nDuplicityLabel->raise();
        amountDuplicity->raise();

        retranslateUi(ReportTable);

        QMetaObject::connectSlotsByName(ReportTable);
    } // setupUi

    void retranslateUi(QDialog *ReportTable)
    {
        ReportTable->setWindowTitle(QCoreApplication::translate("ReportTable", "Dialog", nullptr));
        backButton->setText(QString());
        logo->setText(QString());
        reportLogo->setText(QString());
        userIcon->setText(QString());
        generateButton->setText(QString());
        duplicityicon->setText(QString());
        nDuplicityLabel->setText(QCoreApplication::translate("ReportTable", "<b style=\"color: #000; size: 40px\">N\303\272mero de duplicidade:<b/>", nullptr));
        amountDuplicity->setText(QCoreApplication::translate("ReportTable", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportTable: public Ui_ReportTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTTABLE_H
