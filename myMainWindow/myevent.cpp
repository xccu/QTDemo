#include "myevent.h"
#include "ui_myevent.h"

myEvent::myEvent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myEvent)
{
    ui->setupUi(this);
}

myEvent::~myEvent()
{
    delete ui;
}
