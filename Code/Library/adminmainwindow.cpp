#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"
<<<<<<< HEAD
#include "registrationwindow.h"
=======
>>>>>>> c62fc4758a14061fdb2d7629bce25f44137617bd

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
}

void AdminMainWindow::CreateLibrarianProfile()
<<<<<<< HEAD
{
    RegistrationWindow* rui = new RegistrationWindow;
    rui->show();
}
=======
{}
>>>>>>> c62fc4758a14061fdb2d7629bce25f44137617bd

AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}
