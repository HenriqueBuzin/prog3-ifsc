#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "csv.h"

class Book : public QWidget
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    QStringList _books;
    QString _file;


    /*
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);

public slots:

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
    QLineEdit * _input;
    QString * _file;
    */

};

#endif // BOOK_H
