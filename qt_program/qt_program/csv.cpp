#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QIODeviceBase::ReadWrite)){
        qDebug() << _file.errorString();
    }
}

QVector<QVector<QString>> Csv::read(){

    QVector<QVector<QString>> _list;

    while(!_file.atEnd()) {

        QByteArray line = _file.readLine();

        foreach(QByteArray x, line.split('\n')){

            QVector<QString> strvec;

            if(x != ""){

                foreach(QByteArray y, x.split(',')){

                    strvec.append(y);

                }

                _list.append(strvec);

            }

        }

    }

    qDebug() << _list;

    return _list;

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
