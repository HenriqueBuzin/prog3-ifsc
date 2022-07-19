#include "form.h"

Form::Form(QString type, QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;
    _leftLayout = new QVBoxLayout;

    if(type == "Livro"){
        _label = new QLabel(type);
    }else{
        _label = new QLabel(type);
    }
    _leftLayout->addWidget(_label);

    // Qualquer um
    _label = new QLabel("Nome");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    // Livro
    _label = new QLabel("ISBN");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Autor");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Editora");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Edição");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Ano da Edição");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Ano Lançamento");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    // Componente
    _label = new QLabel("Tensão");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Corrente");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Tipo");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Quantidade");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _leftLayout->addStretch();

    _topLayout->addLayout(_leftLayout);

    _button = new QPushButton("Cadastrar");
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}

Form::Form(Item item, QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;
    _leftLayout = new QVBoxLayout;

    // Qualquer um
    _label = new QLabel("Nome");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    // Livro
    _label = new QLabel("ISBN");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Autor");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Editora");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Edição");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Ano da Edição");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Ano Lançamento");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    // Componente
    _label = new QLabel("Tensão");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Corrente");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Tipo");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _label = new QLabel("Quantidade");
    _leftLayout->addWidget(_label);
    _input = new QLineEdit("");
    _leftLayout->addWidget(_input);

    _leftLayout->addStretch();

    _topLayout->addLayout(_leftLayout);

    _button = new QPushButton("Cadastrar");
    _rightLayout->addWidget(_button);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    this->setLayout(_topLayout);
}
