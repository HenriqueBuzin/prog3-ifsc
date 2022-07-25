#include "form.h"

void Form::registerItem() {

    if(_type == "Livro"){
        _database.setItem("Livro", _inputName->text(), _inputUrl->text(), _inputParam1->text(), _inputParam2->text(), _inputParam3->text());
    }else{
        _database.setItem("Componente", _inputName->text(), _inputUrl->text(), _inputParam1->text(), _inputParam2->text());
    }

    qDebug() << _type;
    qDebug() << _inputName->text();
    qDebug() << _inputUrl->text();
    qDebug() << _inputParam1->text();
    qDebug() << _inputParam2->text();
    qDebug() << _inputParam3->text();

}

Form::Form(QString type, QWidget *parent)
    : _type(type), QWidget{parent}
{   
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;
    _leftLayout = new QVBoxLayout;

    _label = new QLabel("Nome");
    _leftLayout->addWidget(_label);
    _inputName = new QLineEdit("");
    _leftLayout->addWidget(_inputName);

    _label = new QLabel("Url");
    _leftLayout->addWidget(_label);
    _inputUrl = new QLineEdit("");
    _leftLayout->addWidget(_inputUrl);

    if(_type == "Livro"){
        _label = new QLabel("Autor");
        _leftLayout->addWidget(_label);
        _inputParam1 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam1);

        _label = new QLabel("Editora");
        _leftLayout->addWidget(_label);
        _inputParam2 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam2);

        _label = new QLabel("Ano");
        _leftLayout->addWidget(_label);
        _inputParam3 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam3);
    }else{
        _label = new QLabel("Tensão");
        _leftLayout->addWidget(_label);
        _inputParam1 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam1);

        _label = new QLabel("Quantidade");
        _leftLayout->addWidget(_label);
        _inputParam2 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam2);
    }

    _leftLayout->addStretch();

    _topLayout->addLayout(_leftLayout);

    _button = new QPushButton("Cadastrar");


    QObject::connect(_button, SIGNAL(clicked()), this, SLOT(registerItem()));

    _rightLayout->addWidget(_button);
    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}

Form::Form(int row, QWidget *parent)
    : QWidget{parent}
{


    qDebug() << "Form row: " << row;

    _database.getItem(row);

    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;
    _leftLayout = new QVBoxLayout;

    _label = new QLabel("Nome");
    _leftLayout->addWidget(_label);
    _inputName = new QLineEdit("");
    _leftLayout->addWidget(_inputName);

    _label = new QLabel("Url");
    _leftLayout->addWidget(_label);
    _inputUrl = new QLineEdit("");
    _leftLayout->addWidget(_inputUrl);

        _label = new QLabel("Autor");
        _leftLayout->addWidget(_label);
        _inputParam1 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam1);

        _label = new QLabel("Editora");
        _leftLayout->addWidget(_label);
        _inputParam2 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam2);

        _label = new QLabel("Ano");
        _leftLayout->addWidget(_label);
        _inputParam3 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam3);
    //
        _label = new QLabel("Tensão");
        _leftLayout->addWidget(_label);
        _inputParam1 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam1);

        _label = new QLabel("Quantidade");
        _leftLayout->addWidget(_label);
        _inputParam2 = new QLineEdit("");
        _leftLayout->addWidget(_inputParam2);

    _leftLayout->addStretch();

    _topLayout->addLayout(_leftLayout);

    _button = new QPushButton("Atualizar");

    _rightLayout->addWidget(_button);
    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
