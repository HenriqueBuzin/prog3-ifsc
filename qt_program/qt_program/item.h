#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

class Item
{
public:

    Item(QString type, QString name, QString url, QString param1, QString param2);

    Item(QString type, QString name, QString url, QString param1, QString param2, QString param3);

    QString getType();
    QString getName();
    QString getUrl();
    QString getParam1();
    QString getParam2();
    QString getParam3();

private:

    QString _type;
    QString _name;
    QString _url;
    QString _param1;
    QString _param2;
    QString _param3;

};

#endif // ITEM_H
