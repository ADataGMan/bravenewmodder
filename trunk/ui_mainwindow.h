/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Feb 22 23:01:37 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QTabWidget *tbw_MainTab;
    QWidget *tab_Gameplay_Settings;
    QLabel *label;
    QWidget *tab_Common;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QWidget *tab_Decisions;
    QWidget *tab_Events;
    QWidget *tab_History;
    QWidget *tab_Interface;
    QWidget *tab_Localization;
    QWidget *tab_Map;
    QWidget *tab_Missions;
    QWidget *tab_Index;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
    if (MainWindowClass->objectName().isEmpty())
        MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
    MainWindowClass->resize(1016, 637);
    action_Quit = new QAction(MainWindowClass);
    action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
    centralWidget = new QWidget(MainWindowClass);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    tbw_MainTab = new QTabWidget(centralWidget);
    tbw_MainTab->setObjectName(QString::fromUtf8("tbw_MainTab"));
    tbw_MainTab->setGeometry(QRect(0, 0, 1011, 591));
    tab_Gameplay_Settings = new QWidget();
    tab_Gameplay_Settings->setObjectName(QString::fromUtf8("tab_Gameplay_Settings"));
    label = new QLabel(tab_Gameplay_Settings);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(320, 150, 471, 161));
    tbw_MainTab->addTab(tab_Gameplay_Settings, QString());
    tab_Common = new QWidget();
    tab_Common->setObjectName(QString::fromUtf8("tab_Common"));
    dateEdit = new QDateEdit(tab_Common);
    dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
    dateEdit->setGeometry(QRect(280, 150, 110, 22));
    timeEdit = new QTimeEdit(tab_Common);
    timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
    timeEdit->setGeometry(QRect(140, 150, 118, 22));
    spinBox = new QSpinBox(tab_Common);
    spinBox->setObjectName(QString::fromUtf8("spinBox"));
    spinBox->setGeometry(QRect(200, 210, 42, 22));
    horizontalSlider = new QSlider(tab_Common);
    horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
    horizontalSlider->setGeometry(QRect(280, 290, 160, 19));
    horizontalSlider->setOrientation(Qt::Horizontal);
    label_2 = new QLabel(tab_Common);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(445, 190, 221, 61));
    tbw_MainTab->addTab(tab_Common, QString());
    tab_Decisions = new QWidget();
    tab_Decisions->setObjectName(QString::fromUtf8("tab_Decisions"));
    tbw_MainTab->addTab(tab_Decisions, QString());
    tab_Events = new QWidget();
    tab_Events->setObjectName(QString::fromUtf8("tab_Events"));
    tbw_MainTab->addTab(tab_Events, QString());
    tab_History = new QWidget();
    tab_History->setObjectName(QString::fromUtf8("tab_History"));
    tbw_MainTab->addTab(tab_History, QString());
    tab_Interface = new QWidget();
    tab_Interface->setObjectName(QString::fromUtf8("tab_Interface"));
    tbw_MainTab->addTab(tab_Interface, QString());
    tab_Localization = new QWidget();
    tab_Localization->setObjectName(QString::fromUtf8("tab_Localization"));
    tbw_MainTab->addTab(tab_Localization, QString());
    tab_Map = new QWidget();
    tab_Map->setObjectName(QString::fromUtf8("tab_Map"));
    tbw_MainTab->addTab(tab_Map, QString());
    tab_Missions = new QWidget();
    tab_Missions->setObjectName(QString::fromUtf8("tab_Missions"));
    tbw_MainTab->addTab(tab_Missions, QString());
    tab_Index = new QWidget();
    tab_Index->setObjectName(QString::fromUtf8("tab_Index"));
    tbw_MainTab->addTab(tab_Index, QString());
    MainWindowClass->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(MainWindowClass);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 1016, 22));
    menu_File = new QMenu(menuBar);
    menu_File->setObjectName(QString::fromUtf8("menu_File"));
    menuSettings = new QMenu(menuBar);
    menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
    menuHelp = new QMenu(menuBar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    MainWindowClass->setMenuBar(menuBar);
    statusBar = new QStatusBar(MainWindowClass);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    MainWindowClass->setStatusBar(statusBar);

    menuBar->addAction(menu_File->menuAction());
    menuBar->addAction(menuSettings->menuAction());
    menuBar->addAction(menuHelp->menuAction());
    menu_File->addAction(action_Quit);

    retranslateUi(MainWindowClass);

    tbw_MainTab->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
    MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    action_Quit->setText(QApplication::translate("MainWindowClass", "Quit", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindowClass", "THIS IS IN THE GAMEPLAY TAB!!!", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Gameplay_Settings), QApplication::translate("MainWindowClass", "Gameplay Settings", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MainWindowClass", "This is in the COMMON tab", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Common), QApplication::translate("MainWindowClass", "Common", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Decisions), QApplication::translate("MainWindowClass", "Decisions", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Events), QApplication::translate("MainWindowClass", "Events", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_History), QApplication::translate("MainWindowClass", "History", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Interface), QApplication::translate("MainWindowClass", "Interface", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Localization), QApplication::translate("MainWindowClass", "Localization", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Map), QApplication::translate("MainWindowClass", "Map", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Missions), QApplication::translate("MainWindowClass", "Missions", 0, QApplication::UnicodeUTF8));
    tbw_MainTab->setTabText(tbw_MainTab->indexOf(tab_Index), QApplication::translate("MainWindowClass", "Index", 0, QApplication::UnicodeUTF8));
    menu_File->setTitle(QApplication::translate("MainWindowClass", "&File", 0, QApplication::UnicodeUTF8));
    menuSettings->setTitle(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
