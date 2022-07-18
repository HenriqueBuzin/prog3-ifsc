#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "csv.h"

class Item
{
public:
    Item();
    QVector<Item> getItem();
    int rowSize();
    int columnSize();

    QString getType(Item item);

private:

    QVector<Item> _item;

    QString _type;
    QString _name;
    QString _url;
    QString _isbn;
    int _voltage;
    int _quantity;

    int _column;

    void setItem(Item book);

    Item(QString type, QString name, QString url, QString isbn, int quantity);
    Item(QString type, QString name, QString url, int voltage, int quantity);

};

#endif // ITEM_H
