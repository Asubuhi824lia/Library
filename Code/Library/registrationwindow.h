#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include "users.h"
#include <QDialog>

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog, public Users
{
    Q_OBJECT

private:
    QChar UserType;

public:
    explicit RegistrationWindow(QChar type, QWidget *parent = nullptr);
    ~RegistrationWindow();

public slots:
    void CreateProfile();

private:
    Ui::RegistrationWindow *ui;

private:
    bool CheckFields();
};

#endif // REGISTRATIONWINDOW_H
