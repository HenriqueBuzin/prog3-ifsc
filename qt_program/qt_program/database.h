#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QtWidgets>

#include "item.h"
#include "csv.h"

class Database: protected Csv
{

public:

    Database();

    Item getItem(int i);

    QVector<Item> getItems();

    void setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3);

    void setItem(QString type, QString name, QString url, QString param1, QString param2);

    void removeItem(int i);

    int getSize();

    QVector<QString> getItemsFormatted();

    void save();

};

#endif // UPDATEITEM_H
