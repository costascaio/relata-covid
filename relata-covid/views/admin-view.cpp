#include "admin-view.h"
#include "ui_admin-view.h"

AdminView::AdminView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminView)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(3);

    QStringList headersLabel = {
        "CPF",
        "Endereço",
        "Papel"
    };
    ui->tableWidget->setHorizontalHeaderLabels(headersLabel);

    ui->tableWidget->setColumnWidth(0, 120);
    ui->tableWidget->setColumnWidth(1, 250);
    ui->tableWidget->setColumnWidth(2, 147);
}

AdminView::~AdminView()
{
    delete ui;
}

void AdminView::on_registerButton_pressed()
{
    this->register_view->exec();
}

void AdminView::on_exitButton_pressed()
{
    this->reject();
}

RegisterView *AdminView::getRegister_view() const
{
    return register_view;
}

void AdminView::setRegister_view(RegisterView *value)
{
    register_view = value;
}

vector<User *> AdminView::getUsers() const
{
    return users;
}

void AdminView::setUsers(const vector<User *> &value)
{
    users = value;

    int countPeople = 0;
    for(auto person : this->getUsers()){
        ui->tableWidget->insertRow(countPeople);

        ui->tableWidget->setItem(countPeople, 0 , new QTableWidgetItem(QString::fromStdString(person->get_user())));
        ui->tableWidget->setItem(countPeople, 1 , new QTableWidgetItem(QString::fromStdString(person->get_email())));
        ui->tableWidget->setItem(countPeople, 2 , new QTableWidgetItem(QString::fromStdString((person->get_paper()->get_is_admin()) ? "Administrador" : "Profissional da saúde")));

        countPeople++;
    }
}
