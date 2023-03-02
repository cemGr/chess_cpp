#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
//===========================================================================
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    Ui::Widget *ui;
    QVBoxLayout* windowLayout;
    //Frame 1
    QFrame *frame;
    QGridLayout *titleBoxLayout;
    QPushButton *pbnReturn;
    QLabel *title;
    //Frame 2
    QFrame *frame2;
    QGridLayout *bottomBoxLayout;
        //InputPlayer
        QFrame *p1Frame;
        QHBoxLayout *p1Layout;
        QLabel *lPlayer1;
        QLineEdit *lePlayer1;
        QFrame *p2Frame;
        QHBoxLayout *p2Layout;
        QLabel *lPlayer2;
        QLineEdit *lePlayer2;
    QLabel *imageLabel1;
    QPixmap image1;
    QLabel *imageLabel2;
    QPixmap image2;
    QPushButton *pbnStartGame;

    void createTitleFrame();
    void createBottomFrame();
    void createInputPlayer1();
    void createInputPlayer2();
signals:
    void clicked();
public slots:
    void pressReturn(bool back);
    void pressStartGame(bool start);
};
#endif // WIDGET_H
