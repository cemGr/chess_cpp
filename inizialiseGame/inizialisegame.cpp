#include "inizialisegame.h"
#include "./ui_inizialisegame.h"

#include "mainwindow.h"
#include "testside.h"

InizialiseGame::InizialiseGame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inizialiseGame)
{
    ui->setupUi(this);
}

InizialiseGame::~InizialiseGame()
{
    delete ui;
}

void InizialiseGame::on_pbnStartGame_clicked()
{
    Testside *t = new Testside();
    t->setGeometry(pos().x(), pos().y(), width(), height());
    t->setWindowFlags(t->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    t->show();
}

void InizialiseGame::on_pbnReturntoMenu_clicked()
{
    MainWindow *w = new MainWindow();
    w->setGeometry(pos().x(), pos().y(), width(), height());
    w->setWindowFlags(w->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    w->show();
}

