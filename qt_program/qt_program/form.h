#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QWidget>
#include <QtWidgets>

class Form: public QWidget
{
    Q_OBJECT
public:
    explicit Form(QString type, QWidget *parent = nullptr);

public slots:
    void access();

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

};

#endif // UPDATEITEM_H
