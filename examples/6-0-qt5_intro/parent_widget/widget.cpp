#include "widget.h"
#include <QPushButton>
#include <QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton;
    QLineEdit *line = new QLineEdit;
    button->setParent(this);
    button->move(50,50);
    line->setParent(this);
}

Widget::~Widget()
{

}
