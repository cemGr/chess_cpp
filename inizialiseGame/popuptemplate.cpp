#include "popuptemplate.h"
#include "ui_popuptemplate.h"

PopupTemplate::PopupTemplate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PopupTemplate)
{
    ui->setupUi(this);
}

PopupTemplate::~PopupTemplate()
{
    delete ui;
}

void PopupTemplate::on_pbnAction_clicked()
{
    //do action
}


void PopupTemplate::on_pbnReturntoGame_clicked()
{
    close();
}

