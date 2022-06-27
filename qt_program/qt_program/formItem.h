#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QWidget>
#include <QtWidgets>

class FormItem: public QWidget
{
    Q_OBJECT
public:
    explicit FormItem(QWidget *parent = nullptr);

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QVBoxLayout * _leftLayout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // UPDATEITEM_H
