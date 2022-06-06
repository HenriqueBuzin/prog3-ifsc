//
// Created by henri on 30/05/2022.
//

#ifndef PROGRAM_BOOK_H
#define PROGRAM_BOOK_H

#include "Item.h"

class Book: public Item {
    private:
        int _isbn;

    public:
        Book(): Item(BOOK, 1) {}

        void setIsbn(int isbn);

        int getIsbn();

        void setQuantity(int quantity);

        int getQuantity();
};


#endif //PROGRAM_BOOK_H
