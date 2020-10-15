#ifndef REPORTVIEWTABLE_H
#define REPORTVIEWTABLE_H

#include <QDialog>

namespace Ui {
class ReportViewTable;
}

class ReportViewTable : public QDialog
{
    Q_OBJECT

public:
    explicit ReportViewTable(QWidget *parent = nullptr);
    ~ReportViewTable();

private:
    Ui::ReportViewTable *ui;
};

#endif // TESTE_H
