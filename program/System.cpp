//
// Created by henri on 30/05/2022.
//

#include "System.h"
#include "Book.h"
#include "Component.h"

void System::addBook(int isbn, std::string link) {

    Book* book = new Book();
    book->setIsbn(isbn);
    book->setFile(File(link));
    _items.push_back(book);

}
void System::addComponent(int voltage, std::string link) {

    Component* component = new Component();
    component->setVoltage(voltage);
    component->setFile(File(link));

    _items.push_back(component);

}