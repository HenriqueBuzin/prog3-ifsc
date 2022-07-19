#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>
#include <QtWidgets>

#include "system.h"

class Warehouse : public QMainWindow
{
    Q_OBJECT

public:
    Warehouse(QWidget *parent = nullptr);

private:
    System * _centralWidget;

};
#endif // WAREHOUSE_H
