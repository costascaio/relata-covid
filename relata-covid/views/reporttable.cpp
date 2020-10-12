#include "reporttable.h"
#include "ui_reporttable.h"

ReportTable::ReportTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportTable)
{
    ui->setupUi(this);

    string duplic = to_string(this->getReport_data()->getDuplicity());
    ui->amountDuplicity->setText(QString::fromStdString(duplic));
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
