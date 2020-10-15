#include "report_view_table.h"
#include "ui_reportviewtable.h"

ReportViewTable::ReportViewTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportViewTable)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(10);
    ui->tableWidget->setColumnCount(10);

    QTableWidgetItem *newItem = new QTableWidgetItem(tr("teste").arg(
        (1)*(1)));
    ui->tableWidget->setItem(1, 1, newItem);

    //ui->tableWidget->setCellWidget(1, 1, new QPushButton("aq"));
}

teste::~teste()
{
    delete ui;
}
