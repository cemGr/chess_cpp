#ifndef WINNERWINDOW_H
#define WINNERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WinnerWindow; }
QT_END_NAMESPACE

class WinnerWindow : public QMainWindow
{
    Q_OBJECT

public:
    WinnerWindow(QWidget *parent = nullptr);
    ~WinnerWindow();

private slots:
    void on_pbnReturntoMenu_clicked();

    void on_pbnStartGame_clicked();

private:
    Ui::WinnerWindow *ui;
};
#endif // WINNERWINDOW_H
