/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Feb 25 01:23:25 2009
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
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionCreate_New_Mod;
    QAction *actionLoad_Existing_Mod;
    QAction *actionExport_Mod;
    QAction *actionExit;
    QAction *actionUnlimited_play;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_20;
    QWidget *tab_12;
    QWidget *tab_13;
    QWidget *tab_14;
    QWidget *tab_4;
    QWidget *tab_5;
    QTextBrowser *textBrowser_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QLabel *label_15;
    QTreeWidget *treeWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QSpinBox *spinBox_15;
    QSpinBox *spinBox_16;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_6;
    QTextEdit *textEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QWidget *tab_6;
    QTabWidget *tabWidget_3;
    QWidget *tab_15;
    QWidget *tab_16;
    QWidget *tab_21;
    QWidget *tab_22;
    QWidget *tab_24;
    QWidget *tab_2;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *tab_10;
    QTabWidget *tabWidget_4;
    QWidget *tab_17;
    QWidget *tab_18;
    QWidget *tab_19;
    QWidget *tab_11;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuScripts;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindowClass)
    {
    if (MainWindowClass->objectName().isEmpty())
        MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
    MainWindowClass->resize(780, 562);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
    MainWindowClass->setSizePolicy(sizePolicy);
    actionCreate_New_Mod = new QAction(MainWindowClass);
    actionCreate_New_Mod->setObjectName(QString::fromUtf8("actionCreate_New_Mod"));
    actionLoad_Existing_Mod = new QAction(MainWindowClass);
    actionLoad_Existing_Mod->setObjectName(QString::fromUtf8("actionLoad_Existing_Mod"));
    actionExport_Mod = new QAction(MainWindowClass);
    actionExport_Mod->setObjectName(QString::fromUtf8("actionExport_Mod"));
    actionExit = new QAction(MainWindowClass);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    actionUnlimited_play = new QAction(MainWindowClass);
    actionUnlimited_play->setObjectName(QString::fromUtf8("actionUnlimited_play"));
    actionHelp = new QAction(MainWindowClass);
    actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
    actionAbout = new QAction(MainWindowClass);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    centralWidget = new QWidget(MainWindowClass);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    tabWidget = new QTabWidget(centralWidget);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(0, 0, 781, 461));
    sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
    tabWidget->setSizePolicy(sizePolicy);
    tabWidget->setElideMode(Qt::ElideLeft);
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(20, 10, 61, 16));
    label->setContextMenuPolicy(Qt::NoContextMenu);
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 40, 71, 21));
    label_2->setContextMenuPolicy(Qt::NoContextMenu);
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(20, 70, 71, 16));
    label_3->setContextMenuPolicy(Qt::NoContextMenu);
    label_4 = new QLabel(tab);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 100, 81, 16));
    label_4->setContextMenuPolicy(Qt::NoContextMenu);
    label_5 = new QLabel(tab);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(20, 130, 91, 21));
    label_5->setContextMenuPolicy(Qt::NoContextMenu);
    label_5->setFrameShape(QFrame::NoFrame);
    label_5->setFrameShadow(QFrame::Raised);
    label_6 = new QLabel(tab);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(20, 190, 51, 21));
    label_6->setContextMenuPolicy(Qt::NoContextMenu);
    label_7 = new QLabel(tab);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(20, 160, 101, 21));
    label_7->setContextMenuPolicy(Qt::NoContextMenu);
    spinBox = new QSpinBox(tab);
    spinBox->setObjectName(QString::fromUtf8("spinBox"));
    spinBox->setGeometry(QRect(130, 100, 101, 21));
    spinBox->setFocusPolicy(Qt::ClickFocus);
    spinBox->setFrame(true);
    spinBox_2 = new QSpinBox(tab);
    spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
    spinBox_2->setGeometry(QRect(130, 70, 101, 21));
    spinBox_2->setFocusPolicy(Qt::ClickFocus);
    spinBox_2->setFrame(true);
    spinBox_3 = new QSpinBox(tab);
    spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
    spinBox_3->setGeometry(QRect(130, 10, 101, 21));
    spinBox_3->setFocusPolicy(Qt::ClickFocus);
    spinBox_3->setFrame(true);
    spinBox_3->setValue(0);
    spinBox_4 = new QSpinBox(tab);
    spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
    spinBox_4->setGeometry(QRect(130, 40, 101, 21));
    spinBox_4->setFocusPolicy(Qt::ClickFocus);
    spinBox_4->setFrame(true);
    spinBox_5 = new QSpinBox(tab);
    spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
    spinBox_5->setGeometry(QRect(130, 130, 101, 21));
    spinBox_5->setFocusPolicy(Qt::ClickFocus);
    spinBox_5->setFrame(true);
    spinBox_6 = new QSpinBox(tab);
    spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
    spinBox_6->setGeometry(QRect(130, 160, 101, 21));
    spinBox_6->setFocusPolicy(Qt::ClickFocus);
    spinBox_6->setFrame(true);
    spinBox_7 = new QSpinBox(tab);
    spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
    spinBox_7->setGeometry(QRect(130, 190, 101, 21));
    spinBox_7->setFocusPolicy(Qt::ClickFocus);
    spinBox_7->setFrame(true);
    label_8 = new QLabel(tab);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(330, 10, 71, 16));
    label_8->setContextMenuPolicy(Qt::NoContextMenu);
    label_9 = new QLabel(tab);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(330, 100, 161, 16));
    label_9->setContextMenuPolicy(Qt::NoContextMenu);
    label_10 = new QLabel(tab);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(330, 70, 81, 21));
    label_10->setContextMenuPolicy(Qt::NoContextMenu);
    label_11 = new QLabel(tab);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(330, 190, 121, 21));
    label_11->setContextMenuPolicy(Qt::NoContextMenu);
    label_12 = new QLabel(tab);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(330, 160, 201, 16));
    label_12->setContextMenuPolicy(Qt::NoContextMenu);
    label_13 = new QLabel(tab);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(330, 40, 141, 21));
    label_13->setContextMenuPolicy(Qt::NoContextMenu);
    label_14 = new QLabel(tab);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(330, 130, 211, 21));
    label_14->setContextMenuPolicy(Qt::NoContextMenu);
    spinBox_8 = new QSpinBox(tab);
    spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
    spinBox_8->setGeometry(QRect(550, 190, 101, 21));
    spinBox_8->setFocusPolicy(Qt::ClickFocus);
    spinBox_8->setFrame(true);
    spinBox_9 = new QSpinBox(tab);
    spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));
    spinBox_9->setGeometry(QRect(550, 160, 101, 21));
    spinBox_9->setFocusPolicy(Qt::ClickFocus);
    spinBox_9->setFrame(true);
    spinBox_10 = new QSpinBox(tab);
    spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));
    spinBox_10->setGeometry(QRect(550, 100, 101, 21));
    spinBox_10->setFocusPolicy(Qt::ClickFocus);
    spinBox_10->setFrame(true);
    spinBox_11 = new QSpinBox(tab);
    spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));
    spinBox_11->setGeometry(QRect(550, 130, 101, 21));
    spinBox_11->setFocusPolicy(Qt::ClickFocus);
    spinBox_11->setFrame(true);
    spinBox_12 = new QSpinBox(tab);
    spinBox_12->setObjectName(QString::fromUtf8("spinBox_12"));
    spinBox_12->setGeometry(QRect(550, 40, 101, 21));
    spinBox_12->setFocusPolicy(Qt::ClickFocus);
    spinBox_12->setFrame(true);
    spinBox_13 = new QSpinBox(tab);
    spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));
    spinBox_13->setGeometry(QRect(550, 10, 101, 21));
    spinBox_13->setFocusPolicy(Qt::ClickFocus);
    spinBox_13->setFrame(true);
    spinBox_14 = new QSpinBox(tab);
    spinBox_14->setObjectName(QString::fromUtf8("spinBox_14"));
    spinBox_14->setGeometry(QRect(550, 70, 101, 21));
    spinBox_14->setFocusPolicy(Qt::ClickFocus);
    spinBox_14->setFrame(true);
    tabWidget->addTab(tab, QString());
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    tabWidget_2 = new QTabWidget(tab_3);
    tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
    tabWidget_2->setGeometry(QRect(0, 0, 781, 441));
    sizePolicy.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
    tabWidget_2->setSizePolicy(sizePolicy);
    tab_20 = new QWidget();
    tab_20->setObjectName(QString::fromUtf8("tab_20"));
    tabWidget_2->addTab(tab_20, QString());
    tab_12 = new QWidget();
    tab_12->setObjectName(QString::fromUtf8("tab_12"));
    tabWidget_2->addTab(tab_12, QString());
    tab_13 = new QWidget();
    tab_13->setObjectName(QString::fromUtf8("tab_13"));
    tabWidget_2->addTab(tab_13, QString());
    tab_14 = new QWidget();
    tab_14->setObjectName(QString::fromUtf8("tab_14"));
    tabWidget_2->addTab(tab_14, QString());
    tabWidget->addTab(tab_3, QString());
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    tabWidget->addTab(tab_4, QString());
    tab_5 = new QWidget();
    tab_5->setObjectName(QString::fromUtf8("tab_5"));
    textBrowser_3 = new QTextBrowser(tab_5);
    textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
    textBrowser_3->setGeometry(QRect(670, 0, 101, 431));
    groupBox = new QGroupBox(tab_5);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(290, 0, 181, 31));
    groupBox->setLayoutDirection(Qt::LeftToRight);
    radioButton_2 = new QRadioButton(groupBox);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(80, 10, 16, 21));
    radioButton = new QRadioButton(groupBox);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(10, 10, 61, 21));
    comboBox_2 = new QComboBox(groupBox);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setGeometry(QRect(140, 12, 41, 20));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
    comboBox_2->setSizePolicy(sizePolicy1);
    comboBox = new QComboBox(tab_5);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(140, 10, 151, 21));
    label_15 = new QLabel(tab_5);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(0, 10, 141, 21));
    treeWidget = new QTreeWidget(tab_5);
    new QTreeWidgetItem(treeWidget);

    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setGeometry(QRect(0, 30, 61, 411));
    scrollArea = new QScrollArea(tab_5);
    scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
    scrollArea->setGeometry(QRect(60, 30, 611, 411));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 607, 407));
    comboBox_3 = new QComboBox(scrollAreaWidgetContents);
    comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
    comboBox_3->setGeometry(QRect(100, 0, 91, 21));
    comboBox_4 = new QComboBox(scrollAreaWidgetContents);
    comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
    comboBox_4->setGeometry(QRect(190, 0, 91, 21));
    spinBox_15 = new QSpinBox(scrollAreaWidgetContents);
    spinBox_15->setObjectName(QString::fromUtf8("spinBox_15"));
    spinBox_15->setGeometry(QRect(0, 0, 101, 21));
    spinBox_15->setMaximum(1);
    spinBox_16 = new QSpinBox(scrollAreaWidgetContents);
    spinBox_16->setObjectName(QString::fromUtf8("spinBox_16"));
    spinBox_16->setGeometry(QRect(280, 0, 61, 21));
    lineEdit = new QLineEdit(scrollAreaWidgetContents);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(340, 0, 271, 21));
    groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(0, 20, 611, 81));
    textEdit = new QTextEdit(groupBox_2);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setGeometry(QRect(0, 20, 611, 71));
    groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(0, 100, 611, 71));
    textEdit_2 = new QTextEdit(groupBox_3);
    textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
    textEdit_2->setGeometry(QRect(0, 20, 611, 61));
    groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    groupBox_4->setGeometry(QRect(0, 170, 611, 81));
    lineEdit_2 = new QLineEdit(groupBox_4);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(0, 20, 611, 21));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
    lineEdit_2->setSizePolicy(sizePolicy2);
    plainTextEdit = new QPlainTextEdit(groupBox_4);
    plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
    plainTextEdit->setGeometry(QRect(0, 40, 611, 41));
    groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    groupBox_5->setGeometry(QRect(0, 250, 611, 81));
    textEdit_3 = new QTextEdit(groupBox_5);
    textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
    textEdit_3->setGeometry(QRect(0, 40, 611, 41));
    lineEdit_3 = new QLineEdit(groupBox_5);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(60, 20, 551, 21));
    lineEdit_4 = new QLineEdit(groupBox_5);
    lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
    lineEdit_4->setGeometry(QRect(0, 20, 61, 21));
    groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
    groupBox_6->setGeometry(QRect(0, 330, 611, 71));
    textEdit_4 = new QTextEdit(groupBox_6);
    textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
    textEdit_4->setGeometry(QRect(0, 40, 611, 41));
    lineEdit_5 = new QLineEdit(groupBox_6);
    lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
    lineEdit_5->setGeometry(QRect(60, 20, 551, 21));
    lineEdit_6 = new QLineEdit(groupBox_6);
    lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
    lineEdit_6->setGeometry(QRect(0, 20, 61, 21));
    scrollArea->setWidget(scrollAreaWidgetContents);
    tabWidget->addTab(tab_5, QString());
    tab_6 = new QWidget();
    tab_6->setObjectName(QString::fromUtf8("tab_6"));
    tabWidget_3 = new QTabWidget(tab_6);
    tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
    tabWidget_3->setGeometry(QRect(0, 0, 781, 441));
    tab_15 = new QWidget();
    tab_15->setObjectName(QString::fromUtf8("tab_15"));
    tabWidget_3->addTab(tab_15, QString());
    tab_16 = new QWidget();
    tab_16->setObjectName(QString::fromUtf8("tab_16"));
    tabWidget_3->addTab(tab_16, QString());
    tab_21 = new QWidget();
    tab_21->setObjectName(QString::fromUtf8("tab_21"));
    tabWidget_3->addTab(tab_21, QString());
    tab_22 = new QWidget();
    tab_22->setObjectName(QString::fromUtf8("tab_22"));
    tabWidget_3->addTab(tab_22, QString());
    tab_24 = new QWidget();
    tab_24->setObjectName(QString::fromUtf8("tab_24"));
    tabWidget_3->addTab(tab_24, QString());
    tabWidget->addTab(tab_6, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tabWidget->addTab(tab_2, QString());
    tab_7 = new QWidget();
    tab_7->setObjectName(QString::fromUtf8("tab_7"));
    tabWidget->addTab(tab_7, QString());
    tab_8 = new QWidget();
    tab_8->setObjectName(QString::fromUtf8("tab_8"));
    tabWidget->addTab(tab_8, QString());
    tab_9 = new QWidget();
    tab_9->setObjectName(QString::fromUtf8("tab_9"));
    tabWidget->addTab(tab_9, QString());
    tab_10 = new QWidget();
    tab_10->setObjectName(QString::fromUtf8("tab_10"));
    tabWidget_4 = new QTabWidget(tab_10);
    tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
    tabWidget_4->setGeometry(QRect(0, 0, 781, 441));
    tab_17 = new QWidget();
    tab_17->setObjectName(QString::fromUtf8("tab_17"));
    tabWidget_4->addTab(tab_17, QString());
    tab_18 = new QWidget();
    tab_18->setObjectName(QString::fromUtf8("tab_18"));
    tabWidget_4->addTab(tab_18, QString());
    tab_19 = new QWidget();
    tab_19->setObjectName(QString::fromUtf8("tab_19"));
    tabWidget_4->addTab(tab_19, QString());
    tabWidget->addTab(tab_10, QString());
    tab_11 = new QWidget();
    tab_11->setObjectName(QString::fromUtf8("tab_11"));
    tabWidget->addTab(tab_11, QString());
    textBrowser = new QTextBrowser(centralWidget);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(0, 460, 781, 81));
    textBrowser->setFrameShape(QFrame::Panel);
    textBrowser->setFrameShadow(QFrame::Sunken);
    MainWindowClass->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(MainWindowClass);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 780, 19));
    menuFile = new QMenu(menuBar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuSettings = new QMenu(menuBar);
    menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
    menuScripts = new QMenu(menuBar);
    menuScripts->setObjectName(QString::fromUtf8("menuScripts"));
    menuHelp = new QMenu(menuBar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    MainWindowClass->setMenuBar(menuBar);

    menuBar->addAction(menuFile->menuAction());
    menuBar->addAction(menuSettings->menuAction());
    menuBar->addAction(menuScripts->menuAction());
    menuBar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionCreate_New_Mod);
    menuFile->addAction(actionLoad_Existing_Mod);
    menuFile->addAction(actionExport_Mod);
    menuFile->addAction(actionExit);
    menuScripts->addAction(actionUnlimited_play);
    menuHelp->addAction(actionHelp);
    menuHelp->addAction(actionAbout);

    retranslateUi(MainWindowClass);

    tabWidget->setCurrentIndex(3);
    tabWidget_2->setCurrentIndex(2);
    tabWidget_3->setCurrentIndex(0);
    tabWidget_4->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
    MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionCreate_New_Mod->setText(QApplication::translate("MainWindowClass", "Create New Mod", 0, QApplication::UnicodeUTF8));
    actionLoad_Existing_Mod->setText(QApplication::translate("MainWindowClass", "Load Existing Mod", 0, QApplication::UnicodeUTF8));
    actionExport_Mod->setText(QApplication::translate("MainWindowClass", "Export Mod", 0, QApplication::UnicodeUTF8));
    actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
    actionUnlimited_play->setText(QApplication::translate("MainWindowClass", "Unlimited play", 0, QApplication::UnicodeUTF8));
    actionHelp->setText(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindowClass", "About", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Rulers</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Advisors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Leaders</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Merchants</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Spies</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Missionaries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    spinBox->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_2->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_3->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_4->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_5->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_6->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_7->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Inflation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">AI Aggressiveness</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Difficulty</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Lucky Nations</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Spread of Sea Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Size of Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Spread of Land Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    spinBox_8->setSpecialValueText(QApplication::translate("MainWindowClass", "Historical", 0, QApplication::UnicodeUTF8));
    spinBox_9->setSpecialValueText(QApplication::translate("MainWindowClass", "50 (Normal)", 0, QApplication::UnicodeUTF8));
    spinBox_10->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_11->setSpecialValueText(QApplication::translate("MainWindowClass", "50 (Normal)", 0, QApplication::UnicodeUTF8));
    spinBox_12->setSpecialValueText(QApplication::translate("MainWindowClass", "100", 0, QApplication::UnicodeUTF8));
    spinBox_13->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    spinBox_14->setSpecialValueText(QApplication::translate("MainWindowClass", "Normal", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowClass", "Gameplay Settings", 0, QApplication::UnicodeUTF8));
    tabWidget_2->setTabText(tabWidget_2->indexOf(tab_20), QApplication::translate("MainWindowClass", "Main", 0, QApplication::UnicodeUTF8));
    tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindowClass", "Countries", 0, QApplication::UnicodeUTF8));
    tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindowClass", "Technologies", 0, QApplication::UnicodeUTF8));
    tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindowClass", "Units", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowClass", "Common", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowClass", "Decisions", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MainWindowClass", "What type of event is this? Range", 0, QApplication::UnicodeUTF8));
    radioButton_2->setText(QApplication::translate("MainWindowClass", "Series", 0, QApplication::UnicodeUTF8));
    radioButton->setText(QApplication::translate("MainWindowClass", "Unique ", 0, QApplication::UnicodeUTF8));
    comboBox_2->clear();
    comboBox_2->insertItems(0, QStringList()
     << QApplication::translate("MainWindowClass", "10", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "100", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "1000", 0, QApplication::UnicodeUTF8)
    );
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("MainWindowClass", "New Document", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "Existing Document", 0, QApplication::UnicodeUTF8)
    );
    label_15->setText(QApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Select Event File</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("MainWindowClass", "Events", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    treeWidget->topLevelItem(0)->setText(0, QApplication::translate("MainWindowClass", "24001000", 0, QApplication::UnicodeUTF8));

    treeWidget->setSortingEnabled(__sortingEnabled);
    comboBox_3->clear();
    comboBox_3->insertItems(0, QStringList()
     << QApplication::translate("MainWindowClass", "- Legacy ID", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "0 Government", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "1 Diplomacy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "2 Economy", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "3 Military", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "4 Religion", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "5 Colonial", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "6 Custom", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "7 Custom", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "8 Custom", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "9 Custom", 0, QApplication::UnicodeUTF8)
    );
    comboBox_4->clear();
    comboBox_4->insertItems(0, QStringList()
     << QApplication::translate("MainWindowClass", "- Legacy ID", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "0 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "1 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "2 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "3 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "4 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "5 Series", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "6 Unique", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "7 Unique", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "8 Unique", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MainWindowClass", "9 Unique", 0, QApplication::UnicodeUTF8)
    );
    spinBox_15->setSpecialValueText(QApplication::translate("MainWindowClass", "Country Event", 0, QApplication::UnicodeUTF8));
    spinBox_16->setSpecialValueText(QApplication::translate("MainWindowClass", "001110", 0, QApplication::UnicodeUTF8));
    lineEdit->setText(QApplication::translate("MainWindowClass", "Event Title,  blank will fill in with event ID - 24001000", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("MainWindowClass", "Trigger", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("MainWindowClass", "Mean Time To Happen", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("MainWindowClass", "Title and description", 0, QApplication::UnicodeUTF8));
    lineEdit_2->setText(QApplication::translate("MainWindowClass", "Displayed Title", 0, QApplication::UnicodeUTF8));
    plainTextEdit->setPlainText(QApplication::translate("MainWindowClass", "Displayed Description", 0, QApplication::UnicodeUTF8));
    groupBox_5->setTitle(QApplication::translate("MainWindowClass", "Option A", 0, QApplication::UnicodeUTF8));
    lineEdit_3->setText(QApplication::translate("MainWindowClass", "Title of Option A", 0, QApplication::UnicodeUTF8));
    lineEdit_4->setText(QApplication::translate("MainWindowClass", "AI Chance", 0, QApplication::UnicodeUTF8));
    groupBox_6->setTitle(QApplication::translate("MainWindowClass", "Option B", 0, QApplication::UnicodeUTF8));
    lineEdit_5->setText(QApplication::translate("MainWindowClass", "Title of Option B", 0, QApplication::UnicodeUTF8));
    lineEdit_6->setText(QApplication::translate("MainWindowClass", "AI Chance", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindowClass", "Events", 0, QApplication::UnicodeUTF8));
    tabWidget_3->setTabText(tabWidget_3->indexOf(tab_15), QApplication::translate("MainWindowClass", "Advisors", 0, QApplication::UnicodeUTF8));
    tabWidget_3->setTabText(tabWidget_3->indexOf(tab_16), QApplication::translate("MainWindowClass", "Countries", 0, QApplication::UnicodeUTF8));
    tabWidget_3->setTabText(tabWidget_3->indexOf(tab_21), QApplication::translate("MainWindowClass", "Diplomacy", 0, QApplication::UnicodeUTF8));
    tabWidget_3->setTabText(tabWidget_3->indexOf(tab_22), QApplication::translate("MainWindowClass", "Provinces", 0, QApplication::UnicodeUTF8));
    tabWidget_3->setTabText(tabWidget_3->indexOf(tab_24), QApplication::translate("MainWindowClass", "Wars", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindowClass", "History", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowClass", "Interface", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindowClass", "Localisation", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindowClass", "Map", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindowClass", "Missions", 0, QApplication::UnicodeUTF8));
    tabWidget_4->setTabText(tabWidget_4->indexOf(tab_17), QApplication::translate("MainWindowClass", "Flags", 0, QApplication::UnicodeUTF8));
    tabWidget_4->setTabText(tabWidget_4->indexOf(tab_18), QApplication::translate("MainWindowClass", "Modifiers", 0, QApplication::UnicodeUTF8));
    tabWidget_4->setTabText(tabWidget_4->indexOf(tab_19), QApplication::translate("MainWindowClass", "Variables", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindowClass", "Index", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindowClass", "********", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
    menuSettings->setTitle(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
    menuScripts->setTitle(QApplication::translate("MainWindowClass", "Tools", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
