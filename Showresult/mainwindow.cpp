#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "startnewgame.h"
#include "returntomenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Startnewgame *s = new Startnewgame ();
    s->show();
    s->setGeometry(pos().x(), pos().y(), width(), height());
    this->~MainWindow();



}


void MainWindow::on_pushButton_2_clicked()
{
    Returntomenu *r = new Returntomenu ();
    r->show();
    r->setGeometry(pos().x(), pos().y(), width(), height());
    this->~MainWindow();

}

