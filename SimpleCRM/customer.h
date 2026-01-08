#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QString>

struct Customer {
    int id = 0;
    QString name;
    QString phone;
    QString email;
};

#endif // CUSTOMER_H
