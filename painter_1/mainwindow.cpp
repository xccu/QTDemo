#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//重绘事件处理函数
void MainWindow::paintEvent(QPaintEvent *)
{
    //（一）绘制简单图形
//    QPainter painter(this);
//    //drawLine()函数绘制了一条线段，线段的起点为(0, 0)，终点为(100, 100)
//    painter.drawLine(QPointF(0, 0), QPointF(100, 100));

//    QPainter painter(this);
//    QPen pen; //画笔
//    pen.setColor(QColor(255, 0, 0));        //设置画笔颜色(RGB)
//    QBrush brush(QColor(0, 255, 0, 125));   //画刷
//    painter.setPen(pen);                    //添加画笔
//    painter.setBrush(brush);                //添加画刷
//    painter.drawRect(50, 50, 200, 100);     //绘制矩形


    QPainter painter(this);
    QPen pen(Qt::DotLine);
    QBrush brush(Qt::blue);
    brush.setStyle(Qt::HorPattern); //设置画刷样式
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(50,50,200,200);


    QRectF rectangle(10.0, 20.0, 80.0, 60.0); //矩形
    int startAngle = 30 * 16;     //起始角度
    int spanAngle = 120 * 16;   //跨越度数
    //QPainter painter(this);
    painter.drawArc(rectangle, startAngle, spanAngle);

}
