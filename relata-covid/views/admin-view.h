#ifndef ADMINVIEW_H
#define ADMINVIEW_H

#include <QDialog>
#include "src/entity/User.h"

namespace Ui {
class AdminView;
}

class AdminView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminView(QWidget *parent = nullptr);
    ~AdminView();

    vector<User *> getUsers() const;
    void setUsers(const vector<User *> &value);

private slots:
    void on_registerButton_pressed();

    void on_exitButton_pressed();

private:
    Ui::AdminView *ui;
    vector<User*> users;
};

#endif // ADMINVIEW_H
