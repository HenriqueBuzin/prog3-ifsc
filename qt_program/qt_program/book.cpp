#include "book.h"

Book::Book()
{
    QString _file = "books.csv";
    Csv obj(_file);
    QList<QList<QString>> _books = obj.Read();

    foreach(QList<QString> x, _books){
        Book book(x.at(0), x.at(1).toInt());
        qDebug() << "List items = " << x.at(0) << " - " << x.at(1);
    }

}

Book::Book(QString name, int quantity): _name(name), _quantity(quantity) {}
