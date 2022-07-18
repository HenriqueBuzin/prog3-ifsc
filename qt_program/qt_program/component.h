#ifndef COMPONENT_H
#define COMPONENT_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "csv.h"

class Component
{

public:
    Component();
    Component(QString name, int quantity);
    QStringList _components;
    QString _file;
    QString _name;
    int _quantity;

};

#endif // COMPONENT_H
