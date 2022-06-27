#include "deleteItem.h"

DeleteItem::DeleteItem(QWidget *parent)
    : QWidget{parent}
{
    _layout = new QHBoxLayout;

    _label = new QLabel("Deseja realmente excluir o componente/livro xxx?");
    _layout->addWidget(_label);

    _button = new QPushButton("Excluir");
    _layout->addWidget(_button);

    this->setLayout(_layout);
}
