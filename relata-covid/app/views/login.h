#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "report-menu.h"
#include "admin-view.h"
#include "src/entity/User.h"
#include "src/entity/Paper.h"

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

    AdminView *getAdmin_view() const;
    void setAdmin_view(AdminView *value);

    bool isUser(string cpf, const vector<User *> &value);
    bool isUserPassword(string cpf, string password, const vector<User *> &value);
    bool isAdmin(string cpf, const vector<User *> &value);

private slots:
    void on_loginButton_pressed();

private:
    Ui::Login *ui;
    ReportMenu* report_menu;
    AdminView* admin_view;
};

#endif // LOGIN_H
