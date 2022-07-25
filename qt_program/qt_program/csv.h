#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QFile>
#include <QDebug>

#include "item.h"

class Csv
{
public:

    Csv(QString filename = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv");

    ~Csv();

protected:

    QVector<Item> _list;

    void persist();

private:

    QFile _file;

};

#endif // CSV_H
