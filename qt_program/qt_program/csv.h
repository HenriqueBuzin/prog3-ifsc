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
    void create();
    void getItem(int i);

private:
    QFile _file;
    QVector<Item> _list;

};

#endif // CSV_H
