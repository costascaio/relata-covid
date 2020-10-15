#include <QApplication>
#include "views/login.h"
#include "views/admin-view.h"
#include "views/report-menu.h"
#include "views/report-view-table.h"
#include "src/entity/User.h"
#include "src/entity/userimpl.h"
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    

    Login* login = new Login();
    AdminView* admin_view = new AdminView();
    ReportMenu* report_menu = new ReportMenu();
    ReportViewTable* report_table = new ReportViewTable();

    login->setAdmin_view(admin_view);

    login->setReport_menu(report_menu);
    report_menu->setReport_table(report_table);

    login->exec();

    return a.exec();
}
