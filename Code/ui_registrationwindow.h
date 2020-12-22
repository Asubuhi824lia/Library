/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName(QString::fromUtf8("RegistrationWindow"));
        RegistrationWindow->resize(456, 542);
        layoutWidget = new QWidget(RegistrationWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 281, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget_2 = new QWidget(RegistrationWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 187, 401, 141));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 1, 0, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(RegistrationWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 500, 141, 31));
        pushButton = new QPushButton(RegistrationWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 500, 101, 31));
        layoutWidget1 = new QWidget(RegistrationWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 360, 231, 91));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_5);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_7->addWidget(lineEdit_8);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_7);


        retranslateUi(RegistrationWindow);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), RegistrationWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("RegistrationWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217: ", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationWindow", "\320\230\320\274\321\217: ", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276: ", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrationWindow", "\320\224\320\276\320\274\320\260\321\210\320\275\320\270\320\271 \320\260\320\264\321\200\320\265\321\201: ", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrationWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260: ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RegistrationWindow", "\320\234\320\276\320\261\320\270\320\273\321\214\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RegistrationWindow", "\320\224\320\276\320\274\320\260\321\210\320\275\320\270\320\271", nullptr));

        pushButton_2->setText(QCoreApplication::translate("RegistrationWindow", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationWindow", "\320\233\320\276\320\263\320\270\320\275:  ", nullptr));
        label_7->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_8->setText(QCoreApplication::translate("RegistrationWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
