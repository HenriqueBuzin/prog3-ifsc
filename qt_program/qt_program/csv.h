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
    QList<QList<QString>> Read();
    void Create();
    ~Csv();
    void getItem();


private:
    QFile _file;

};

#endif // CSV_H
