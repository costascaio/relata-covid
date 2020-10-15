#include <QApplication>
#include "views/login.h"
#include "views/report-menu.h"
#include "views/report-view-table.h"
#include "src/entity/user.h"
#include "src/entity/userimpl.h"
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    

    Login* login = new Login();
    ReportMenu* report_menu = new ReportMenu();
    ReportViewTable* report_table = new ReportViewTable();

    login->setReport_menu(report_menu);
    report_menu->setReport_table(report_table);

    login->exec();

    return a.exec();


}
