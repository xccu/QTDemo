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
    void mousePressEvent(QMouseEvent *); //鼠标事件
    void keyPressEvent(QKeyEvent *);     //键盘事件

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
