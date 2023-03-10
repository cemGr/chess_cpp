#ifndef POPUPTEMPLATE_H
#define POPUPTEMPLATE_H

#include <QWidget>

namespace Ui {
class PopupTemplate;
}

class PopupTemplate : public QWidget
{
    Q_OBJECT

public:
    explicit PopupTemplate(QWidget *parent = nullptr);
    ~PopupTemplate();

private slots:
    void on_pbnAction_clicked();

    void on_pbnReturntoGame_clicked();

private:
    Ui::PopupTemplate *ui;
};

#endif // POPUPTEMPLATE_H
