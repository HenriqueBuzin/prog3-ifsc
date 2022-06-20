#include "system.h"

void System::openBook()
{
    Book* ptr = new Book();
    ptr->show();
}

void System::openComponent()
{
    Component* ptr = new Component();
    ptr->show();
}

System::System(QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    _table = new QTableWidget(12, 3, this);
    _topLayout->addWidget(_table);

    _button = new QPushButton("Gerenciar Livros");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(openBook()));

    _rightLayout->addWidget(_button);

    _button = new QPushButton("Gerenciar Componentes");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(openComponent()));
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
