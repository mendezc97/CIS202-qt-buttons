#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    button1 = new QPushButton("Click Me",this);
    label1 = new QLabel("Label 1",this);
    label1->move(button1->pos()+QPoint(button1->width()+5,0));
    connect(button1,SIGNAL(clicked(bool)),this,SLOT(onbutton1Press()));

    button2 = new QPushButton("Button 2", this);
    label2 = new QLabel("Label 2", this);
    button2->move(button2->pos()+QPoint(button2->width()-100,30));
    label2->move(button2->pos()+QPoint(button2->width()+5,0));
    connect(button2, SIGNAL(clicked(bool)), this, SLOT(onbutton2Press()));
}

void MainWindow::onbutton1Press()
{
    qDebug() << "Pressed";
}

void MainWindow::onbutton2Press()
{
    qDebug()<< "Button 2: Pressed";
}
