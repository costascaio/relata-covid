#include "reportduplicity.h"
#include "ui_reportduplicity.h"

ReportDuplicity::ReportDuplicity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportDuplicity)
{
    ui->setupUi(this);
}

ReportDuplicity::~ReportDuplicity()
{
    delete ui;
}
