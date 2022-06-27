#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QWidget>
#include <QtWidgets>

class DeleteItem: public QWidget
{

    Q_OBJECT
public:
    explicit DeleteItem(QWidget *parent = nullptr);

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;

};

#endif // DELETEITEM_H
