#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "form.h"
#include "csv.h"

class System: public QWidget
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);

public slots:
    void book();
    void component();
    void remove();

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QPushButton * _button;
    QTableWidget * _table;
};

#endif // SYSTEM_H
