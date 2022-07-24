#include "form.h"

Form::Form(QString type, QWidget *parent)
    : QWidget{parent}
{   
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;
    _leftLayout = new QVBoxLayout;

    _label = new QLabel("Nome");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Url");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    if(type == "Livro"){
        _label = new QLabel("Autor");
        _leftLayout->addWidget(_label);
        _input = new QLineEdit("");
        _leftLayout->addWidget(_input);

        _label = new QLabel("Editora");
        _leftLayout->addWidget(_label);
        _input = new QLineEdit("");
        _leftLayout->addWidget(_input);

        _label = new QLabel("Ano");
        _leftLayout->addWidget(_label);
        _input = new QLineEdit("");
        _leftLayout->addWidget(_input);
    }else{
        _label = new QLabel("Tensão");
        _leftLayout->addWidget(_label);
        _input = new QLineEdit("");
        _leftLayout->addWidget(_input);

        _label = new QLabel("Quantidade");
        _leftLayout->addWidget(_label);
        _input = new QLineEdit("");
        _leftLayout->addWidget(_input);
    }

    _leftLayout->addStretch();

    _topLayout->addLayout(_leftLayout);

    _button = new QPushButton("Cadastrar");
    _rightLayout->addWidget(_button);
    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
