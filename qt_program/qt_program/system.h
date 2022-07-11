#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <QtWidgets>

#include "formItem.h"
#include "deleteItem.h"
#include "book.h"

class System: public QWidget
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);

public slots:
    void teste();
    void updateItem();
    void deleteItem();

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QPushButton * _button;
    QTableWidget * _table;
};

#endif // SYSTEM_H
