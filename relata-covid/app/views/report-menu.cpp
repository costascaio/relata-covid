#include "report-menu.h"
#include "ui_report-menu.h"

ReportMenu::ReportMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportMenu)
{
    ui->setupUi(this);
}

ReportMenu::~ReportMenu()
{
    delete ui;
}

void ReportMenu::on_backButton_pressed()
{
    this->reject();
}

void ReportMenu::on_esusVEButton_pressed()
{
    try{
        QString file_path = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());

        string path = file_path.toStdString();

        bool isCSV = (path.substr(path.size() - 4, path.size())) == ".csv" ? true : false;

        if(!isCSV){
            QMessageBox::information(this, tr("Relatório"), tr("O arquivo selecionado não é do tipo CSV"));
            path = "";
        }
        this->e_susVE_path = path;
    } catch (exception &e) {

    }
}

string ReportMenu::getSivep_DDA_path() const
{
    return sivep_DDA_path;
}

void ReportMenu::setSivep_DDA_path(const string &value)
{
    sivep_DDA_path = value;
}

string ReportMenu::getE_susVE_path() const
{
    return e_susVE_path;
}

void ReportMenu::setE_susVE_path(const string &value)
{
    e_susVE_path = value;
}

void ReportMenu::on_sivepDDAButton_pressed()
{
    try{
        QString file_path = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());

        string path = file_path.toStdString();

        bool isCSV = (path.substr(path.size() - 4, path.size())) == ".csv" ? true : false;

        if(!isCSV){
            QMessageBox::information(this, tr("Relatório"), tr("O arquivo selecionado não é do tipo CSV"));
            path = "";
        }
        this->sivep_DDA_path = path;
    } catch (exception &e) {

    }
}

void ReportMenu::on_generateButton_pressed()
{
    if(this->e_susVE_path.length() != 0 && this->sivep_DDA_path.length() != 0){
        vector<Person*> sivep = reader_csv(this->getSivep_DDA_path(), ',');
        vector<Person*> e_sus_ve = reader_csv(this->getE_susVE_path(), ',');

        Report *report_data = generate_report(sivep, e_sus_ve);

        this->getReport_table()->setReport_data(report_data);
        this->getReport_table()->setReportTable();

        this->getReport_table()->exec();
    }
    else if(this->e_susVE_path.length() != 0 && this->sivep_DDA_path.length() == 0){
        QMessageBox::information(this, tr("Relatório"), tr("O arquivo do SIVEP-DDA não foi importado."));
    }
    else if(this->e_susVE_path.length() == 0 && this->sivep_DDA_path.length() != 0){
        QMessageBox::information(this, tr("Relatório"), tr("O arquivo do e-SUS não foi importado."));
    }
    else {
        QMessageBox::information(this, tr("Relatório"), tr("Arquivos não foram importados."));
    }
}

ReportViewTable *ReportMenu::getReport_table() const
{
    return report_table;
}

void ReportMenu::setReport_table(ReportViewTable *value)
{
    report_table = value;
}
