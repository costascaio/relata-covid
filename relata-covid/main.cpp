#include <QApplication>
#include "views/reportmenu.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ReportMenu report_menu;
    report_menu.show();

    return a.exec();
}
