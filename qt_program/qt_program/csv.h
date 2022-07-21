#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QFile>
#include <QDebug>

#include "database.h"

class Csv: public Database
{
public:
    Csv(QString filename = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv");
    ~Csv();
    QVector<QVector<QString>> read();
    void create();
    void getItem(int i);

private:
    QFile _file;
    QVector<QVector<QString>> _list;

};

#endif // CSV_H
