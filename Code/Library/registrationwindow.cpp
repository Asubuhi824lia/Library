#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include "users.h"

#include <QMessageBox>

RegistrationWindow::RegistrationWindow(QChar type, QWidget *parent) :
    QDialog(parent),
    UserType(type),
    ui(new Ui::RegistrationWindow)
{

    ui->setupUi(this);
}

void RegistrationWindow::CreateProfile()
{
    if(CheckFields()) {
        User::User* u = new User::User;
        u->type = UserType;
        u->login = ui->login->text();
        u->password = ui->password->text();

        u->name = ui->name->text();
        u->surname = ui->surname->text();
        u->middle_name = ui->middleName->text();

        u->home_address = ui->home_adress->text();
        u->home_phone = (ui->comboBox->currentText() == "Домашний") ?
                    ui->phone->text() : "";
        u->mobile_phone = (ui->comboBox->currentText() == "Мобильный") ?
                    ui->phone->text() : "";
        u->library_card_number = ui->library_card_number->text();

        users.append(*u);

        QMessageBox* aboutRslt = new QMessageBox;
        aboutRslt->setText(tr("%1 %2 %3 %4 успешно зарегестрирован!").arg((UserType=='L')?"Библиотекарь":"Читатель")
                           .arg(u->surname).arg(u->name).arg(u->middle_name));
        // Отображаем окно как модальное (блокирующее все остальные окна)
        aboutRslt->exec();
    }
    else {
        QMessageBox* aboutRslt = new QMessageBox;
        aboutRslt->setText("Данные введены некорректно");
        // Отображаем окно как модальное (блокирующее все остальные окна)
        aboutRslt->exec();
    }
}
bool RegistrationWindow::CheckFields()
{
    return true;
}

RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}
