#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "csv.h"

class Book
{

public:
    Book();
    QVector<Book> _books;

private:
    Book(QString name, int quantity);
    QString _file;
    QString _name;
    int _quantity;
};

#endif // BOOK_H
