#include "mybutton.h"
#include <QDebug>

MyButton::MyButton(QWidget *parent)
    : QPushButton(parent)
{
    m_State = State::Released;
    m_label = new QLabel(parent);
}

void MyButton::enterEvent(QEnterEvent *e)
{
    if(State::Pressed == m_State)
    {
        return;
    }
    //Call to base implementation
    QPushButton::enterEvent(e);
    resize(25 , height());
    //Your code
    emit mouseEntered(true);
     m_label->setGeometry(x() + width() + 14, y(), m_label->width(), m_label->height());
    qDebug ()<< "Mouse entered my Button";
}

void MyButton::leaveEvent(QEvent *e)
{
    if(State::Pressed == m_State)
    {
        return;
    }

    QPushButton::leaveEvent(e);
    resize(16 , height());
    emit mouseEntered(false);
    m_label->setGeometry(x() + width() + 5, y(), m_label->width(), m_label->height());
    qDebug ()<< "Mouse left my Button";
}
