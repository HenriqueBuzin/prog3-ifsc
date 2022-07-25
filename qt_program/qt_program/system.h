#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <QtWidgets>
#include <QDebug>

#include "form.h"
#include "database.h"

class System: public QWidget
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);

public slots:
    void book();
    void component();
    void remove();
    void save();
    void update();

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QPushButton * _button;

    QTableWidget * _table;

    QStringList _horizontalLabels;
    QStringList _verticalLabels;

    Database _database;

};

#endif // SYSTEM_H
