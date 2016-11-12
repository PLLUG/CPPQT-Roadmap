#include "widget.h"
#include <QApplication>

#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QPushButton *button = new QPushButton();
    button->setParent(&w);
    button->setText("Click me!");
    w.show();

    QObject::connect(button,&QPushButton::clicked,&w,&Widget::close);
    return a.exec();
}
