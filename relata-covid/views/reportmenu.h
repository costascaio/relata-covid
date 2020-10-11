#ifndef REPORTMENU_H
#define REPORTMENU_H

#include <QDialog>

namespace Ui {
class ReportMenu;
}

class ReportMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ReportMenu(QWidget *parent = nullptr);
    ~ReportMenu();

private:
    Ui::ReportMenu *ui;
};

#endif // REPORTMENU_H
