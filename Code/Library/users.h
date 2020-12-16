#ifndef USERS_H
#define USERS_H

#include <QString>
#include <QVector>

namespace User {
    struct User {
        QString name;
        QString surname;
        QString middle_name;
        QString home_address;
        QString home_phone;
        QString mobile_phone;
        QString library_card_number;

        QString login;
        QString password;

        QString type;
    };
}

class Users
{
protected:
    QVector<User::User> users;

public:
    Users();
};

#endif // USERS_H
