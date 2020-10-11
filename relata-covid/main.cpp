#include <QApplication>
#include "views/reportmenu.h"
#include "src/entity/report.h"
#include "src/services/generate_duplicity_report.h"
#include "src/services/readerCSV.hpp"
#include "src/services/export_duplicity_report.h"
#include <iostream>

int main(int argc, char *argv[])
{
    cout << "Reader CSV SIVEP" << endl;
    vector<Person*> sivep = reader_csv("SIVEP.csv", ',');

    cout << "Reader CSV E_SUS_VE" << endl;
    vector<Person*> e_sus_ve = reader_csv("E_SUS_VE.csv", ',');

    cout << "Generate report" << endl;
    Report *r = generate_report(sivep, e_sus_ve);

    cout << "Export report" << endl;
    export_duplicity_report(r);

    cout << "Finish!" << endl;

    QApplication a(argc, argv);

    ReportMenu report_menu;
    report_menu.show();

    return a.exec();
}
