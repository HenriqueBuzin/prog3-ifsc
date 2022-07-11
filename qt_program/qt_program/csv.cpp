#include "csv.h"

Csv::Csv(QString filename): _file(filename){
    if(!_file.open(QFile::WriteOnly | QFile::Truncate | QIODevice::Append)){
        qDebug() << _file.errorString();
    }
}

QStringList Csv::Read(){
    QStringList list;
    while(!_file.atEnd()) {
        QByteArray line = _file.readLine();
        list.append(line.split(',').first());
    }
    qDebug() << list;
    return list;
}

void Csv::Create(){
    QTextStream stream(&_file);
    stream << "a" << "," << "b" << "\n";
}

Csv::~Csv(){
    _file.close();
}
