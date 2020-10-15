/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QLabel *title;
    QLabel *logoIcon;
    QLineEdit *cpfField;
    QLineEdit *passwordField;
    QLabel *cpfLabel;
    QLabel *passwordLabel;
    QPushButton *loginButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(420, 330);
        Login->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 421, 331));
        frame->setStyleSheet(QString::fromUtf8("background: #FBFBFB;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(140, 90, 151, 31));
        title->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"font-weight:bold;\n"
"color:#000000;\n"
""));
        logoIcon = new QLabel(frame);
        logoIcon->setObjectName(QString::fromUtf8("logoIcon"));
        logoIcon->setGeometry(QRect(180, 30, 62, 60));
        logoIcon->setPixmap(QPixmap(QString::fromUtf8(":/imgs/assets/img/logo.PNG")));
        logoIcon->setScaledContents(true);
        cpfField = new QLineEdit(frame);
        cpfField->setObjectName(QString::fromUtf8("cpfField"));
        cpfField->setGeometry(QRect(100, 170, 221, 21));
        cpfField->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:1px solid #000000;"));
        passwordField = new QLineEdit(frame);
        passwordField->setObjectName(QString::fromUtf8("passwordField"));
        passwordField->setGeometry(QRect(100, 220, 221, 21));
        passwordField->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:1px solid #000000;"));
        cpfLabel = new QLabel(frame);
        cpfLabel->setObjectName(QString::fromUtf8("cpfLabel"));
        cpfLabel->setGeometry(QRect(200, 150, 31, 20));
        cpfLabel->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:normal;\n"
"color:#000000;\n"
""));
        passwordLabel = new QLabel(frame);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(190, 200, 41, 20));
        passwordLabel->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"font-weight:normal;\n"
"color:#000000;\n"
""));
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(145, 270, 140, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("background:#41BAD8;\n"
"color:#FFFFFF;\n"
"border-radius: 12px;"));
        loginButton->setIconSize(QSize(130, 150));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("Login", "RELATACOVID", nullptr));
        logoIcon->setText(QString());
        cpfLabel->setText(QCoreApplication::translate("Login", "CPF", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "Senha", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
