//
// Created by henri on 30/05/2022.
//

#ifndef PROGRAM_SYSTEM_H
#define PROGRAM_SYSTEM_H


#include "Item.h"

class System {
    private:
        std::vector<Item*> _items;

    public:
        void addBook(int isbn, std::string link);

        void addComponent(int voltage, std::string link);

};


#endif //PROGRAM_SYSTEM_H
