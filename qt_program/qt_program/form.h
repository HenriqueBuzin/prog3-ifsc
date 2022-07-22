#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QWidget>
#include <QtWidgets>

class Form: public QWidget
{
    Q_OBJECT
public:
    explicit Form(QString type, QWidget *parent = nullptr);

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QVBoxLayout * _leftLayout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // UPDATEITEM_H
