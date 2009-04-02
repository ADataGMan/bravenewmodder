/********************************************************************************
** Form generated from reading ui file 'bravenewmodder.ui'
**
** Created: Thu Apr 2 14:34:33 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BRAVENEWMODDER_H
#define UI_BRAVENEWMODDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BravenewmodderClass
{
public:
    QAction *actionNew_Mod;
    QAction *actionLoad_Mod;
    QAction *actionSave_Mod;
    QAction *actionExport_Mod;
    QAction *actionExit;
    QAction *actionForce_Check;
    QAction *actionSuggested;
    QAction *actionOff;
    QAction *actionUnlimited_Play;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionAdd_New_Syntax;
    QAction *actionManage_My_Mod;
    QAction *actionEvent_Renumeration;
    QAction *actionLocalisation_Check;
    QAction *actionCreate_QuickScript;
    QAction *actionGenerate;
    QAction *actionGenerate_List;
    QAction *actionImport_Content;
    QAction *actionUndo;
    QAction *actionEditor_Settings;
    QWidget *centralWidget;
    QTabWidget *tbxMain;
    QWidget *tabGameplaySettings;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *tabCommon;
    QWidget *TabEvents;
    QTextBrowser *textBrowser;
    QTreeView *treeView;
    QFrame *frmEventStyle;
    QGroupBox *gbxType;
    QRadioButton *rdbCountry;
    QRadioButton *rdbProvince;
    QGroupBox *gbxNumber;
    QComboBox *cbxType;
    QComboBox *cbxRange;
    QSpinBox *sbxNumber;
    QGroupBox *groupBox_2;
    QRadioButton *rdbUnique;
    QRadioButton *rdbSeries;
    QSpinBox *sbxRange;
    QLineEdit *lneInternaleventname;
    QPushButton *psbNew;
    QPushButton *psbPreview;
    QPushButton *psbSave;
    QPushButton *psbPreview_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser_5;
    QWidget *tab_2;
    QTextBrowser *textBrowser_6;
    QWidget *tab_3;
    QTextBrowser *textBrowser_7;
    QWidget *tab_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QTextBrowser *textBrowser_2;
    QWidget *tab_6;
    QTextBrowser *textBrowser_3;
    QWidget *tab_7;
    QTextBrowser *textBrowser_4;
    QWidget *tab_8;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_6;
    QTextEdit *textEdit;
    QGroupBox *groupBox_4;
    QPlainTextEdit *plainTextEdit_2;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit_3;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *tabHistory;
    QWidget *tabInterface;
    QWidget *tabLocalisation;
    QWidget *tabMap;
    QWidget *tabMissions;
    QWidget *tabReference;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuSyntax_Check;
    QMenu *menuHelp;
    QMenu *menuTools;

    void setupUi(QMainWindow *BravenewmodderClass)
    {
        if (BravenewmodderClass->objectName().isEmpty())
            BravenewmodderClass->setObjectName(QString::fromUtf8("BravenewmodderClass"));
        BravenewmodderClass->resize(1024, 768);
        BravenewmodderClass->setMinimumSize(QSize(1024, 768));
        BravenewmodderClass->setMaximumSize(QSize(1024, 768));
        actionNew_Mod = new QAction(BravenewmodderClass);
        actionNew_Mod->setObjectName(QString::fromUtf8("actionNew_Mod"));
        actionLoad_Mod = new QAction(BravenewmodderClass);
        actionLoad_Mod->setObjectName(QString::fromUtf8("actionLoad_Mod"));
        actionSave_Mod = new QAction(BravenewmodderClass);
        actionSave_Mod->setObjectName(QString::fromUtf8("actionSave_Mod"));
        actionExport_Mod = new QAction(BravenewmodderClass);
        actionExport_Mod->setObjectName(QString::fromUtf8("actionExport_Mod"));
        actionExit = new QAction(BravenewmodderClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionForce_Check = new QAction(BravenewmodderClass);
        actionForce_Check->setObjectName(QString::fromUtf8("actionForce_Check"));
        actionForce_Check->setCheckable(true);
        actionForce_Check->setAutoRepeat(false);
        actionSuggested = new QAction(BravenewmodderClass);
        actionSuggested->setObjectName(QString::fromUtf8("actionSuggested"));
        actionSuggested->setCheckable(true);
        actionSuggested->setAutoRepeat(false);
        actionOff = new QAction(BravenewmodderClass);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        actionOff->setCheckable(true);
        actionOff->setAutoRepeat(false);
        actionUnlimited_Play = new QAction(BravenewmodderClass);
        actionUnlimited_Play->setObjectName(QString::fromUtf8("actionUnlimited_Play"));
        actionHelp = new QAction(BravenewmodderClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(BravenewmodderClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAdd_New_Syntax = new QAction(BravenewmodderClass);
        actionAdd_New_Syntax->setObjectName(QString::fromUtf8("actionAdd_New_Syntax"));
        actionManage_My_Mod = new QAction(BravenewmodderClass);
        actionManage_My_Mod->setObjectName(QString::fromUtf8("actionManage_My_Mod"));
        actionEvent_Renumeration = new QAction(BravenewmodderClass);
        actionEvent_Renumeration->setObjectName(QString::fromUtf8("actionEvent_Renumeration"));
        actionLocalisation_Check = new QAction(BravenewmodderClass);
        actionLocalisation_Check->setObjectName(QString::fromUtf8("actionLocalisation_Check"));
        actionCreate_QuickScript = new QAction(BravenewmodderClass);
        actionCreate_QuickScript->setObjectName(QString::fromUtf8("actionCreate_QuickScript"));
        actionGenerate = new QAction(BravenewmodderClass);
        actionGenerate->setObjectName(QString::fromUtf8("actionGenerate"));
        actionGenerate_List = new QAction(BravenewmodderClass);
        actionGenerate_List->setObjectName(QString::fromUtf8("actionGenerate_List"));
        actionImport_Content = new QAction(BravenewmodderClass);
        actionImport_Content->setObjectName(QString::fromUtf8("actionImport_Content"));
        actionUndo = new QAction(BravenewmodderClass);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionEditor_Settings = new QAction(BravenewmodderClass);
        actionEditor_Settings->setObjectName(QString::fromUtf8("actionEditor_Settings"));
        centralWidget = new QWidget(BravenewmodderClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tbxMain = new QTabWidget(centralWidget);
        tbxMain->setObjectName(QString::fromUtf8("tbxMain"));
        tbxMain->setGeometry(QRect(-10, 0, 1041, 761));
        tbxMain->setElideMode(Qt::ElideLeft);
        tbxMain->setUsesScrollButtons(false);
        tabGameplaySettings = new QWidget();
        tabGameplaySettings->setObjectName(QString::fromUtf8("tabGameplaySettings"));
        frame = new QFrame(tabGameplaySettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(150, 310, 531, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 71, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 60, 91, 21));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 80, 111, 21));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 20, 91, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 40, 81, 21));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 120, 231, 21));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 170, 91, 21));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 220, 231, 21));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 120, 61, 21));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 100, 131, 21));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(250, 70, 131, 21));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 30, 181, 21));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(170, 200, 181, 21));
        tbxMain->addTab(tabGameplaySettings, QString());
        tabCommon = new QWidget();
        tabCommon->setObjectName(QString::fromUtf8("tabCommon"));
        tbxMain->addTab(tabCommon, QString());
        TabEvents = new QWidget();
        TabEvents->setObjectName(QString::fromUtf8("TabEvents"));
        textBrowser = new QTextBrowser(TabEvents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 661, 781, 61));
        treeView = new QTreeView(TabEvents);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 0, 171, 661));
        frmEventStyle = new QFrame(TabEvents);
        frmEventStyle->setObjectName(QString::fromUtf8("frmEventStyle"));
        frmEventStyle->setGeometry(QRect(180, 0, 611, 51));
        frmEventStyle->setFrameShape(QFrame::StyledPanel);
        frmEventStyle->setFrameShadow(QFrame::Sunken);
        gbxType = new QGroupBox(frmEventStyle);
        gbxType->setObjectName(QString::fromUtf8("gbxType"));
        gbxType->setGeometry(QRect(2, 0, 148, 31));
        gbxType->setAlignment(Qt::AlignCenter);
        rdbCountry = new QRadioButton(gbxType);
        rdbCountry->setObjectName(QString::fromUtf8("rdbCountry"));
        rdbCountry->setGeometry(QRect(10, 10, 61, 16));
        rdbProvince = new QRadioButton(gbxType);
        rdbProvince->setObjectName(QString::fromUtf8("rdbProvince"));
        rdbProvince->setGeometry(QRect(80, 10, 61, 16));
        gbxNumber = new QGroupBox(frmEventStyle);
        gbxNumber->setObjectName(QString::fromUtf8("gbxNumber"));
        gbxNumber->setGeometry(QRect(150, 0, 241, 31));
        gbxNumber->setAlignment(Qt::AlignCenter);
        cbxType = new QComboBox(gbxNumber);
        cbxType->setObjectName(QString::fromUtf8("cbxType"));
        cbxType->setGeometry(QRect(0, 11, 91, 20));
        cbxRange = new QComboBox(gbxNumber);
        cbxRange->setObjectName(QString::fromUtf8("cbxRange"));
        cbxRange->setGeometry(QRect(90, 11, 91, 20));
        sbxNumber = new QSpinBox(gbxNumber);
        sbxNumber->setObjectName(QString::fromUtf8("sbxNumber"));
        sbxNumber->setGeometry(QRect(180, 11, 61, 20));
        sbxNumber->setMaximum(999999);
        sbxNumber->setValue(100500);
        groupBox_2 = new QGroupBox(frmEventStyle);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 0, 171, 31));
        groupBox_2->setAlignment(Qt::AlignCenter);
        rdbUnique = new QRadioButton(groupBox_2);
        rdbUnique->setObjectName(QString::fromUtf8("rdbUnique"));
        rdbUnique->setGeometry(QRect(10, 10, 51, 19));
        rdbSeries = new QRadioButton(groupBox_2);
        rdbSeries->setObjectName(QString::fromUtf8("rdbSeries"));
        rdbSeries->setGeometry(QRect(70, 10, 51, 19));
        sbxRange = new QSpinBox(groupBox_2);
        sbxRange->setObjectName(QString::fromUtf8("sbxRange"));
        sbxRange->setGeometry(QRect(120, 10, 51, 20));
        sbxRange->setFrame(true);
        sbxRange->setMinimum(10);
        sbxRange->setMaximum(1000);
        sbxRange->setValue(1000);
        lneInternaleventname = new QLineEdit(frmEventStyle);
        lneInternaleventname->setObjectName(QString::fromUtf8("lneInternaleventname"));
        lneInternaleventname->setGeometry(QRect(2, 30, 437, 20));
        psbNew = new QPushButton(frmEventStyle);
        psbNew->setObjectName(QString::fromUtf8("psbNew"));
        psbNew->setGeometry(QRect(560, 8, 50, 21));
        psbPreview = new QPushButton(frmEventStyle);
        psbPreview->setObjectName(QString::fromUtf8("psbPreview"));
        psbPreview->setGeometry(QRect(510, 30, 51, 21));
        psbSave = new QPushButton(frmEventStyle);
        psbSave->setObjectName(QString::fromUtf8("psbSave"));
        psbSave->setGeometry(QRect(560, 28, 50, 23));
        psbPreview_2 = new QPushButton(frmEventStyle);
        psbPreview_2->setObjectName(QString::fromUtf8("psbPreview_2"));
        psbPreview_2->setGeometry(QRect(440, 30, 71, 21));
        tabWidget = new QTabWidget(TabEvents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(790, 0, 251, 721));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setElideMode(Qt::ElideLeft);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        textBrowser_5 = new QTextBrowser(tab);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(0, 0, 281, 701));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser_6 = new QTextBrowser(tab_2);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 281, 701));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textBrowser_7 = new QTextBrowser(tab_3);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(0, 0, 281, 701));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 281, 701));
        tabWidget_2->setElideMode(Qt::ElideLeft);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        textBrowser_2 = new QTextBrowser(tab_5);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 281, 681));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        textBrowser_3 = new QTextBrowser(tab_6);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 281, 681));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        textBrowser_4 = new QTextBrowser(tab_7);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 281, 681));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        treeWidget = new QTreeWidget(tab_8);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 281, 681));
        tabWidget_2->addTab(tab_8, QString());
        tabWidget->addTab(tab_4, QString());
        widget = new QWidget(TabEvents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 50, 611, 611));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 611, 741));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 591, 737));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 591, 31));
        lineEdit_2 = new QLineEdit(groupBox_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 12, 591, 20));
        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 30, 591, 80));
        textEdit = new QTextEdit(groupBox_6);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 13, 591, 61));
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 280, 591, 171));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 13, 591, 151));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit_2->sizePolicy().hasHeightForWidth());
        plainTextEdit_2->setSizePolicy(sizePolicy1);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 110, 591, 171));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 13, 591, 151));
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 450, 591, 161));
        lineEdit_3 = new QLineEdit(groupBox_7);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 13, 591, 20));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_7);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(0, 40, 591, 121));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tbxMain->addTab(TabEvents, QString());
        tabHistory = new QWidget();
        tabHistory->setObjectName(QString::fromUtf8("tabHistory"));
        tbxMain->addTab(tabHistory, QString());
        tabInterface = new QWidget();
        tabInterface->setObjectName(QString::fromUtf8("tabInterface"));
        tbxMain->addTab(tabInterface, QString());
        tabLocalisation = new QWidget();
        tabLocalisation->setObjectName(QString::fromUtf8("tabLocalisation"));
        tbxMain->addTab(tabLocalisation, QString());
        tabMap = new QWidget();
        tabMap->setObjectName(QString::fromUtf8("tabMap"));
        tbxMain->addTab(tabMap, QString());
        tabMissions = new QWidget();
        tabMissions->setObjectName(QString::fromUtf8("tabMissions"));
        tbxMain->addTab(tabMissions, QString());
        tabReference = new QWidget();
        tabReference->setObjectName(QString::fromUtf8("tabReference"));
        tbxMain->addTab(tabReference, QString());
        BravenewmodderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BravenewmodderClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuSyntax_Check = new QMenu(menuSettings);
        menuSyntax_Check->setObjectName(QString::fromUtf8("menuSyntax_Check"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        BravenewmodderClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Mod);
        menuFile->addAction(actionLoad_Mod);
        menuFile->addAction(actionSave_Mod);
        menuFile->addAction(actionExport_Mod);
        menuFile->addSeparator();
        menuFile->addAction(actionUndo);
        menuFile->addAction(actionExit);
        menuSettings->addAction(menuSyntax_Check->menuAction());
        menuSettings->addAction(actionAdd_New_Syntax);
        menuSettings->addSeparator();
        menuSettings->addAction(actionEditor_Settings);
        menuSettings->addAction(actionManage_My_Mod);
        menuSyntax_Check->addAction(actionForce_Check);
        menuSyntax_Check->addAction(actionSuggested);
        menuSyntax_Check->addAction(actionOff);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionCreate_QuickScript);
        menuTools->addAction(actionEvent_Renumeration);
        menuTools->addAction(actionGenerate_List);
        menuTools->addAction(actionLocalisation_Check);
        menuTools->addAction(actionImport_Content);

        retranslateUi(BravenewmodderClass);

        tbxMain->setCurrentIndex(2);
        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(BravenewmodderClass);
    } // setupUi

    void retranslateUi(QMainWindow *BravenewmodderClass)
    {
        BravenewmodderClass->setWindowTitle(QApplication::translate("BravenewmodderClass", "Bravenewmodder", 0, QApplication::UnicodeUTF8));
        actionNew_Mod->setText(QApplication::translate("BravenewmodderClass", "New Mod", 0, QApplication::UnicodeUTF8));
        actionLoad_Mod->setText(QApplication::translate("BravenewmodderClass", "Load Mod", 0, QApplication::UnicodeUTF8));
        actionSave_Mod->setText(QApplication::translate("BravenewmodderClass", "Save Mod", 0, QApplication::UnicodeUTF8));
        actionExport_Mod->setText(QApplication::translate("BravenewmodderClass", "Export Mod", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("BravenewmodderClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionForce_Check->setText(QApplication::translate("BravenewmodderClass", "Forced", 0, QApplication::UnicodeUTF8));
        actionSuggested->setText(QApplication::translate("BravenewmodderClass", "Suggested", 0, QApplication::UnicodeUTF8));
        actionOff->setText(QApplication::translate("BravenewmodderClass", "Off", 0, QApplication::UnicodeUTF8));
        actionUnlimited_Play->setText(QApplication::translate("BravenewmodderClass", "Unlimited Play", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("BravenewmodderClass", "Help", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("BravenewmodderClass", "About", 0, QApplication::UnicodeUTF8));
        actionAdd_New_Syntax->setText(QApplication::translate("BravenewmodderClass", "Add New Syntax...", 0, QApplication::UnicodeUTF8));
        actionManage_My_Mod->setText(QApplication::translate("BravenewmodderClass", "Mod Settings", 0, QApplication::UnicodeUTF8));
        actionEvent_Renumeration->setText(QApplication::translate("BravenewmodderClass", "Event Renumeration", 0, QApplication::UnicodeUTF8));
        actionLocalisation_Check->setText(QApplication::translate("BravenewmodderClass", "Localisation Check", 0, QApplication::UnicodeUTF8));
        actionCreate_QuickScript->setText(QApplication::translate("BravenewmodderClass", "Create QuickScript", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCreate_QuickScript->setToolTip(QApplication::translate("BravenewmodderClass", "Create a user-defined script to be added to any event", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGenerate->setText(QApplication::translate("BravenewmodderClass", "Generate...", 0, QApplication::UnicodeUTF8));
        actionGenerate_List->setText(QApplication::translate("BravenewmodderClass", "Generate List", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGenerate_List->setToolTip(QApplication::translate("BravenewmodderClass", "Create a list from two separate lists. Greco-Roman. Greco-Slavic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport_Content->setText(QApplication::translate("BravenewmodderClass", "Import EUIII Content", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("BravenewmodderClass", "Undo", 0, QApplication::UnicodeUTF8));
        actionEditor_Settings->setText(QApplication::translate("BravenewmodderClass", "Editor Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Rulers</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Merchants</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Advisors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Leaders</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Sea Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Inflation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Land Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spies</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Missionaries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Difficulty</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">AI Aggressiveness</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Size of Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabGameplaySettings), QApplication::translate("BravenewmodderClass", "Gameplay Settings", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabCommon), QApplication::translate("BravenewmodderClass", "Common", 0, QApplication::UnicodeUTF8));
        gbxType->setTitle(QApplication::translate("BravenewmodderClass", "Event Type", 0, QApplication::UnicodeUTF8));
        rdbCountry->setText(QApplication::translate("BravenewmodderClass", "Country", 0, QApplication::UnicodeUTF8));
        rdbProvince->setText(QApplication::translate("BravenewmodderClass", "Province", 0, QApplication::UnicodeUTF8));
        gbxNumber->setTitle(QApplication::translate("BravenewmodderClass", "Event Number", 0, QApplication::UnicodeUTF8));
        cbxType->clear();
        cbxType->insertItems(0, QStringList()
         << QApplication::translate("BravenewmodderClass", "- Legacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "0 Government", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "1 Diplomacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "2 Economy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "3 Military", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "4 Religion", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "5 Colonial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "6 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "7 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "8 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "9 Custom", 0, QApplication::UnicodeUTF8)
        );
        cbxRange->clear();
        cbxRange->insertItems(0, QStringList()
         << QApplication::translate("BravenewmodderClass", "- Legacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "0 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "1 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "2 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "3 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "4 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "5 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "6 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "7 Unique", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "8 Unique", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BravenewmodderClass", "9 Unique", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("BravenewmodderClass", "Event Range", 0, QApplication::UnicodeUTF8));
        rdbUnique->setText(QApplication::translate("BravenewmodderClass", "Unique", 0, QApplication::UnicodeUTF8));
        rdbSeries->setText(QApplication::translate("BravenewmodderClass", "Series", 0, QApplication::UnicodeUTF8));
        lneInternaleventname->setText(QApplication::translate("BravenewmodderClass", "\"Internal Event Series Name\" *Series range&active number* [Internal Event Name]", 0, QApplication::UnicodeUTF8));
        psbNew->setText(QApplication::translate("BravenewmodderClass", "New", 0, QApplication::UnicodeUTF8));
        psbPreview->setText(QApplication::translate("BravenewmodderClass", "Preview", 0, QApplication::UnicodeUTF8));
        psbSave->setText(QApplication::translate("BravenewmodderClass", "Save", 0, QApplication::UnicodeUTF8));
        psbPreview_2->setText(QApplication::translate("BravenewmodderClass", "Syntax Check", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BravenewmodderClass", "Triggers", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("BravenewmodderClass", "Scopes", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("BravenewmodderClass", "Effects", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("BravenewmodderClass", "Flags", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("BravenewmodderClass", "Modifiers", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("BravenewmodderClass", "Variables", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BravenewmodderClass", "Data List", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("BravenewmodderClass", "Countries", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("BravenewmodderClass", "Religions", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("BravenewmodderClass", "Cultures", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("BravenewmodderClass", "Trade Goods", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("BravenewmodderClass", "National Ideas", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("BravenewmodderClass", "Policies", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("BravenewmodderClass", "Governments", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("BravenewmodderClass", "Data", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("BravenewmodderClass", "Index", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("BravenewmodderClass", "Event Title", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("BravenewmodderClass", "Event Description", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("BravenewmodderClass", "Mean Time To Happen", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("BravenewmodderClass", "Trigger", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("BravenewmodderClass", "Option 1", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(TabEvents), QApplication::translate("BravenewmodderClass", "Events", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabHistory), QApplication::translate("BravenewmodderClass", "History", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabInterface), QApplication::translate("BravenewmodderClass", "Interface", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabLocalisation), QApplication::translate("BravenewmodderClass", "Localisation", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabMap), QApplication::translate("BravenewmodderClass", "Map", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabMissions), QApplication::translate("BravenewmodderClass", "Missions", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabReference), QApplication::translate("BravenewmodderClass", "Reference", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("BravenewmodderClass", "File", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("BravenewmodderClass", "Settings", 0, QApplication::UnicodeUTF8));
        menuSyntax_Check->setTitle(QApplication::translate("BravenewmodderClass", "Syntax Check Mode", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("BravenewmodderClass", "Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("BravenewmodderClass", "Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BravenewmodderClass: public Ui_BravenewmodderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRAVENEWMODDER_H
