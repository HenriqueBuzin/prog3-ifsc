#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QFile>
#include <QDebug>

#include "database.h"
#include "item.h"

class Csv: public Database
{
public:

    Csv(QString filename = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv");

    ~Csv();

    Item getItem(int i);

    QVector<Item> getItems();

    QVector<QString> getItemsFormatted();

    void setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3);

    void setItem(QString type, QString name, QString url, QString param1, QString param2);

    int getSize();

    void removeItem(int i);

private:

    QFile _file;
    QVector<Item> _list;


};

#endif // CSV_H
