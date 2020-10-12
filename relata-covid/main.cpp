#include <QApplication>
#include "views/reportmenu.h"
#include "views/reporttable.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ReportMenu* report_menu = new ReportMenu();
    ReportTable* report_table = new ReportTable();

    report_menu->setReport_table(report_table);

    report_menu->show();

    return a.exec();
}
