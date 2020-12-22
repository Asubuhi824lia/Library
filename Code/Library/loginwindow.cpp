#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "AdminMainWindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::Authorization()
{
    if(CheckUser()) {
        AdminMainWindow* aui = new AdminMainWindow;
        aui->show();
        ui->login->clear();
        ui->password->clear();
    } else {
        QMessageBox aboutDlg(this);
        // Включаем расширенное форматирование текста (разновидность HTML, позволяет
        // выделять текст, ставить ссылки и т. д.) в окне aboutDlg
        aboutDlg.setTextFormat(Qt::RichText);
        aboutDlg.setText("Неправильное имя пользователя или пароль!");
        aboutDlg.setWindowTitle("Warning");

        // Отображаем окно как модальное (блокирующее все остальные окна)
        aboutDlg.exec();
    }
}

bool LoginWindow::CheckUser()
{
    User::User u;
    u.login = ui->login->text();
    u.password = ui->password->text();

    for(User::User user : users)
        if(user == u)
            return true;

    return false;
}
