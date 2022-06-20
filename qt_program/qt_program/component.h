#ifndef COMPONENT_H
#define COMPONENT_H

#include <QWidget>
#include <QtWidgets>

class Component: public QWidget
{
public:
    explicit Component(QWidget *parent = nullptr);
    ~Component();

signals:

};

#endif // COMPONENT_H
