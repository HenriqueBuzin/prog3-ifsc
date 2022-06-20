#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QtWidgets>

class Book : public QWidget
{

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();

signals:
    void transmit_to_object(bool value);

private slots:
    void receive_from_object(bool value);

private:
    std::string _name;
    int isbn;

    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;
};

#endif // BOOK_H
