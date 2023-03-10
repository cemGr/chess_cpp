#ifndef INIZIALISEGAME_H
#define INIZIALISEGAME_H

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class inizialiseGame; }
QT_END_NAMESPACE

class InizialiseGame : public QWidget
{
    Q_OBJECT

public:
    InizialiseGame(QWidget *parent = nullptr);
    ~InizialiseGame();

private slots:
    void on_pbnStartGame_clicked();

    void on_pbnReturntoMenu_clicked();

private:
    Ui::inizialiseGame *ui;
};
#endif // INIZIALISEGAME_H
