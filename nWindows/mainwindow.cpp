#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets> //添加头文件

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //将界面上按钮的显示文本更改为“新窗口”
    ui->pushButton->setText(QString::fromLocal8Bit("新窗口"));
    //ui->pushButton->setText("新窗口");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDialog *dlg = new QDialog(this);
    dlg->show();
}
