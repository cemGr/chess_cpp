#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "inizialisegame.h"

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

void MainWindow::on_Initializegame_clicked()
{
    InizialiseGame *t = new InizialiseGame ();
    t->setWindowFlags(t->windowFlags() | Qt::WindowStaysOnTopHint);
    t->setGeometry(pos().x(), pos().y(), width(), height());
    close();
    t->show();
}

void MainWindow::on_Exit_clicked()
{
    close();
}

