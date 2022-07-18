#include "system.h"

void System::item()
{
    Item* ptr = new Item();
    qDebug() << "Componentes: " << ptr->getItem().size();
}

void System::updateItem()
{
    FormItem* ptr = new FormItem();
    ptr->show();
}

void System::deleteItem()
{
    DeleteItem* ptr = new DeleteItem();
    ptr->show();
}

System::System(QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    _table = new QTableWidget(2, 2, this);
    _topLayout->addWidget(_table);

    _button = new QPushButton("Atualizar Items");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(updateItem()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Excluir");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(deleteItem()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Item");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(item()));
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
