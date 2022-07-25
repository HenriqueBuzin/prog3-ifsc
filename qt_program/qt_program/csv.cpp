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


void Csv::persist(){

    QVector<QString> file;
    QString data;

    foreach(Item x, _list){

            if(x.getType() == "Livro"){
                data = x.getType() + "," +
                       x.getName() + "," +
                       x.getUrl() + "," +
                       x.getParam1() + "," +
                       x.getParam2() + "," +
                       x.getParam3();
            }else{
                data = x.getType() + "," +
                       x.getName() + "," +
                       x.getUrl() + "," +
                       x.getParam1() + "," +
                       x.getParam2();
            }
            file.push_back(data);
        }

    data = "";
    foreach(QString x, file){
        data += x + "\n";
    }

    qDebug() << "Daata: " << data;

    QTextStream stream(&_file);
    stream << data;

}

Csv::~Csv(){
    _file.close();
}
