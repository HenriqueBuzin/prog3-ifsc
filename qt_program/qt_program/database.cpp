#include "database.h"

Database::Database(){

}

void Database::load() {
    read();
}

void Database::save(){
    persist();
}

Item Database::getItem(int i){
    return _list.at(i);
}

QVector<Item> Database::getItems(){
    return _list;
}

void Database::setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3){
    Item item = Item(type, name, url, param1, param2, param3);
    qDebug() << "Cria Livro " << item.getType();
    _list.push_back(item);
    qDebug() << "Cria Livro List" << _list.back().getName();
}

void Database::setItem(QString type, QString name, QString url, QString param1, QString param2){
    Item item = Item(type, name, url, param1, param2);
    qDebug() << "cria componente";
    _list.push_back(item);
}

void Database::removeItem(int i){
    _list.remove(i);
}

int Database::getSize() {
    return _list.size();
}

QVector<QString> Database::getItemsFormatted(){

    QVector<QString> list;

    foreach(Item x, _list){

        if(x.getType() == "Livro"){
            list.push_back(
                        "Livro: " + x.getName() +
                        ", Url: " + x.getUrl() +
                        ", Autor: " + x.getParam1() +
                        ", Editora: " + x.getParam2() +
                        ", Ano: " + x.getParam3()
                );
        }else{
            list.push_back(
                        "Componente: " + x.getName() +
                        ", Url: " + x.getUrl() +
                        ", Tensão: " + x.getParam1() +
                        ", Quantidade: " + x.getParam2()
                );
        }
    }

    return list;

}
