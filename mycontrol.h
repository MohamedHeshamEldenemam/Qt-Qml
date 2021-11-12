#ifndef MYCONTROL_H
#define MYCONTROL_H

#include <QObject>
#include "mybutton.h"
#include <QLabel>

class MyControl : public QWidget
{
    Q_OBJECT
public:
    explicit MyControl(QWidget *parent = nullptr);

public:
    MyButton * m_Button;
    QLabel * m_label;

protected :
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
signals:

};

#endif // MYCONTROL_H
