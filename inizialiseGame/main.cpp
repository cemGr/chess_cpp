#include "inizialisegame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    inizialiseGame w;
    w.show();
    return a.exec();
}
