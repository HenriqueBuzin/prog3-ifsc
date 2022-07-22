#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QWidget>
#include <QtWidgets>

class Exclude: public QWidget
{

    Q_OBJECT
public:
    explicit Exclude(QWidget *parent = nullptr);

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // DELETEITEM_H
