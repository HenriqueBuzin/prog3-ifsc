#include "component.h"

Component::Component()
{
    QString _file = "components.csv";
    Csv obj(_file);
    QList<QList<QString>> _components = obj.Read();

    foreach(QList<QString> x, _components){
        Component component(x.at(0), x.at(1).toInt());
        qDebug() << "List items = " << x.at(0) << " - " << x.at(1);
    }
}

Component::Component(QString name, int quantity): _name(name), _quantity(quantity) {}
