#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>
#include <QLabel>

enum class State {Pressed , Released};

class MyButton : public QPushButton
{
    Q_OBJECT

public:
    MyButton(QWidget *parent = nullptr);

public:
    State m_State;
    QLabel * m_label;

signals:
    void mouseEntered(bool mouseHasEntered);

protected:
    virtual void enterEvent(QEnterEvent *e)override;
    virtual void leaveEvent(QEvent *e)override;
};

#endif // MYBUTTON_H
