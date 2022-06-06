//
// Created by henri on 30/05/2022.
//

#include <iostream>
#include "Book.h"

void Book::setIsbn(int isbn) {
    _isbn = isbn;
}
int Book::getIsbn() {
    return _isbn;
}

void Book::setQuantity(int quantity){
    std::cout << "Erro";
}

int Book::getQuantity() {
    return 1;
}