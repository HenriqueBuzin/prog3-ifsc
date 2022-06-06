//
// Created by henri on 30/05/2022.
//

#ifndef PROGRAM_ITEM_H
#define PROGRAM_ITEM_H

#include <string>
#include <vector>
#include "File.h"

class Item {
    private:
        std::string _name;
        std::vector<File> _file;

    protected:
        int _quantity;

    public:

        enum ItemType {
            BOOK,
            COMPONENT
        };

        ItemType _type;

        Item(ItemType t): _type(t) { }

        Item(ItemType t, int quantity): _type(t), _quantity(quantity) { }

        Item(std::string name, ItemType t) : _name(name), _type(t) { }

        virtual void setQuantity(int quantity) = 0;

        virtual int getQuantity() = 0;

        void setName(std::string name);

        std::string getName();

        void setFile(File url);

        std::vector<File> getFile();

        ItemType getType();

};


#endif //PROGRAM_ITEM_H
