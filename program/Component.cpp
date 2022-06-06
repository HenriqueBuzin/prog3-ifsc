//
// Created by henri on 30/05/2022.
//

#include "Component.h"

void Component::setVoltage(int voltage) {
    _voltage = voltage;
}
int Component::getVoltage() {
    return _voltage;
}

void Component::setQuantity(int quantity){
    _quantity = quantity;
}

int Component::getQuantity() {
    return _quantity;
}