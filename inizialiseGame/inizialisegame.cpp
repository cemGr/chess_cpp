#include "inizialisegame.h"
#include "./ui_inizialisegame.h"


#include "testside.h"
//#define Path "C:/inizialiseGameChess/inizialiseGame/Assets/inizialiseGame/giphy.gif"

inizialiseGame::inizialiseGame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inizialiseGame)
{
    ui->setupUi(this);
}

inizialiseGame::~inizialiseGame()
{
    delete ui;
}


void inizialiseGame::on_pbnStartGame_clicked()
{
    Testside *t = new Testside();
    t->setGeometry(pos().x(), pos().y(), width(), height());
    t->setWindowFlags(t->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    t->show();
}

void inizialiseGame::on_pbnReturntoMenu_clicked()
{
    Testside *t = new Testside();
    t->setGeometry(pos().x(), pos().y(), width(), height());
    t->setWindowFlags(t->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    t->show();
}

