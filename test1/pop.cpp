#include "pop.h"

pop::pop(QWidget *parent)
    : QWidget{parent}


        {

            QPushButton *button1 = new QPushButton("Start the Game", this);
            QPushButton *button2 = new QPushButton("Return to menu", this);

            QLabel *label = new QLabel("Player X is victorious", this);

            QLabel *gifLabel = new QLabel(this);

            QMovie *gif = new QMovie("C:/Users/paulg/OneDrive/Documents/test1/frau.gif");

             gifLabel->setMovie(gif);

              gif->start();

              QLabel *gifLabelzwei = new QLabel(this);

              QMovie *gifzwei = new QMovie("C:/Users/paulg/OneDrive/Documents/test1/feuerwerk1.gif");

               gifLabelzwei->setMovie(gifzwei);

                gifzwei->start();

                QLabel *gifLabeldrei = new QLabel(this);

                QMovie *gifdrei = new QMovie("C:/Users/paulg/OneDrive/Documents/test1/feuerwerk2.gif");

                 gifLabeldrei->setMovie(gifdrei);

                  gifdrei->start();





            QGridLayout *layout = new QGridLayout;
            layout->addWidget(button1,1,0);
            layout->addWidget(button2, 1,3);
            layout->addWidget(label, 0,2,1,1);
            layout->addWidget(gifLabel, 1, 2);
            layout->addWidget(gifLabelzwei,0,1);
            layout->addWidget(gifLabeldrei,0,3);




            setLayout(layout);





            setFixedSize(600, 400);

        }
    ;







    /*void showPopup(const QString& message)
    {
           QMessageBox messageBox;
            messageBox.setText(message);
            messageBox.setWindowTitle("Popup-Fenster");
            messageBox.setSizeGripEnabled(true);
            messageBox.exec();
    }*/





