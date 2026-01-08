#ifndef ADDCUSTOMERDIALOG_H
#define ADDCUSTOMERDIALOG_H

#include <QDialog>

namespace Ui {
class AddCustomerDialog;
}

class AddCustomerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomerDialog(QWidget *parent = nullptr);
    ~AddCustomerDialog();
    QString getName() const;
    QString getPhone() const;
    QString getEmail() const;


private:
    Ui::AddCustomerDialog *ui;
};

#endif // ADDCUSTOMERDIALOG_H
