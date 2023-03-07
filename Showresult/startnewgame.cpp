#include "startnewgame.h"
#include "ui_startnewgame.h"
#include "mainwindow.h"
#include "returntomenu.h"

Startnewgame::Startnewgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Startnewgame)
{
    ui->setupUi(this);
}

Startnewgame::~Startnewgame()
{
    delete ui;
}
