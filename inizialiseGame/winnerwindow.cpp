#include "winnerwindow.h"
#include "./ui_winnerwindow.h"

#include "inizialisegame.h"
#include "testside.h"

WinnerWindow::WinnerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WinnerWindow)
{
    ui->setupUi(this);

}

WinnerWindow::~WinnerWindow()
{
    delete ui;
}


void WinnerWindow::on_pbnReturntoMenu_clicked()
{
    Testside *s = new Testside();
    s->setGeometry(pos().x(), pos().y(), width(), height());
    s->setWindowFlags(s->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    s->show();
}

void WinnerWindow::on_pbnStartGame_clicked()
{
    InizialiseGame *t = new InizialiseGame();
    t->setGeometry(pos().x(), pos().y(), width(), height());
    t->setWindowFlags(t->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    t->show();

}

