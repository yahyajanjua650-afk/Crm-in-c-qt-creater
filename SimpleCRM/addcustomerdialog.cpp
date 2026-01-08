#include "addcustomerdialog.h"
#include "ui_addcustomerdialog.h"

AddCustomerDialog::AddCustomerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCustomerDialog)
{
    ui->setupUi(this);
    connect(ui->okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);
}


AddCustomerDialog::~AddCustomerDialog()
{
    delete ui;
}
QString AddCustomerDialog::getName() const
{
    return ui->nameLineEdit->text();
}

QString AddCustomerDialog::getPhone() const
{
    return ui->phoneLineEdit->text();
}

QString AddCustomerDialog::getEmail() const
{
    return ui->emailLineEdit->text();
}
