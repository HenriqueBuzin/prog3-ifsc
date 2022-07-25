#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QWidget>
#include <QtWidgets>

#include "database.h"

#include "item.h"

class Form: public QWidget
{
    Q_OBJECT
public:
    explicit Form(QString type, QWidget *parent = nullptr);

    explicit Form(int row, QWidget *parent = nullptr);

public slots:
    void registerItem();

private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QVBoxLayout * _leftLayout;
    QLabel * _label;
    QPushButton * _button;

    QLineEdit * _inputName;
    QLineEdit * _inputUrl;
    QLineEdit * _inputParam1;
    QLineEdit * _inputParam2;
    QLineEdit * _inputParam3;

    QString _type;

    Database _database;

};

#endif // UPDATEITEM_H
