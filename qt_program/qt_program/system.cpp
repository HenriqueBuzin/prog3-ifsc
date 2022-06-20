#include "system.h"

System::System(QWidget *parent)
    : QWidget{parent}
{

    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    _table = new QTableWidget(12, 3, this);
    _topLayout->addWidget(_table);

    _button = new QPushButton("Gerenciar Livros");
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Gerenciar Componentes");
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}

System::~System()
{
}
