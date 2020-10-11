/********************************************************************************
** Form generated from reading UI file 'reportmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTMENU_H
#define UI_REPORTMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReportMenu
{
public:
    QFrame *frame;
    QPushButton *backButton;
    QFrame *line;
    QLabel *logo;
    QLabel *reportLogo;
    QLabel *userIcon;
    QPushButton *sivepDDAButton;
    QPushButton *esusVEButton;
    QPushButton *generateButton;

    void setupUi(QDialog *ReportMenu)
    {
        if (ReportMenu->objectName().isEmpty())
            ReportMenu->setObjectName(QString::fromUtf8("ReportMenu"));
        ReportMenu->resize(700, 400);
        ReportMenu->setStyleSheet(QString::fromUtf8("background: #000000;\n"
"\n"
"QPushButton#backButton,\n"
"QPushButton#esusVEButton,\n"
"QPushButton#sivepDDAButton,\n"
"QPushButton#generateButton, {\n"
"	opacity: 0;\n"
"	transition: opacity 0.3s;\n"
"}\n"
"QPushButton:hover#backButton,\n"
"QPushButton:hover#esusVEButton,\n"
"QPushButton:hover#sivepDDAButton,\n"
"QPushButton:hover#generateButton,\n"
" {\n"
"	 opacity: 1;\n"
"}"));
        frame = new QFrame(ReportMenu);
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
        sivepDDAButton = new QPushButton(frame);
        sivepDDAButton->setObjectName(QString::fromUtf8("sivepDDAButton"));
        sivepDDAButton->setGeometry(QRect(410, 130, 130, 130));
        sivepDDAButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 12px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/assets/img/sivep-dda.png"), QSize(), QIcon::Normal, QIcon::Off);
        sivepDDAButton->setIcon(icon1);
        sivepDDAButton->setIconSize(QSize(130, 150));
        esusVEButton = new QPushButton(frame);
        esusVEButton->setObjectName(QString::fromUtf8("esusVEButton"));
        esusVEButton->setGeometry(QRect(160, 130, 130, 130));
        esusVEButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 12px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/assets/img/e-sus-ve.png"), QSize(), QIcon::Normal, QIcon::Off);
        esusVEButton->setIcon(icon2);
        esusVEButton->setIconSize(QSize(130, 150));
        generateButton = new QPushButton(frame);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(280, 320, 140, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        generateButton->setFont(font);
        generateButton->setStyleSheet(QString::fromUtf8("background:#41BAD8;\n"
"color:#FFFFFF;\n"
"border-radius: 12px;"));
        generateButton->setIconSize(QSize(130, 150));
        line->raise();
        backButton->raise();
        logo->raise();
        reportLogo->raise();
        userIcon->raise();
        sivepDDAButton->raise();
        esusVEButton->raise();
        generateButton->raise();

        retranslateUi(ReportMenu);

        QMetaObject::connectSlotsByName(ReportMenu);
    } // setupUi

    void retranslateUi(QDialog *ReportMenu)
    {
        ReportMenu->setWindowTitle(QCoreApplication::translate("ReportMenu", "RELATACOVID - Relat\303\263rio", nullptr));
        backButton->setText(QString());
        logo->setText(QString());
        reportLogo->setText(QString());
        userIcon->setText(QString());
        sivepDDAButton->setText(QString());
        esusVEButton->setText(QString());
        generateButton->setText(QCoreApplication::translate("ReportMenu", "GERAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportMenu: public Ui_ReportMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTMENU_H
