#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QIODeviceBase::ReadWrite)){
        qDebug() << _file.errorString();
    }
}

void Csv::read(){

    while(!_file.atEnd()) {

        QByteArray line = _file.readLine();
        qDebug() << line;

        foreach(QByteArray x, line.split('\n')){
            if(x != ""){
                QVector<QByteArray> y = x.split(',');
                qDebug() << y.size();
                if(y[0] == "Livro"){
                    qDebug() << y[5];
                    qDebug() << line;
                    _list.push_back(Item(y[0], y[1], y[2], y[3], y[4], y[5]));
                }else if(y[0] == "Livro"){
                   _list.push_back(Item(y[0], y[1], y[2], y[3], y[4]));
                }
            }
        }

    }
}


void Csv::persist(){

    QString data = "";

    foreach(Item x, _list){

            if(x.getType() == "Livro"){
                data += x.getType() + "," +
                       x.getName() + "," +
                       x.getUrl() + "," +
                       x.getParam1() + "," +
                       x.getParam2() + "," +
                       x.getParam3();
            }else{
                data += x.getType() + "," +
                       x.getName() + "," +
                       x.getUrl() + "," +
                       x.getParam1() + "," +
                       x.getParam2();
            }
            data +="\n";

        }

    qDebug() << "Data: " << data;

    QTextStream stream(&_file);
    stream << data;

}

Csv::~Csv(){
    _file.close();
}
