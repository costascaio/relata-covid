#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "report-menu.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    ReportMenu *getReport_menu() const;
    void setReport_menu(ReportMenu *value);

private slots:
    void on_loginButton_pressed();

private:
    Ui::Login *ui;
    ReportMenu* report_menu;
};

#endif // LOGIN_H
