#ifndef REPORTTABLE_H
#define REPORTTABLE_H

#include <QDialog>
#include <QMessageBox>
#include <string>
#include "src/entity/report.h"
#include "src/services/export_duplicity_report.h"

namespace Ui {
class ReportTable;
}

class ReportTable : public QDialog
{
    Q_OBJECT

public:
    explicit ReportTable(QWidget *parent = nullptr);
    ~ReportTable();

    Report *getReport_data() const;
    void setReport_data(Report *value);

private slots:
    void on_backButton_pressed();

    void on_generateButton_pressed();

private:
    Ui::ReportTable *ui;
    Report* report_data;
};

#endif // REPORTTABLE_H
