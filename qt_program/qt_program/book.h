#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QtWidgets>

class Book : public QWidget
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    explicit CreateBook(QWidget *parent = nullptr);


private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;
};

#endif // BOOK_H
