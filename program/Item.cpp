//
// Created by henri on 30/05/2022.
//

#include "Item.h"

void Item::setName(std::string name) {
    _name = name;
}
std::string Item::getName() {
    return _name;
}
void Item::setFile(File url) {
    _file.push_back(url);
}
std::vector<File> Item::getFile() {
    return _file;
}

Item::ItemType Item::getType() {
    return _type;
}