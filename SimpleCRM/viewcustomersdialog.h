#ifndef VIEWCUSTOMERSDIALOG_H
#define VIEWCUSTOMERSDIALOG_H

#include <QDialog>
#include <QVector>
#include "customer.h"

namespace Ui {
class ViewCustomersDialog;
}

class ViewCustomersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViewCustomersDialog(QWidget *parent = nullptr);
    ~ViewCustomersDialog();

    void setCustomers(QVector<Customer>* list);
    void setEditMode(bool enable);

private slots:
    void refreshList();
    void on_searchLineEdit_textChanged(const QString &text);
    void on_closeButton_clicked();
    void on_deleteButton_clicked();
    void on_customersListWidget_itemDoubleClicked();

private:
    Ui::ViewCustomersDialog *ui;
    QVector<Customer>* customers = nullptr;
    bool editMode = false;
};

#endif // VIEWCUSTOMERSDIALOG_H
