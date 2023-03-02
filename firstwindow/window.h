#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLocale>
#include <QTranslator>
#include <QPushButton>
#include <QFont>
#include <QPalette>
#include <QHBoxLayout>
#include <QFrame>
#include <QSlider>
#include <QLabel>
#include <QLayout>


class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
QPushButton *button;
QPushButton *buttonzwei;
QPushButton *buttondrei;


signals:

};

#endif // WINDOW_H
