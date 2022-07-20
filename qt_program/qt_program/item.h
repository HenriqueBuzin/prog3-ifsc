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
    QString getName(Item item);
    QString getUrl(Item item);
    QString getVoltage(Item item);
    QString getAuthor(Item item);
    QString getYear(Item item);
    QString getQuantity(Item item);

private:

    QVector<Item> _item;

    int _column;

    void setItem(Item book);

    QString _type;
    QString _name;
    QString _url;
    QString _voltage;
    QString _author;
    QString _year;
    QString _quantity;

    Item(QString type, QString name, QString url, QString voltage, QString quantity);

    Item(QString type, QString name, QString url, QString author, QString year, QString quantity);

};

#endif // ITEM_H
