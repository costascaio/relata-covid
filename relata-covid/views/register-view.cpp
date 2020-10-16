#include "register-view.h"
#include "ui_register-view.h"

RegisterView::RegisterView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterView)
{
    ui->setupUi(this);
}

RegisterView::~RegisterView()
{
    delete ui;
}

void RegisterView::on_backButton_pressed()
{
    this->reject();
}

void RegisterView::on_registerButton_pressed()
{
    string cpf = ui->cpfField->text().toStdString();
    string email = ui->emailFiel->text().toStdString();
    string password = ui->passwordFiel->text().toStdString();

    bool getPaper = ui->adminRadioButton->isChecked() ? true : false;

    Paper* paper = Paper::create_paper(getPaper);
    User* newUser = User::create_user(email, cpf, password, paper);

    this->users.push_back(newUser);
    QMessageBox::information(this, tr("Cadastro"), tr("Usuário cadastrado."));

    this->reject();
}

vector<User *> RegisterView::getUsers() const
{
    return users;
}

void RegisterView::setUsers(vector<User *> &value)
{
    users = value;
}
