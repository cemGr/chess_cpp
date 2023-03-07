#include "test.h"
#include "ui_test.h"
#include "mainwindow.h"

Test::Test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Test)
{
    ui->setupUi(this);
}

Test::~Test()
{
    delete ui;
}

void Test::on_pushButton_clicked()
{
    MainWindow* wi = new MainWindow();
    wi->show();
    wi->setGeometry(pos().x(), pos().y(), width(), height());

    this->~Test();
}

