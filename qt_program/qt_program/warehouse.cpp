#include "warehouse.h"

Warehouse::Warehouse(QWidget *parent)
    : QMainWindow(parent)
{
    _centralWidget = new Hugo;
    this->setCentralWidget(_centralWidget);

}

Warehouse::~Warehouse()
{
}

