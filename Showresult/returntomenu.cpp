#include "returntomenu.h"
#include "ui_returntomenu.h"

Returntomenu::Returntomenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Returntomenu)
{
    ui->setupUi(this);
}

Returntomenu::~Returntomenu()
{
    delete ui;
}
