#include "database.h"

Database::Database(){
}

Item Database::getItem(int i){
    return _list[i];
}

QVector<Item> Database::getItems(){
    return _list;
}

void Database::setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3){
    _list.push_back(Item(type, name, url, param1, param2, param3));
}

void Database::setItem(QString type, QString name, QString url, QString param1, QString param2){
    _list.push_back(Item(type, name, url, param1, param2));
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

void Database::save(){
    persist();
}
