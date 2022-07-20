#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QIODeviceBase::ReadWrite)){
        qDebug() << _file.errorString();
    }
}

QList<QList<QString>> Csv::Read(){

    QList<QList<QString>> list;

    while(!_file.atEnd()) {

        QByteArray line = _file.readLine();

        foreach(QByteArray x, line.split('\n')){

            QList<QString> strvec;

            if(x != ""){

                foreach(QByteArray y, x.split(',')){

                    strvec.append(y);

                }

                list.append(strvec);

            }

        }

    }

    qDebug() << list;

    return list;

}




void Csv::Create(){
    QTextStream stream(&_file);
    stream << "a" << "," << "b" << "\n";
}

void Csv::getItem(){

}

Csv::~Csv(){
    _file.close();
}
