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

/**
 * @brief 
 * 
 */
class ReportTable : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Construct a new Report Table object
     * 
     * @param parent 
     */
    explicit ReportTable(QWidget *parent = nullptr);
    /**
     * @brief Destroy the Report Table object
     * 
     */
    ~ReportTable();

    /**
     * @brief Get the Report data object
     * 
     * @return Report* 
     */
    Report *getReport_data() const;
    /**
     * @brief Set the Report data object
     * 
     * @param value 
     */
    void setReport_data(Report *value);

private slots:
    /**
     * @brief 
     * 
     */
    void on_backButton_pressed();

    /**
     * @brief 
     * 
     */
    void on_generateButton_pressed();

private:
    Ui::ReportTable *ui;
    Report* report_data;
};

#endif // REPORTTABLE_H
