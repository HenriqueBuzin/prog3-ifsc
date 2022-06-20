#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <QtWidgets>

#include "Book.h"
#include "Component.h"

class System: public QWidget
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);

public slots:
    void openBook();
    void openComponent();

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QPushButton * _button;
    QTableWidget * _table;
};

#endif // SYSTEM_H
