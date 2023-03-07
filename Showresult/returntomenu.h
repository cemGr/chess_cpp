#ifndef RETURNTOMENU_H
#define RETURNTOMENU_H

#include <QWidget>

namespace Ui {
class Returntomenu;
}

class Returntomenu : public QWidget
{
    Q_OBJECT

public:
    explicit Returntomenu(QWidget *parent = nullptr);
    ~Returntomenu();

private:
    Ui::Returntomenu *ui;
};

#endif // RETURNTOMENU_H
