#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>
#include <QtWidgets>
#include "hugo.h"

class Warehouse : public QMainWindow
{
    Q_OBJECT

public:
    Warehouse(QWidget *parent = nullptr);
    ~Warehouse();

private:
    Hugo * _centralWidget;

};
#endif // WAREHOUSE_H
