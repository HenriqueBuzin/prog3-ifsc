#include "book.h"

Book::Book(QWidget *parent)
    : QWidget{parent}
{
    _layout = new QHBoxLayout;

    _label = new QLabel("Nome");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _label = new QLabel("ISBN");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _button = new QPushButton("Cancelar");
    _layout->addWidget(_button);

    _button = new QPushButton("Cadastrar");
    _layout->addWidget(_button);

    this->setLayout(_layout);
}

Book::CreateBook(QWidget *parent)
    : QWidget{parent}
{
    _layout = new QHBoxLayout;

    _label = new QLabel("Nome");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _label = new QLabel("ISBN");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _button = new QPushButton("Cancelar");
    _layout->addWidget(_button);

    _button = new QPushButton("Cadastrar");
    _layout->addWidget(_button);

    this->setLayout(_layout);
}
