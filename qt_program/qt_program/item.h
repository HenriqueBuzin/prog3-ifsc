#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include <QtWidgets>

class Item: public QWidget
{
public:
    explicit Item(QWidget *parent = nullptr);
    ~Item();

signals:

};

#endif // ITEM_H
