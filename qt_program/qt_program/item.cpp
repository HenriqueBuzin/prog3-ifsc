#include "item.h"

Item::Item()
{

    QString _file = "D:/Github/prog3-ifsc/qt_program/qt_program/items.csv";

    Csv _obj(_file);

    _column = 0;

    foreach(QList<QString> x, _obj.Read()){

        if(_column < x.size()){
            _column = x.size();
        }

        if(x.at(0) == "Livro"){
            setItem(Item(x.at(0), x.at(1), x.at(2), x.at(3), x.at(4), x.at(5)));
        }else{
            setItem(Item(x.at(0), x.at(1), x.at(2), x.at(3), x.at(4)));
        }

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

Item::Item(QString type, QString name, QString url, QString author, QString year, QString quantity)
    : _type(type), _name(name), _url(url), _author(author), _year(year), _quantity(quantity) { }

Item::Item(QString type, QString name, QString url, QString voltage, QString quantity)
    : _type(type), _name(name), _url(url), _voltage(voltage), _quantity(quantity) { }

QString Item::getType(Item item){
    return item._type;
}

QString Item::getName(Item item){
    return item._name;
}

QString Item::getUrl(Item item){
    return item._url;
}

QString Item::getVoltage(Item item){
    return item._voltage;
}

QString Item::getAuthor(Item item){
    return item._author;
}

QString Item::getYear(Item item){
    return item._year;
}

QString Item::getQuantity(Item item){
    return item._quantity;
}
