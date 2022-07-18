#include "item.h"

Item::Item()
{

    QString _file = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv";

    Csv _obj(_file);

    foreach(QList<QString> x, _obj.Read()){

        // qDebug() << "Coluna: " << _column;

        _column = x.size();

        try{
            setItem(Item(x.at(0), x.at(1), x.at(2), x.at(3).toInt(), x.at(4).toInt()));
        }catch(...){
            setItem(Item(x.at(0), x.at(1), x.at(2), x.at(3), x.at(4).toInt()));
        }

        // qDebug() << "List" << x.at(0) << " - " << x.at(1) << " - " << x.at(2) << " - " << x.at(3) << " - " << x.at(4).toInt();

    }
}

void Item::setItem(Item book){
    _item.push_back(book);
}

QVector<Item> Item::getItem(){
    return _item;
}

int Item::rowSize(){
    return _item.size();
}

int Item::columnSize(){
    return _column;
}

Item::Item(QString type, QString name, QString url, QString isbn, int quantity): _type(type), _name(name), _url(url), _isbn(isbn), _quantity(quantity) {}

Item::Item(QString type, QString name, QString url, int voltage, int quantity): _type(type), _name(name), _url(url), _voltage(voltage), _quantity(quantity) {}

QString Item::getType(Item item){
    return item._type;
}
