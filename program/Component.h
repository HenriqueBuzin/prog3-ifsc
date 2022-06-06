//
// Created by henri on 30/05/2022.
//

#ifndef PROGRAM_COMPONENT_H
#define PROGRAM_COMPONENT_H

#include "Item.h"

class Component: public Item {
    private:
        int _voltage;

    public:
        Component(): Item(COMPONENT) {}

        void setVoltage(int voltage);

        int getVoltage();

        void setQuantity(int quantity);

        int getQuantity();
};


#endif //PROGRAM_COMPONENT_H
