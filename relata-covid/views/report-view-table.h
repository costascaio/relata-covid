#ifndef REPORTVIEWTABLE_H
#define REPORTVIEWTABLE_H

#include <QDialog>
#include <QMessageBox>
#include "src/entity/report.h"
#include "src/services/export_duplicity_report.h"

namespace Ui {
class ReportViewTable;
}

class ReportViewTable : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Construct a new Report Table object
     *
     * @param parent
     */
    explicit ReportViewTable(QWidget *parent = nullptr);

    /**
     * @brief Destroy the Report Table object
     *
     */
    ~ReportViewTable();

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

    /**
     * @brief Set the Report Table
     *
     */
    void setReportTable();

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
    Ui::ReportViewTable *ui;
    Report* report_data;
};

#endif // REPORTVIEWTABLE_H
