#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QtWidgets>

class Database
{
public:
    Database(){};
    virtual void getItem(int i) =0;

};

#endif // UPDATEITEM_H
