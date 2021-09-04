#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

//鼠标事件
void Widget::mousePressEvent(QMouseEvent *e)
{
   ui->pushButton->setText(tr("(%1,%2)").arg(e->x()).arg(e->y()));
}

//键盘事件
void Widget::keyPressEvent(QKeyEvent *e)
{
   int x = ui->pushButton->x();
   int y = ui->pushButton->y();
   switch (e->key())
   {
        case Qt::Key_W : ui->pushButton->move(x, y-10); break;  //按键W
        case Qt::Key_S : ui->pushButton->move(x, y+10); break;  //按键S
        case Qt::Key_A : ui->pushButton->move(x-10, y); break;  //按键A
        case Qt::Key_D : ui->pushButton->move(x+10, y); break;  //按键D
   }
}
