#include "hugo.h"

Hugo::Hugo(QWidget *parent)
    : QWidget{parent}
{
    _label = new QLabel("Label");
    _button = new QPushButton(" OK ");
    _layout = new QHBoxLayout;
    _layout->addWidget(_label);
    _layout->addWidget(_button);
    this->setLayout(_layout);

}

Hugo::~Hugo()
{
}
