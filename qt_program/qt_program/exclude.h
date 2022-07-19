#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QWidget>
#include <QtWidgets>

#include "item.h"

class Exclude: public QWidget
{

    Q_OBJECT
public:
    explicit Exclude(Item item, QWidget *parent = nullptr);

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // DELETEITEM_H
