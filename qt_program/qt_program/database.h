#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QtWidgets>

#include "item.h"

class Database
{
public:

    Database(){};

    virtual Item getItem(int i) =0;

    virtual QVector<Item> getItems() =0;

    virtual QVector<QString> getItemsFormatted() =0;

    virtual void setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3) =0;

    virtual void setItem(QString type, QString name, QString url, QString param1, QString param2) =0;

    virtual void removeItem(int i) =0;

};

#endif // UPDATEITEM_H
