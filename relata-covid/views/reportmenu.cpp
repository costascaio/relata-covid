#include "reportmenu.h"
#include "ui_reportmenu.h"

ReportMenu::ReportMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportMenu)
{
    ui->setupUi(this);
}

ReportMenu::~ReportMenu()
{
    delete ui;
}
