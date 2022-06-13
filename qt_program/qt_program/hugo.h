#ifndef HUGO_H
#define HUGO_H

#include <QWidget>
#include <QtWidgets>

class Hugo : public QWidget
{
    Q_OBJECT
public:
    explicit Hugo(QWidget *parent = nullptr);
    ~Hugo();

signals:

private:
    QHBoxLayout * _layout;
    QLabel * _label;
    QPushButton * _button;
};

#endif // HUGO_H
