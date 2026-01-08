/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *addCustomerButton;
    QPushButton *editCustomerButton;
    QPushButton *viewCustomersButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 40, 231, 61));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        addCustomerButton = new QPushButton(centralwidget);
        addCustomerButton->setObjectName("addCustomerButton");
        addCustomerButton->setGeometry(QRect(250, 150, 201, 81));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        addCustomerButton->setFont(font1);
        addCustomerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        editCustomerButton = new QPushButton(centralwidget);
        editCustomerButton->setObjectName("editCustomerButton");
        editCustomerButton->setGeometry(QRect(250, 280, 201, 81));
        editCustomerButton->setFont(font1);
        editCustomerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        viewCustomersButton = new QPushButton(centralwidget);
        viewCustomersButton->setObjectName("viewCustomersButton");
        viewCustomersButton->setGeometry(QRect(250, 410, 201, 101));
        viewCustomersButton->setFont(font1);
        viewCustomersButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "welcome to crm", nullptr));
        addCustomerButton->setText(QCoreApplication::translate("MainWindow", "Add customer", nullptr));
        editCustomerButton->setText(QCoreApplication::translate("MainWindow", "Edit Customer", nullptr));
        viewCustomersButton->setText(QCoreApplication::translate("MainWindow", "Delete Customer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
