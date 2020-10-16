#ifndef REGISTERVIEW_H
#define REGISTERVIEW_H

#include <QDialog>
#include <QMessageBox>
#include <string>
#include "src/entity/User.h"
#include "src/entity/Paper.h"

using namespace std;

namespace Ui {
class RegisterView;
}

class RegisterView : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterView(QWidget *parent = nullptr);
    ~RegisterView();

    vector<User *> getUsers() const;
    void setUsers(vector<User *> &value);

private slots:
    void on_backButton_pressed();

    void on_registerButton_pressed();

private:
    Ui::RegisterView *ui;
    vector<User*> users;
};

#endif // REGISTERVIEW_H
