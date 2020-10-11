#include <QApplication>
#include "views/reportmenu.h"
#include "src/entity/report.h"
#include "src/services/generate_duplicity_report.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ReportMenu report_menu;
    report_menu.show();

    return a.exec();
}
