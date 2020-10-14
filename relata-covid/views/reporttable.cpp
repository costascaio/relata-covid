#include "reporttable.h"
#include "ui_reporttable.h"

ReportTable::ReportTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportTable)
{
    ui->setupUi(this);
    ui->amountDuplicity->setText("");
}

ReportTable::~ReportTable()
{
    delete ui;
}

void ReportTable::on_backButton_pressed()
{
    this->reject();
}

void ReportTable::on_generateButton_pressed()
{
    export_duplicity_report(this->getReport_data());
    QMessageBox::information(this, tr("Relatório"), tr("Exportação concluída!"));
}

Report *ReportTable::getReport_data() const
{
    return report_data;
}

void ReportTable::setReport_data(Report *value)
{
    report_data = value;
}

void ReportTable::setReportTable(){
    QString duplicityLabel = QString::fromStdString(to_string(report_data->getDuplicity()));
    ui->amountDuplicity->setText(duplicityLabel);

    // get size of row and columns
    int personAttributesQuantity = 12;
    int reportQuantity = this->getReport_data()->getPeople().size();

    // set size of row and columns
    ui->tableReport->setRowCount(reportQuantity);
    ui->tableReport->setColumnCount(personAttributesQuantity);

    // set headers label
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

    ui->tableReport->setHorizontalHeaderLabels(headersLabel);
    int countPeople = 0;
    for(auto person : this->getReport_data()->getPeople()){
        ui->tableReport->insertRow(countPeople);

        ui->tableReport->setItem(countPeople, 0 , new QTableWidgetItem(QString::fromStdString(person->getName())));
        ui->tableReport->setItem(countPeople, 1 , new QTableWidgetItem(QString::fromStdString(person->getCPF())));
        ui->tableReport->setItem(countPeople, 2 , new QTableWidgetItem(QString::fromStdString(person->getAddress())));
        ui->tableReport->setItem(countPeople, 3 , new QTableWidgetItem(QString::fromStdString(person->getCityName())));
        ui->tableReport->setItem(countPeople, 4 , new QTableWidgetItem(QString::fromStdString(person->getPhone())));
        ui->tableReport->setItem(countPeople, 5 , new QTableWidgetItem(QString::fromStdString(person->getEvolution())));
        ui->tableReport->setItem(countPeople, 6 , new QTableWidgetItem(QString::fromStdString(person->getDateNotification())));
        ui->tableReport->setItem(countPeople, 7 , new QTableWidgetItem(QString::fromStdString(person->getCEP())));
        ui->tableReport->setItem(countPeople, 8 , new QTableWidgetItem(QString::fromStdString(person->getResultTest())));
        ui->tableReport->setItem(countPeople, 9 , new QTableWidgetItem(QString::fromStdString(person->getGender())));
        ui->tableReport->setItem(countPeople, 10, new QTableWidgetItem(QString::fromStdString(person->getAge())));
        ui->tableReport->setItem(countPeople, 11, new QTableWidgetItem(QString::fromStdString(person->getDateSymptoms())));

        ui->tableReport->setRowHeight(countPeople, 20);

        countPeople++;
    }
}
