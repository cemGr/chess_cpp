#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //frame
    frame = new QFrame(this);
    frame->setFrameStyle(QFrame::NoFrame);
    frame->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //frameGrid
    layoutFrame = new QGridLayout(frame);
    layoutFrame->setSpacing(40);

    //create widgets
    button1 = new QPushButton("Start the Game", this);
    button2 = new QPushButton("Return to menu", this);

    label = new QLabel("Player X is victorious");

    gifLabelEins = new QLabel(this);
    gifEins = new QMovie("C:/Qt tests/Popup/Popup/giphy.gif");
    gifLabelEins->setMovie(gifEins);
    gifEins->start();

    gifLabelZwei = new QLabel(this);
    gifZwei = new QMovie("C:/Qt tests/Popup/Popup/giphy.gif");
    gifLabelZwei->setMovie(gifZwei);
    gifZwei->start();

    gifLabelDrei = new QLabel(this);
    gifDrei = new QMovie("C:/Qt tests/Popup/Popup/giphy.gif");
    gifLabelDrei->setMovie(gifDrei);
    gifDrei->start();

    //add Widget to Layout
    layoutFrame->addWidget(button1,2,1,1,1, Qt::AlignCenter);
    layoutFrame->addWidget(button2,2,3,1,1, Qt::AlignCenter);
    layoutFrame->addWidget(label,1,2,1,1, Qt::AlignCenter);
    layoutFrame->addWidget(gifLabelEins,2,2,1,1, Qt::AlignCenter);
    layoutFrame->addWidget(gifLabelZwei,1,1,1,1, Qt::AlignCenter);
    layoutFrame->addWidget(gifLabelDrei,1,3,1,1, Qt::AlignCenter);

    //frame layout
    frame->setLayout(layoutFrame);

    //layout window
    QVBoxLayout* windowLayout = new QVBoxLayout(this);
    windowLayout->addWidget(frame, 1);
    setLayout(windowLayout);
    setFixedSize(400, 150);
}
Widget::~Widget()
{
    delete ui;
}


