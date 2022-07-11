#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QFile>
#include <QDebug>

class Csv
{
public:
    Csv(QString filename);
    QList<QList<QString>> Read();
    void Create();
    ~Csv();

private:
    QFile _file;

};

#endif // CSV_H
