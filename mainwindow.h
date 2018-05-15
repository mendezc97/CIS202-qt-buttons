#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void onbutton1Press();
    void onbutton2Press();

private:
    QPushButton *button1;
    QLabel *label1;
    QPushButton *button2;
    QLabel *label2;


};

#endif // MAINWINDOW_H
