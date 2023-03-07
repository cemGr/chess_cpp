#ifndef TESTSIDE_H
#define TESTSIDE_H

#include <QWidget>

namespace Ui {
class Testside;
}

class Testside : public QWidget
{
    Q_OBJECT

public:
    explicit Testside(QWidget *parent = nullptr);
    ~Testside();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Testside *ui;
};

#endif // TESTSIDE_H
