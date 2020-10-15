#include "report-view-table.h"
#include "ui_report-view-table.h"

ReportViewTable::ReportViewTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportViewTable)
{
    ui->setupUi(this);

    ui->amountDuplicity->setText("");

    ui->tableWidget->setColumnCount(12);

    QStringList headersLabel = {
        "Nome",
        "CPF",
        "Endereço",
        "Nome da Cidade",
        "Telefone",
        "Evolução",
        "Data de Notificação",
        "CEP",
        "Resultado de Teste",
        "Gênero",
        "Idade",
        "Data de Notificação"
    };
    ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
}

ReportViewTable::~ReportViewTable()
{
    delete ui;
}

void ReportViewTable::on_backButton_pressed()
{
    this->reject();
}

void ReportViewTable::on_generateButton_pressed()
{
    export_duplicity_report(this->getReport_data());
    QMessageBox::information(this, tr("Relatório"), tr("Exportação concluída!"));
}

Report *ReportViewTable::getReport_data() const
{
    return report_data;
}

void ReportViewTable::setReport_data(Report *value)
{
    report_data = value;
}

void ReportViewTable::setReportTable(){
    QString duplicityLabel = QString::fromStdString(to_string(report_data->getDuplicity()));
    ui->amountDuplicity->setText(duplicityLabel);

    int countPeople = 0;
    for(auto person : this->getReport_data()->getPeople()){
        ui->tableWidget->insertRow(countPeople);

        ui->tableWidget->setItem(countPeople, 0 , new QTableWidgetItem(QString::fromStdString(person->getName())));
        ui->tableWidget->setItem(countPeople, 1 , new QTableWidgetItem(QString::fromStdString(person->getCPF())));
        ui->tableWidget->setItem(countPeople, 2 , new QTableWidgetItem(QString::fromStdString(person->getAddress())));
        ui->tableWidget->setItem(countPeople, 3 , new QTableWidgetItem(QString::fromStdString(person->getCityName())));
        ui->tableWidget->setItem(countPeople, 4 , new QTableWidgetItem(QString::fromStdString(person->getPhone())));
        ui->tableWidget->setItem(countPeople, 5 , new QTableWidgetItem(QString::fromStdString(person->getEvolution())));
        ui->tableWidget->setItem(countPeople, 6 , new QTableWidgetItem(QString::fromStdString(person->getDateNotification())));
        ui->tableWidget->setItem(countPeople, 7 , new QTableWidgetItem(QString::fromStdString(person->getCEP())));
        ui->tableWidget->setItem(countPeople, 8 , new QTableWidgetItem(QString::fromStdString(person->getResultTest())));
        ui->tableWidget->setItem(countPeople, 9 , new QTableWidgetItem(QString::fromStdString(person->getGender())));
        ui->tableWidget->setItem(countPeople, 10, new QTableWidgetItem(QString::fromStdString(person->getAge())));
        ui->tableWidget->setItem(countPeople, 11, new QTableWidgetItem(QString::fromStdString(person->getDateSymptoms())));

        countPeople++;
    }
}
