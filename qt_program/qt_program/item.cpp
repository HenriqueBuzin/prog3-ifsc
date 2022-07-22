#include "item.h"

Item::Item(QString type, QString name, QString url, QString param1, QString param2, QString param3)
    : _type(type), _name(name), _url(url), _param1(param1), _param2(param2), _param3(param3) {}

Item::Item(QString type, QString name, QString url, QString param1, QString param2)
    : _type(type), _name(name), _url(url), _param1(param1), _param2(param2) {}
