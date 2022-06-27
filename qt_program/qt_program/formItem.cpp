#include "formItem.h"

FormItem::FormItem(QWidget *parent)
    : QWidget{parent}
{
    _topLayout = new QHBoxLayout;
    _rightLayout = new QVBoxLayout;

    // Qualquer um
    _label = new QLabel("Nome");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    // Livro
    _label = new QLabel("ISBN");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Autor");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Editora");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Edição");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Ano da Edição");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Ano Lançamento");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    // Componente
    _label = new QLabel("Tensão");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Corrente");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Tipo");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _label = new QLabel("Quantidade");
    _rightLayout->addWidget(_label);
    _input = new QLineEdit("");
    _rightLayout->addWidget(_input);

    _rightLayout->addStretch();

    _topLayout->addLayout(_rightLayout);

    _button = new QPushButton("Cadastrar");
    _topLayout->addWidget(_button);

    this->setLayout(_topLayout);
}
