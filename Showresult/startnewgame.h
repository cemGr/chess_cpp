#ifndef STARTNEWGAME_H
#define STARTNEWGAME_H

#include <QWidget>

namespace Ui {
class Startnewgame;
}

class Startnewgame : public QWidget
{
    Q_OBJECT

public:
    explicit Startnewgame(QWidget *parent = nullptr);
    ~Startnewgame();

private:
    Ui::Startnewgame *ui;
};

#endif // STARTNEWGAME_H
