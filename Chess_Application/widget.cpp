#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //create frames
    createTitleFrame();
    createBottomFrame();

    //window layout
    QVBoxLayout* windowLayout = new QVBoxLayout(this);
    windowLayout->addWidget(frame, 1);
    windowLayout->addWidget(frame2, 1);
    setLayout(windowLayout);
    //setFixedSize(1280,720);
    QObject::connect(pbnReturn,SIGNAL(clicked(bool)),this,SLOT (pressReturn(bool)));
    QObject::connect(pbnReturn,SIGNAL(clicked(bool)),this,SLOT (pressStartGame(bool)));
}
Widget::~Widget()
{
    delete ui;
}

void Widget::createTitleFrame(){
    //create frame
    frame = new QFrame(this);
    frame->setFrameStyle(QFrame::Box);
    frame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    //create titleBoxLayout
    titleBoxLayout = new QGridLayout(frame);
    titleBoxLayout->setContentsMargins(10, 10, 10, 10);
    titleBoxLayout->setSpacing(10);
    titleBoxLayout->setRowMinimumHeight(1,50);

    //create Widgets
    pbnReturn = new QPushButton("Return to menu",this);
        pbnReturn->setFixedSize(150,50);
    title = new QLabel("Game Initialization!", this);

    //add Widget to Layout
    titleBoxLayout->addWidget(pbnReturn,1,1, 1, 1, Qt::AlignCenter);
    titleBoxLayout->addWidget(title,1,2,1,1, Qt::AlignCenter);

    //frame layout
    frame->setLayout(titleBoxLayout);
}

void Widget::createBottomFrame(){
    //create frame
    frame2 = new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);

    //create titleBoxLayout
    bottomBoxLayout = new QGridLayout(frame2);
    bottomBoxLayout->setContentsMargins(10, 10, 10, 10);
    bottomBoxLayout->setSpacing(10);

    //create Widgets
    imageLabel1 = new QLabel;
    QPixmap image1("C:/ChessApplication/Chess_Application/Yasuo.jpg");
    imageLabel1->setPixmap(image1);
    imageLabel2 = new QLabel;
    QPixmap image2("C:/ChessApplication/Chess_Application/Yasuo.jpg");
    imageLabel2->setPixmap(image2);
    createInputPlayer1();
    createInputPlayer2();

    //add Widget to Layout
    pbnStartGame = new QPushButton("Start Game", this);
        pbnStartGame->setFixedSize(300,50);
    bottomBoxLayout->addWidget(imageLabel1,1,1, 1, 1, Qt::AlignCenter);
    bottomBoxLayout->addWidget(imageLabel2,1,3, 1, 1, Qt::AlignCenter);
    bottomBoxLayout->addWidget(pbnStartGame,3,2, 1, 1, Qt::AlignCenter);

    //frame layout
    frame2->setLayout(bottomBoxLayout);
}

void Widget::createInputPlayer1(){
    //create Frame
    p1Frame = new QFrame(frame2);
        bottomBoxLayout->addWidget(p1Frame,2,1, 1, 1, Qt::AlignCenter);
    p1Frame->setFrameStyle(QFrame::NoFrame);
    p1Layout = new QHBoxLayout(p1Frame);
    lPlayer1 = new QLabel("Player 1: ");
    lePlayer1 = new QLineEdit;

    //add to Layout
    p1Layout->addWidget(lPlayer1,0);
    p1Layout->addWidget(lePlayer1,0);
}

void Widget::createInputPlayer2(){
    //create Frame
    p2Frame = new QFrame(frame2);
        bottomBoxLayout->addWidget(p2Frame,2,3, 1, 1, Qt::AlignCenter);
    p2Frame->setFrameStyle(QFrame::NoFrame);
    p2Layout = new QHBoxLayout(p2Frame);
    lPlayer2 = new QLabel("Player 1: ");
    lePlayer2 = new QLineEdit;

    //add to Layout
    p2Layout->addWidget(lPlayer2,0);
    p2Layout->addWidget(lePlayer2,0);
}
//===================================================================================================
//signals and slots
void Widget::pressReturn(bool test){
    //hide() the own window

    //show the mainMenu window
}
void Widget::pressStartGame(bool test){
    //hide() the own window

    //show the chessWindow window

}

