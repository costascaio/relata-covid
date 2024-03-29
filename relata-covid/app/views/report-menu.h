#ifndef REPORTMENU_H
#define REPORTMENU_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QtGui>
#include "report-view-table.h"
#include "src/entity/report.h"
#include "src/services/readerCSV.hpp"
#include "src/services/generate_duplicity_report.h"

namespace Ui {
class ReportMenu;
}

/**
 * @brief this class represents the GUI ReportMenu
 * 
 */
class ReportMenu : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Construct a new Report Menu object
     * 
     * @param parent 
     */
    explicit ReportMenu(QWidget *parent = nullptr);
    /**
     * @brief Destroy the Report Menu object
     * 
     */
    ~ReportMenu();

    /**
     * @brief Get the E susVE path object
     * 
     * @return string 
     */
    string getE_susVE_path() const;
    /**
     * @brief Set the E susVE path object
     * 
     * @param value 
     */
    void setE_susVE_path(const string &value);

    /**
     * @brief Get the Sivep DDA path object
     * 
     * @return string 
     */
    string getSivep_DDA_path() const;
    /**
     * @brief Set the Sivep DDA path object
     * 
     * @param value 
     */
    void setSivep_DDA_path(const string &value);

    ReportViewTable *getReport_table() const;
    void setReport_table(ReportViewTable *value);


private slots:
    /**
     * @brief this functionality look if the backButton was pressed.
     * 
     */
    void on_backButton_pressed();

    /**
     * @brief this functionality look if the esusVEButton was pressed.
     * 
     */
    void on_esusVEButton_pressed();

    /**
     * @brief this functionality look if the suvepDDAButton was pressed.
     * 
     */
    void on_sivepDDAButton_pressed();

    /**
     * @brief this functionality look if the generateButton was pressed.
     * 
     */
    void on_generateButton_pressed();

private:
    Ui::ReportMenu *ui;
    string e_susVE_path;
    string sivep_DDA_path;
    ReportViewTable* report_table;
};

#endif // REPORTMENU_H
