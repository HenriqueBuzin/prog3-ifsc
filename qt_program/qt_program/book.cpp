#include "book.h"

Book::Book(QWidget *parent)
    : QWidget{parent}
{

    QString _file = "books.csv";
    Csv obj(_file);
    QStringList _books = obj.Read();

    for(const auto& i:_books)
        qDebug() << "a";




    /*
    _layout = new QHBoxLayout;

    _label = new QLabel("Nome");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _label = new QLabel("ISBN");
    _layout->addWidget(_label);

    _input = new QLineEdit("");
    _layout->addWidget(_input);

    _button = new QPushButton("Cancelar");
    _layout->addWidget(_button);

    _button = new QPushButton("Cadastrar");
    _layout->addWidget(_button);

    QString _file = "books.csv";

    _button = new QPushButton("Salvar Livros");
    QObject::connect(_button, SIGNAL(clicked()), this, SLOT());
    _layout->addWidget(_button);

    this->setLayout(_layout);
    */
}
