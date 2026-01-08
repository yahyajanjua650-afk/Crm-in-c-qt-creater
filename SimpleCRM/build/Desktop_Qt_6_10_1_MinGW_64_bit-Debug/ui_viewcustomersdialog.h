/********************************************************************************
** Form generated from reading UI file 'viewcustomersdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCUSTOMERSDIALOG_H
#define UI_VIEWCUSTOMERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewCustomersDialog
{
public:
    QPushButton *deleteButton;
    QPushButton *closeButton;
    QLineEdit *searchLineEdit;
    QListWidget *customersListWidget;
    QLabel *label;

    void setupUi(QDialog *ViewCustomersDialog)
    {
        if (ViewCustomersDialog->objectName().isEmpty())
            ViewCustomersDialog->setObjectName("ViewCustomersDialog");
        ViewCustomersDialog->resize(400, 300);
        ViewCustomersDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        deleteButton = new QPushButton(ViewCustomersDialog);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(100, 250, 90, 29));
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        closeButton = new QPushButton(ViewCustomersDialog);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(200, 250, 90, 29));
        closeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        searchLineEdit = new QLineEdit(ViewCustomersDialog);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(130, 40, 113, 28));
        searchLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        customersListWidget = new QListWidget(ViewCustomersDialog);
        customersListWidget->setObjectName("customersListWidget");
        customersListWidget->setGeometry(QRect(0, 80, 401, 161));
        customersListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(ViewCustomersDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 111, 31));
        QFont font;
        font.setBold(false);
        label->setFont(font);

        retranslateUi(ViewCustomersDialog);

        QMetaObject::connectSlotsByName(ViewCustomersDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewCustomersDialog)
    {
        ViewCustomersDialog->setWindowTitle(QCoreApplication::translate("ViewCustomersDialog", "Dialog", nullptr));
        deleteButton->setText(QCoreApplication::translate("ViewCustomersDialog", "delete", nullptr));
        closeButton->setText(QCoreApplication::translate("ViewCustomersDialog", "close", nullptr));
        label->setText(QCoreApplication::translate("ViewCustomersDialog", "Search By Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewCustomersDialog: public Ui_ViewCustomersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCUSTOMERSDIALOG_H
