#include <QApplication>
#include "views/report-menu.h"
#include "views/report-view-table.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ReportMenu* report_menu = new ReportMenu();
    ReportViewTable* report_table = new ReportViewTable();

    report_menu->setReport_table(report_table);

    report_menu->show();

    return a.exec();


}
