#ifndef MYEVENT_H
#define MYEVENT_H

#include <QWidget>

namespace Ui {
class myEvent;
}

class myEvent : public QWidget
{
    Q_OBJECT

public:
    explicit myEvent(QWidget *parent = nullptr);
    ~myEvent();

private:
    Ui::myEvent *ui;
};

#endif // MYEVENT_H
