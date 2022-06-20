#ifndef COMPONENT_H
#define COMPONENT_H

#include <QWidget>
#include <QtWidgets>

class Component: public QWidget
{
    Q_OBJECT

public:
    explicit Component(QWidget *parent = nullptr);

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // COMPONENT_H
