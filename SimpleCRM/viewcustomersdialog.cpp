#include "viewcustomersdialog.h"
#include "ui_viewcustomersdialog.h"
#include <QMessageBox>
#include <QInputDialog>

ViewCustomersDialog::ViewCustomersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCustomersDialog)
{
    ui->setupUi(this);
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &ViewCustomersDialog::on_searchLineEdit_textChanged);
    connect(ui->closeButton, &QPushButton::clicked, this, &ViewCustomersDialog::on_closeButton_clicked);
    connect(ui->deleteButton, &QPushButton::clicked, this, &ViewCustomersDialog::on_deleteButton_clicked);
    connect(ui->customersListWidget, &QListWidget::itemDoubleClicked, this, &ViewCustomersDialog::on_customersListWidget_itemDoubleClicked);
}

ViewCustomersDialog::~ViewCustomersDialog()
{
    delete ui;
}

void ViewCustomersDialog::setCustomers(QVector<Customer>* list)
{
    customers = list;
    refreshList();
}

void ViewCustomersDialog::setEditMode(bool enable)
{
    editMode = enable;
    ui->deleteButton->setVisible(!enable);
}

void ViewCustomersDialog::refreshList()
{
    ui->customersListWidget->clear();
    if (!customers) return;

    QString search = ui->searchLineEdit->text().toLower();

    for (const Customer &c : *customers) {
        QString line = QString("%1: %2 | %3 | %4").arg(c.id).arg(c.name).arg(c.phone).arg(c.email);
        if (search.isEmpty() || line.toLower().contains(search)) {
            ui->customersListWidget->addItem(line);
        }
    }
}

void ViewCustomersDialog::on_searchLineEdit_textChanged(const QString &text)
{
    refreshList();
}

void ViewCustomersDialog::on_closeButton_clicked()
{
    accept();
}

void ViewCustomersDialog::on_deleteButton_clicked()
{
    int row = ui->customersListWidget->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "Error", "Select a customer");
        return;
    }

    if (QMessageBox::question(this, "Delete", "Delete this customer?") == QMessageBox::Yes) {

        QString search = ui->searchLineEdit->text().toLower();
        int actual = 0;
        int visible = 0;
        for (int i = 0; i < customers->size(); ++i) {
            QString line = QString("%1: %2 | %3 | %4").arg(customers->at(i).id).arg(customers->at(i).name).arg(customers->at(i).phone).arg(customers->at(i).email).toLower();
            if (search.isEmpty() || line.contains(search)) {
                if (visible == row) {
                    actual = i;
                    break;
                }
                visible++;
            }
        }
        customers->removeAt(actual);
        refreshList();
    }
}

void ViewCustomersDialog::on_customersListWidget_itemDoubleClicked()
{
    if (!editMode) return;

    int row = ui->customersListWidget->currentRow();
    if (row < 0) return;


    QString search = ui->searchLineEdit->text().toLower();
    int actual = 0;
    int visible = 0;
    for (int i = 0; i < customers->size(); ++i) {
        QString line = QString("%1: %2 | %3 | %4").arg(customers->at(i).id).arg(customers->at(i).name).arg(customers->at(i).phone).arg(customers->at(i).email).toLower();
        if (search.isEmpty() || line.contains(search)) {
            if (visible == row) {
                actual = i;
                break;
            }
            visible++;
        }
    }

    Customer &c = (*customers)[actual];

    bool ok;
    QString name = QInputDialog::getText(this, "Edit", "Name:", QLineEdit::Normal, c.name, &ok);
    if (!ok) return;
    c.name = name;

    QString phone = QInputDialog::getText(this, "Edit", "Phone:", QLineEdit::Normal, c.phone, &ok);
    if (!ok) return;
    c.phone = phone;

    QString email = QInputDialog::getText(this, "Edit", "Email:", QLineEdit::Normal, c.email, &ok);
    if (!ok) return;
    c.email = email;

    refreshList();
}
