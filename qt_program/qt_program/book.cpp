#include "book.h"

Book::Book()
{

    QString _file = "D:/Github/prog3-ifsc/qt_program/qt_program/books.csv";
    Csv obj(_file);
    QStringList _books = obj.Read();

    foreach(QString item, _books)
        qDebug() << "List items = " << item;

}

Book::Book(QString name, int quantity): _name(name), _quantity(quantity) {}
