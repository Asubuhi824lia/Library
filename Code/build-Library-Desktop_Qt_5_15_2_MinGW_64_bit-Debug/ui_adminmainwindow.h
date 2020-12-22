/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINWINDOW_H
#define UI_ADMINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *RegButton;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName(QString::fromUtf8("AdminMainWindow"));
        AdminMainWindow->resize(800, 600);
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 100, 181, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label->setFont(font);
        RegButton = new QPushButton(centralwidget);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        RegButton->setGeometry(QRect(250, 200, 231, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        RegButton->setFont(font1);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(10, 520, 151, 31));
        exit->setFont(font);
        AdminMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        AdminMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminMainWindow->setStatusBar(statusbar);

        retranslateUi(AdminMainWindow);
        QObject::connect(exit, SIGNAL(clicked()), AdminMainWindow, SLOT(close()));
        QObject::connect(RegButton, SIGNAL(clicked(bool)), AdminMainWindow, SLOT(CreateLibrarianProfile()));

        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QCoreApplication::translate("AdminMainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("AdminMainWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214 \320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        RegButton->setText(QCoreApplication::translate("AdminMainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260\321\200\321\217", nullptr));
        exit->setText(QCoreApplication::translate("AdminMainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\321\204\320\270\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H
