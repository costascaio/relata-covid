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
    vector<User*> users;
    Paper* paperAdmin = Paper::create_paper(true);
    User* admin = User::create_user("admin@admin.com.br", "01234567890", "senha123", paperAdmin);
    Paper* paperAgent = Paper::create_paper(false);
    User* agent = User::create_user("agent@agent.com.br", "09876543210", "senha321", paperAgent);

    users.push_back(admin);
    users.push_back(agent);

    string cpf = ui->cpfField->text().toStdString();
    bool allowCPF = this->isUser(cpf, users);

    if(allowCPF){
        string password = ui->passwordField->text().toStdString();
        bool allowPassword = this->isUserPassword(cpf, password, users);

        bool allowToLogin = (allowCPF && allowPassword) == true;

        if(!allowToLogin){
            QMessageBox::information(this, tr("Login"), tr("Usuário ou senha está incorreto."));
            return;
        }
    }

    if(this->isAdmin(cpf, users)){
        this->getAdmin_view()->setUsers(users);
        this->getAdmin_view()->exec();
    }
    else{
        this->getReport_menu()->exec();
    }
}

AdminView *Login::getAdmin_view() const
{
    return admin_view;
}

void Login::setAdmin_view(AdminView *value)
{
    admin_view = value;
}

bool Login::isUser(string cpf, const vector<User *> &value){
    for(int i = 0 ; i < static_cast<int>(value.size()); i++)
        if(value.at(i)->get_user() == cpf)
            return true;
    return false;
}

bool Login::isUserPassword(string cpf, string password, const vector<User *> &value){
    for(int i = 0 ; i < static_cast<int>(value.size()); i++)
        if(value.at(i)->get_user() == cpf){
            if(value.at(i)->get_password() == password)
                return true;
            else
                return false;
        }
    return false;
}

bool Login::isAdmin(string cpf, const vector<User *> &value){
    for(int i = 0 ; i < static_cast<int>(value.size()); i++){
        if(value.at(i)->get_user() == cpf){
            return value.at(i)->get_paper()->get_is_admin();
        }
    }
    return false;
}
