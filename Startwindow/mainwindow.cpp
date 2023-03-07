#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "test.h"

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
    Test *t = new Test ();
    t->show();
    t->setGeometry(pos().x(), pos().y(), width(), height());
    this->~MainWindow();

}

