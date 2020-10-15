/********************************************************************************
** Form generated from reading UI file 'report-view-table.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_2D_VIEW_2D_TABLE_H
#define UI_REPORT_2D_VIEW_2D_TABLE_H

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

class Ui_ReportViewTable
{
public:
    QTableWidget *tableWidget;
    QPushButton *generateButton;
    QLabel *amountDuplicity;
    QPushButton *backButton;
    QLabel *duplicityicon;
    QLabel *reportLogo;
    QLabel *userIcon;
    QLabel *logo;
    QLabel *nDuplicityLabel;
    QFrame *line;

    void setupUi(QDialog *ReportViewTable)
    {
        if (ReportViewTable->objectName().isEmpty())
            ReportViewTable->setObjectName(QString::fromUtf8("ReportViewTable"));
        ReportViewTable->resize(700, 400);
        ReportViewTable->setStyleSheet(QString::fromUtf8("background:#FBFBFB;"));
        tableWidget = new QTableWidget(ReportViewTable);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 70, 701, 331));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        generateButton = new QPushButton(ReportViewTable);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(599, 38, 101, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        generateButton->setFont(font);
        generateButton->setStyleSheet(QString::fromUtf8("background: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/assets/img/export-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        generateButton->setIcon(icon);
        generateButton->setIconSize(QSize(130, 30));
        amountDuplicity = new QLabel(ReportViewTable);
        amountDuplicity->setObjectName(QString::fromUtf8("amountDuplicity"));
        amountDuplicity->setGeometry(QRect(189, 47, 217, 19));
        amountDuplicity->setStyleSheet(QString::fromUtf8("color: #000;\n"
"margin-left: 5px;\n"
"font-size: 15px;\n"
"font-weight: normal;\n"
""));
        backButton = new QPushButton(ReportViewTable);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setEnabled(true);
        backButton->setGeometry(QRect(2, 0, 36, 36));
        backButton->setAutoFillBackground(false);
        backButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 50px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/assets/img/button-back.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);
        backButton->setIconSize(QSize(40, 40));
        duplicityicon = new QLabel(ReportViewTable);
        duplicityicon->setObjectName(QString::fromUtf8("duplicityicon"));
        duplicityicon->setGeometry(QRect(10, 38, 31, 31));
        duplicityicon->setStyleSheet(QString::fromUtf8(""));
        duplicityicon->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/duplicity-icon.png")));
        duplicityicon->setScaledContents(true);
        reportLogo = new QLabel(ReportViewTable);
        reportLogo->setObjectName(QString::fromUtf8("reportLogo"));
        reportLogo->setGeometry(QRect(280, 4, 140, 30));
        reportLogo->setStyleSheet(QString::fromUtf8("background:transparent;"));
        reportLogo->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/report-logo.PNG")));
        reportLogo->setScaledContents(true);
        reportLogo->setWordWrap(false);
        userIcon = new QLabel(ReportViewTable);
        userIcon->setObjectName(QString::fromUtf8("userIcon"));
        userIcon->setGeometry(QRect(665, 8, 20, 22));
        userIcon->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/user-icon.PNG")));
        userIcon->setScaledContents(true);
        logo = new QLabel(ReportViewTable);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(40, 3, 30, 30));
        logo->setStyleSheet(QString::fromUtf8("background:transparent;"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/logo.PNG")));
        logo->setScaledContents(true);
        nDuplicityLabel = new QLabel(ReportViewTable);
        nDuplicityLabel->setObjectName(QString::fromUtf8("nDuplicityLabel"));
        nDuplicityLabel->setGeometry(QRect(50, 48, 141, 20));
        line = new QFrame(ReportViewTable);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 28, 701, 20));
        line->setAcceptDrops(false);
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("color:1C1C1C;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        amountDuplicity->raise();
        nDuplicityLabel->raise();
        line->raise();
        duplicityicon->raise();
        generateButton->raise();
        backButton->raise();
        logo->raise();
        reportLogo->raise();
        userIcon->raise();
        tableWidget->raise();

        retranslateUi(ReportViewTable);

        QMetaObject::connectSlotsByName(ReportViewTable);
    } // setupUi

    void retranslateUi(QDialog *ReportViewTable)
    {
        ReportViewTable->setWindowTitle(QCoreApplication::translate("ReportViewTable", "Relat\303\263rio", nullptr));
        generateButton->setText(QString());
        amountDuplicity->setText(QCoreApplication::translate("ReportViewTable", "0", nullptr));
        backButton->setText(QString());
        duplicityicon->setText(QString());
        reportLogo->setText(QString());
        userIcon->setText(QString());
        logo->setText(QString());
        nDuplicityLabel->setText(QCoreApplication::translate("ReportViewTable", "<b style=\"color: #000; size: 40px\">N\303\272mero de duplicidade:<b/>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportViewTable: public Ui_ReportViewTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_2D_VIEW_2D_TABLE_H
