#include "warehouse.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Warehouse w;
    w.show();
    return a.exec();
}
