#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void timerEvent(QTimerEvent *); //定时器事件

private:
    Ui::Widget *ui;
    QTimer *timer; //计时器
    int id1, id2, id3;

private slots: //信号槽
    void timerUpdate();
};

#endif // WIDGET_H
