#include "item.h"

Item::Item()
{
    Csv _obj;

    _obj.read();

}

void Item::setItem(Item book){
    _item.push_back(book);
}

QVector<Item> Item::getItem(){
    return _item;
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
