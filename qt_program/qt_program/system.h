#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <QtWidgets>

class System: public QWidget
{
public:
    explicit System(QWidget *parent = nullptr);
    ~System();

signals:


private:
    QHBoxLayout * _topLayout;
    QVBoxLayout * _rightLayout;
    QPushButton * _button;
    QTableWidget * _table;
};

#endif // SYSTEM_H
