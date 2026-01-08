#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "customer.h"
#include "addcustomerdialog.h"
#include "viewcustomersdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QVector<Customer> customers;
    int nextId = 1;

private slots:
    void on_addCustomerButton_clicked();
    void on_editCustomerButton_clicked();
    void on_viewCustomersButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
