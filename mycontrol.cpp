#include "mycontrol.h"
#include <QEvent>

MyControl::MyControl(QWidget *parent)
    : QWidget{parent}
{
    m_Button = new MyButton(parent);
    m_label = new QLabel(parent);
}

void MyControl::enterEvent(QEnterEvent *event)
{
    if(m_Button->m_State == State::Released)
    {

    }
}

void MyControl::leaveEvent(QEvent *event)
{
    if(m_Button->m_State == State::Released)
    {
        m_label->setGeometry(m_Button->x() + m_Button->width(), m_Button->y() + m_Button->height(), m_label->width(), m_label->height());
    }
}
