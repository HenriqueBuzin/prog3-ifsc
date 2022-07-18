#include "component.h"

Component::Component()
{
    QString _file = "components.csv";
    Csv obj(_file);
    QVector<Component> _components;

    foreach(QList<QString> x, obj.Read()){
        _components.append(Component(x.at(0), x.at(1).toInt()));
        qDebug() << "List items = " << x.at(0) << " - " << x.at(1);
    }

}

Component::Component(QString name, int quantity): _name(name), _quantity(quantity) {}
