#include "window.h"

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    QPushButton *button = new QPushButton("Chess the game", this);
      button->setGeometry(150, 100, 750, 60);
      QFont f("Arial", 25);
      button->setFont(f);
      button->setStyleSheet("background-color: #D3D3D3");






     QPushButton *buttonzwei = new QPushButton("Start game", this);
     buttonzwei->setGeometry(250, 400, 500, 60);
     QFont A("Arial", 12);
     buttonzwei->setFont(A);
     buttonzwei->setStyleSheet("background-color:#D3D3D3");








     QPushButton *buttondrei = new QPushButton("Exit", this);
     buttondrei->setGeometry(250, 500, 500, 60);
     QFont Ab("Arial", 12);
     buttondrei->setFont(Ab);
     buttondrei->setStyleSheet("background-color:#D3D3D3");
}


