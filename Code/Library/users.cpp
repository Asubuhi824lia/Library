#include "users.h"

#include <string>
#include <QVector>

Users::Users()
{
    User::User admin;
    // профиль по умолчанию
    admin.login = "admin";
    admin.password = "admin";
    admin.type = "A";

    users.append(admin);
}
