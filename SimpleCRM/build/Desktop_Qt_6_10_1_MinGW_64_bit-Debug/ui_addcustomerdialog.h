/********************************************************************************
** Form generated from reading UI file 'addcustomerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMERDIALOG_H
#define UI_ADDCUSTOMERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddCustomerDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *phoneLineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddCustomerDialog)
    {
        if (AddCustomerDialog->objectName().isEmpty())
            AddCustomerDialog->setObjectName("AddCustomerDialog");
        AddCustomerDialog->resize(400, 300);
        AddCustomerDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        label = new QLabel(AddCustomerDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 63, 20));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(AddCustomerDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 90, 63, 20));
        label_2->setFont(font);
        label_3 = new QLabel(AddCustomerDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 170, 63, 20));
        label_3->setFont(font);
        nameLineEdit = new QLineEdit(AddCustomerDialog);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(120, 50, 113, 28));
        nameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        emailLineEdit = new QLineEdit(AddCustomerDialog);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(120, 200, 113, 28));
        emailLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        phoneLineEdit = new QLineEdit(AddCustomerDialog);
        phoneLineEdit->setObjectName("phoneLineEdit");
        phoneLineEdit->setGeometry(QRect(120, 130, 113, 28));
        phoneLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        okButton = new QPushButton(AddCustomerDialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(120, 260, 51, 31));
        okButton->setFont(font);
        okButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        cancelButton = new QPushButton(AddCustomerDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(190, 260, 51, 31));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(AddCustomerDialog);

        QMetaObject::connectSlotsByName(AddCustomerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCustomerDialog)
    {
        AddCustomerDialog->setWindowTitle(QCoreApplication::translate("AddCustomerDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddCustomerDialog", "name", nullptr));
        label_2->setText(QCoreApplication::translate("AddCustomerDialog", "phone", nullptr));
        label_3->setText(QCoreApplication::translate("AddCustomerDialog", "email", nullptr));
        okButton->setText(QCoreApplication::translate("AddCustomerDialog", "Add", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddCustomerDialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCustomerDialog: public Ui_AddCustomerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMERDIALOG_H
