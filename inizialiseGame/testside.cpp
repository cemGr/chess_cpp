#include "testside.h"
#include "./ui_testside.h"

#include "inizialisegame.h"
#include <QMessageBox>

Testside::Testside(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Testside)
{
    ui->setupUi(this);

}

Testside::~Testside()
{
    delete ui;
}

void Testside::on_pushButton_clicked()
{
    //QMessageBox::information(this,"why me", "pls kill me");
    InizialiseGame* g = new InizialiseGame();
    g->setGeometry(pos().x(), pos().y(), width(), height());
    g->setWindowFlags(g->windowFlags() | Qt::WindowStaysOnTopHint);
    close();
    g->show();
}

