#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_m_PlayBtn_pressed();

    void on_m_PlayBtn_released();

    void on_m_SettingsBtn_pressed();

    void on_m_SettingsBtn_released();

    void on_m_QuitBtn_pressed();

    void on_m_QuitBtn_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
