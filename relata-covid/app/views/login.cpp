#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->cpfField->setAlignment(Qt::AlignCenter);

    ui->passwordField->setEchoMode(QLineEdit::Password);
    ui->passwordField->setAlignment(Qt::AlignCenter);
}

Login::~Login()
{
    delete ui;
}

ReportMenu *Login::getReport_menu() const
{
    return report_menu;
}

void Login::setReport_menu(ReportMenu *value)
{
    report_menu = value;
}

void Login::on_loginButton_pressed()
{
    //Admin was creat here only for test
    vector<string> admin;
    admin.push_back("admin@admin.com.br");
    admin.push_back("01234567890");
    admin.push_back("senha123");
    bool isAdmin = false;
    //

    bool allowCPF = ui->cpfField->text().toStdString() == admin.at(1) ? true : false;
    bool allowPassword = ui->passwordField->text().toStdString() == admin.at(2) ? true : false;

    bool allowToLogin = (allowCPF && allowPassword) == true;

    if(!allowToLogin){
        QMessageBox::information(this, tr("Login"), tr("Usuário ou senha está incorreto."));
        return;
    }

    if(isAdmin){
        //call the admin window
    }
    else{
        this->getReport_menu()->exec();
    }
}
