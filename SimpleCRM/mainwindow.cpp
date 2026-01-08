#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addCustomerButton_clicked()
{
    AddCustomerDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        Customer c;
        c.name = dialog.getName();
        c.phone = dialog.getPhone();
        c.email = dialog.getEmail();
        c.id = nextId++;
        customers.append(c);
        QMessageBox::information(this, "Success", "Customer added!");
    }
}


void MainWindow::on_viewCustomersButton_clicked()
{
    ViewCustomersDialog dialog(this);
    dialog.setCustomers(&customers);
    dialog.exec();
}

void MainWindow::on_editCustomerButton_clicked()
{
    ViewCustomersDialog dialog(this);
    dialog.setEditMode(true);
    dialog.setCustomers(&customers);
    dialog.exec();
}
