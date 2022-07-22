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

void Csv::create(){
    QTextStream stream(&_file);
    stream << "a" << "," << "b" << "\n";
}

void Csv::getItem(int i){


}

Csv::~Csv(){
    _file.close();
}
