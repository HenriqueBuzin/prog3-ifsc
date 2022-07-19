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
    QString getIsbn(Item item);
    QString getAuthor(Item item);
    int getYear(Item item);
    int getQuantity(Item item);
    int getVoltage(Item item);

private:

    QVector<Item> _item;

    int _column;

    void setItem(Item book);

    QString _type;
    QString _name;
    QString _url;
    int _quantity;

    QString _isbn;
    QString _author;
    int _year;

    int _voltage;

    Item(QString type, QString name, QString url, QString isbn, QString author, int year,int quantity);

    Item(QString type, QString name, QString url, int voltage, int quantity);

};

#endif // ITEM_H
