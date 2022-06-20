#include "warehouse.h"

Warehouse::Warehouse(QWidget *parent)
    : QMainWindow(parent)
{
    _centralWidget = new System;
    this->setCentralWidget(_centralWidget);
}
