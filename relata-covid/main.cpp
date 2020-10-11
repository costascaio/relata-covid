#include <QApplication>
#include "views/mainwindow.h"

#include "src/entity/report.h"
#include "src/services/generate_duplicity_report.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
