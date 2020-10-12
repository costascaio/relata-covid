#ifndef REPORTMENU_H
#define REPORTMENU_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QtGui>
#include "reporttable.h"
#include "src/entity/report.h"
#include "src/services/readerCSV.hpp"
#include "src/services/generate_duplicity_report.h"

using namespace std;

namespace Ui {
class ReportMenu;
}

class ReportMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ReportMenu(QWidget *parent = nullptr);
    ~ReportMenu();

    string getE_susVE_path() const;
    void setE_susVE_path(const string &value);

    string getSivep_DDA_path() const;
    void setSivep_DDA_path(const string &value);

    ReportTable *getReport_table() const;
    void setReport_table(ReportTable *value);


private slots:
    void on_backButton_pressed();

    void on_esusVEButton_pressed();

    void on_sivepDDAButton_pressed();

    void on_generateButton_pressed();

private:
    Ui::ReportMenu *ui;
    string e_susVE_path;
    string sivep_DDA_path;
    ReportTable* report_table;
};

#endif // REPORTMENU_H
