#ifndef REPORTDUPLICITY_H
#define REPORTDUPLICITY_H

#include <QDialog>

namespace Ui {
class ReportDuplicity;
}

class ReportDuplicity : public QDialog
{
    Q_OBJECT

public:
    explicit ReportDuplicity(QWidget *parent = nullptr);
    ~ReportDuplicity();

private:
    Ui::ReportDuplicity *ui;
};

#endif // REPORTDUPLICITY_H
