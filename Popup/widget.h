#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QObject>
#include <QFrame>

#include <QVBoxLayout>
#include <QGridLayout>
#include <QMessageBox>

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QMovie>

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
    QVBoxLayout *windowLayout;

    QFrame *frame;
    QGridLayout *layoutFrame;

    QPushButton *button1;
    QPushButton *button2;
    QLabel *label;

    QMovie *gifEins;
    QLabel *gifLabelEins;

    QMovie *gifZwei;
    QLabel *gifLabelZwei;

    QMovie *gifDrei;
    QLabel *gifLabelDrei;

signals:
    //void clicked();
public slots:
    //void pressReturn(bool back);
    //void pressStartGame(bool start);
};
#endif // WIDGET_H
