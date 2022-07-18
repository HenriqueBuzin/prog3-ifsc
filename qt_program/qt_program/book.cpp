#include "book.h"

Book::Book()
{
    QString _file = "books.csv";
    Csv obj(_file);
    QVector<Book> _books;

    foreach(QList<QString> x, obj.Read()){

        _books.append(Book(x.at(0), x.at(1).toInt()));

        qDebug() << "List items = " << x.at(0) << " - " << x.at(1);

    }

}

Book::Book(QString name, int quantity): _name(name), _quantity(quantity) {}
