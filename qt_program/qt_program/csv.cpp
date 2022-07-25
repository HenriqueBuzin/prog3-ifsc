#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QIODeviceBase::ReadWrite)){
        qDebug() << _file.errorString();
    }
}

void Csv::read(){

    while(!_file.atEnd()) {

        QByteArray line = _file.readLine();

        foreach(QByteArray x, line.split('\n')){
            if(x != ""){
                QVector<QByteArray> y = x.split(',');
                if(y[0] == "Livro"){
                    _list.push_back(new Item(y[0], y[1], y[2], y[3], y[4], y[5]));
                }else if(y[0] == "Componente"){
                   _list.push_back(new Item(y[0], y[1], y[2], y[3], y[4]));
                }
            }
        }

    }
}


void Csv::persist(){

    // Pula primeira linha, evitando o lixo
    QString data = "\n";

    foreach(Item* x, _list){
            qDebug() << "x: " << x->getName();
            if(x->getType() == "Livro"){
                data += x->getType() + "," +
                        x->getName() + "," +
                        x->getUrl() + "," +
                        x->getParam1() + "," +
                        x->getParam2() + "," +
                        x->getParam3();
            }else{
                data += x->getType() + "," +
                        x->getName() + "," +
                        x->getUrl() + "," +
                        x->getParam1() + "," +
                        x->getParam2();
            }
            data +="\n";

        }

    qDebug() << "Data: " << data;
    _file.resize(0);
    QTextStream stream(&_file);
    stream << data;

}

Csv::~Csv(){
    _file.close();
}
