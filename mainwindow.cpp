#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_m_PlayBtn_pressed()
{
    ui->m_PlayBtn->m_State = State::Pressed;
    ui->m_PlayBtn->setStyleSheet("QPushButton{ background-color: green;}");
}

void MainWindow::on_m_PlayBtn_released()
{
    ui->m_PlayBtn->m_State = State::Released;
    ui->m_PlayBtn->setStyleSheet("QPushButton{ background-color: red;}");
}

void MainWindow::on_m_SettingsBtn_pressed()
{
    ui->m_SettingsBtn->m_State = State::Pressed;
    ui->m_SettingsBtn->setStyleSheet("QPushButton{ background-color: green;}");
}

void MainWindow::on_m_SettingsBtn_released()
{
    ui->m_SettingsBtn->m_State = State::Released;
    ui->m_SettingsBtn->setStyleSheet("QPushButton{ background-color: red;}");
}

void MainWindow::on_m_QuitBtn_pressed()
{
    ui->m_QuitBtn->m_State = State::Pressed;
    ui->m_QuitBtn->setStyleSheet("QPushButton{ background-color: green;}");
}

void MainWindow::on_m_QuitBtn_released()
{
    ui->m_QuitBtn->m_State = State::Released;
    ui->m_QuitBtn->setStyleSheet("QPushButton{ background-color: red;}");
}
