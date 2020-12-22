#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"
#include "registrationwindow.h"

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
}

void AdminMainWindow::CreateLibrarianProfile()
{
    RegistrationWindow* rui = new RegistrationWindow;
    rui->show();
}

AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}
