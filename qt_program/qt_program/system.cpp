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

void System::remove()
{
    _table->removeRow(_table->currentRow());

    Database database;
    database.removeItem(_table->currentRow());
}

void System::save(){

    Database database;

    database.save();
}

System::System(QWidget *parent)
    : QWidget{parent}
{

    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    _table = new QTableWidget();

    Database database;

    _table->setRowCount(database.getSize());

    _table->setColumnCount(1);

    _horizontalLabels.append("");

    _table->setHorizontalHeaderLabels(_horizontalLabels);

    int i = 0;

    QStringList _verticalLabels;

    foreach(QString x, database.getItemsFormatted()){

        _table->setItem(i, 0, new QTableWidgetItem(x));

        _verticalLabels.append(QString::number(i));

        i++;

    }

    _table->setVerticalHeaderLabels(_verticalLabels);

    _topLayout->addWidget(_table);

    _button = new QPushButton("Cadastrar Livro");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(book()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Cadastrar Componente");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(component()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Atualizar Livro");
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Atualizar Componente");
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Excluir");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(remove()));
    _rightLayout->addWidget(_button);

    _button = new QPushButton("Gravar");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(save()));
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);

}
