#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QDebug>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

void f()
{
    qDebug() << "Hi";
}

void g()
{
    qDebug() << "Bye";
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.resize(300,200);
    QPushButton *button = new QPushButton("Push me",&w);


    QLabel *label = new QLabel("sdfd",&w);


    //auto changeSize = [&](bool){w.resize(12,10);};

    QObject::connect(button, &QPushButton::clicked,&f);
    QObject::connect(button, &QPushButton::clicked,&g);
    QObject::connect(button, &QPushButton::clicked, label, &QLabel::hide);
    QObject::connect(button, &QPushButton::clicked,&w, &MainWindow::changeSize);
    //label->setText("hello");

    QFont font = label->font();
    font.setPointSize(50);
    font.setBold(true);
    label->setFont(font);
    //label->setParent(&w);
    label->move(50, 50);
    //w.setCentralWidget(label);


    label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    QWidget *wid = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(wid);
    layout->addWidget(button);
    layout->addWidget(label);

    wid->setLayout(layout);
    w.setCentralWidget(wid);

    w.show();
    //w.hide();
    //label->show();
    //label->hide();

    qDebug() << "Program started!";
    int result = a.exec();
    qDebug() << "Program terminated!";

    return result;
}
