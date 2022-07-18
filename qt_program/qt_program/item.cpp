#include "item.h"

Item::Item()
{
    QString _file = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv";
    Csv obj(_file);
    QVector<Item*> _item;

    foreach(QList<QString> x, obj.Read()){

        try{
            setItem(new Item(x.at(0), x.at(1), x.at(2), x.at(3).toInt(), x.at(4).toInt()));
        }catch(...){
            setItem(new Item(x.at(0), x.at(1), x.at(2), x.at(3), x.at(4).toInt()));
        }

        qDebug() << "List" << x.at(0) << " - " << x.at(1) << " - " << x.at(2) << " - " << x.at(3) << " - " << x.at(4).toInt();

    }
}

void Item::setItem(Item* book){
    _item.push_back(book);
}

QVector<Item*> Item::getItem(){
    return _item;
}

Item::Item(QString type, QString name, QString url, QString isbn, int quantity): _type(type), _name(name), _url(url), _isbn(isbn), _quantity(quantity) {}

Item::Item(QString type, QString name, QString url, int voltage, int quantity): _type(type), _name(name), _url(url), _voltage(voltage), _quantity(quantity) {}
