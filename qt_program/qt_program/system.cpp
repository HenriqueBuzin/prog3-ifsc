#include "system.h"

void System::component()
{
    Form* ptr = new Form("Componente");
    ptr->show();
}

void System::book()
{
    Form* ptr = new Form("Livro");
    ptr->show();
}

void System::exclude(Item item)
{
    Exclude* ptr = new Exclude(item);
    ptr->show();
}

System::System(QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    Item item;

    _table = new QTableWidget();
    _table->setRowCount(item.rowSize());
    _table->setColumnCount(item.columnSize());

    foreach(Item x, item.getItem()){
        if(item.getType(x) == "Livro") {

        }else{

        }
        qDebug() << item.getType(x);
    }

    QTableWidgetItem *Items= new QTableWidgetItem("A");
    _table->setItem(0, 0, Items);

    _topLayout->addWidget(_table);

    _button = new QPushButton("Cadastrar Livro");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(book()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Cadastrar Componente");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(component()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Atualizar Livro");
    //QObject::connect(_button, SIGNAL(clicked()), this, SLOT(formItem()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Atualizar Componente");
    //QObject::connect(_button, SIGNAL(clicked()), this, SLOT(formItem()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Excluir");
    //QObject::connect(_button, SIGNAL(clicked()), this, SLOT(deleteItem()));
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
