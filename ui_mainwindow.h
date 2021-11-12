/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MyButton *m_PlayBtn;
    MyButton *m_SettingsBtn;
    MyButton *m_QuitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_PlayBtn = new MyButton(centralwidget);
        m_PlayBtn->setObjectName(QString::fromUtf8("m_PlayBtn"));
        m_PlayBtn->setGeometry(QRect(100, 60, 16, 29));
        m_PlayBtn->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"     background-color: red;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: green;     \n"
" }\n"
" QPushButton:hover :!pressed{\n"
"     background-color: red;\n"
" }"));
        m_SettingsBtn = new MyButton(centralwidget);
        m_SettingsBtn->setObjectName(QString::fromUtf8("m_SettingsBtn"));
        m_SettingsBtn->setGeometry(QRect(100, 90, 16, 29));
        m_SettingsBtn->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"     background-color: red;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: green;     \n"
" }\n"
" QPushButton:hover :!pressed{\n"
"     background-color: red;\n"
" }"));
        m_QuitBtn = new MyButton(centralwidget);
        m_QuitBtn->setObjectName(QString::fromUtf8("m_QuitBtn"));
        m_QuitBtn->setGeometry(QRect(100, 120, 16, 29));
        m_QuitBtn->setStyleSheet(QString::fromUtf8(" QPushButton{\n"
"     background-color: red;\n"
" }\n"
" QPushButton:pressed {\n"
"     background-color: green;     \n"
" }\n"
" QPushButton:hover:!pressed {\n"
"     background-color: yellow;\n"
" }"));

        m_PlayBtn->m_label->setObjectName(QString::fromUtf8("label"));
        m_PlayBtn->m_label->setGeometry(QRect(140, 70, 63, 20));

        m_SettingsBtn->m_label->setObjectName(QString::fromUtf8("label_2"));
        m_SettingsBtn->m_label->setGeometry(QRect(140, 100, 63, 20));

        m_QuitBtn->m_label->setObjectName(QString::fromUtf8("label_3"));
        m_QuitBtn->m_label->setGeometry(QRect(140, 130, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_PlayBtn->setText(QString());
        m_SettingsBtn->setText(QString());
        m_QuitBtn->setText(QString());
        m_PlayBtn->m_label->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        m_SettingsBtn->m_label->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        m_QuitBtn->m_label->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
