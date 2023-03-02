#ifndef POP_H
#define POP_H

#include <QWidget>
#include <QApplication>
#include <QMainWindow>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLayout>
#include <QMessageBox>
#include <QObject>
#include <QGridLayout>
#include <QMovie>

class pop : public QWidget
{
    Q_OBJECT
public:
    explicit pop(QWidget *parent = nullptr);
    QPushButton *button1;
    QPushButton *button2;
    QLabel *label;
    QLabel *gifLabel;
    QMovie *gif;
    QLabel *gifLabelzwei;
    QLabel *gifLabeldrei;
    QMovie *gifdrei;
    QGridLayout *layout;




signals:

};

#endif // POP_H
