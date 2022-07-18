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
    QVector<Component> _components;

private:
    Component(QString name, int quantity);
    QString _file;
    QString _name;
    int _quantity;

};

#endif // COMPONENT_H
