#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QIODeviceBase::ReadWrite)){
        qDebug() << _file.errorString();
    }

    while(!_file.atEnd()) {

        QByteArray line = _file.readLine();

        foreach(QByteArray x, line.split('\n')){

            if(x != ""){

                QVector<QByteArray> y = x.split(',');

                if(y[0] == "Livro"){
                    _list.push_back(Item(y[0], y[1], y[2], y[3], y[4], y[5]));
                }else{
                   _list.push_back(Item(y[0], y[1], y[2], y[3], y[4]));
                }

            }

        }

    }
}

Item Csv::getItem(int i){
    return _list[i];
}

QVector<Item> Csv::getItems(){
    return _list;
}

void Csv::setItem(QString type, QString name, QString url, QString param1, QString param2, QString param3){
    _list.push_back(Item(type, name, url, param1, param2, param3));
}

void Csv::setItem(QString type, QString name, QString url, QString param1, QString param2){
    _list.push_back(Item(type, name, url, param1, param2));
}

int Csv::getSize() {
    return _list.size();
}

QVector<QString> Csv::getItemsFormatted(){

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

void Csv::removeItem(int i) {
    _list.remove(i);
}

Csv::~Csv(){
    _file.close();
}
