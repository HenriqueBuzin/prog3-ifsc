#include "system.h"

void System::book()
{
    Form* ptr = new Form("Livro");
    ptr->show();
}

void System::component()
{
    Form* ptr = new Form("Componente");
    ptr->show();
}

void System::exclude()
{

    qDebug() << _table->currentRow();
    _table->removeRow(_table->currentRow());

    // Exclude* ptr = new Exclude(item);
    // ptr->show();
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

    QVector<QVector<QTableWidgetItem*>> itemA;

    QVector<QTableWidgetItem*> itemB;

    QVector<Item> data = item.getItem();

    for(int x = 0; x < item.rowSize(); x++){

        if(item.getType(data[x]) == "Livro"){
            itemB.insert(0, new QTableWidgetItem(item.getType(data[x])));
            itemB.insert(1, new QTableWidgetItem(item.getName(data[x])));
            itemB.insert(2, new QTableWidgetItem(item.getUrl(data[x])));
            itemB.insert(3, new QTableWidgetItem(item.getAuthor(data[x])));
            itemB.insert(4, new QTableWidgetItem(item.getYear(data[x])));
            itemB.insert(5, new QTableWidgetItem(item.getQuantity(data[x])));
        }else{
            itemB.insert(0, new QTableWidgetItem(item.getType(data[x])));
            itemB.insert(1, new QTableWidgetItem(item.getName(data[x])));
            itemB.insert(2, new QTableWidgetItem(item.getUrl(data[x])));
            itemB.insert(3, new QTableWidgetItem(item.getVoltage(data[x])));
            itemB.insert(4, new QTableWidgetItem(item.getQuantity(data[x])));
        }

        itemA.push_back(itemB);

    }

    for(int x = 0; x < item.rowSize(); x++){

        for(int y = 0; y < item.columnSize(); y++){

            _table->setItem(x, y, itemA[x][y]);

        }

    }

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
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(exclude()));

    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
