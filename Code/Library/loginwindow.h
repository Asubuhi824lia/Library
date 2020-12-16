#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "users.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow, public Users
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

public slots:
    void Authorization();
    bool CheckUser();

private:
    Ui::LoginWindow *ui;
};

inline bool operator==(User::User &user1, User::User &user2) {
    if(user1.login == user2.login && user1.password == user2.password)
        return true;
    else return false;
}

#endif // LOGINWINDOW_H
