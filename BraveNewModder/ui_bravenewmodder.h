/********************************************************************************
** Form generated from reading ui file 'bravenewmodder.ui'
**
** Created: Mon May 25 20:18:06 2009
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
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeView>
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
    QAction *actionEnglish;
    QAction *actionEnable;
    QAction *actionDisable;
    QAction *actionMod_Settings;
    QWidget *centralWidget;
    QTabWidget *tbxMain;
    QWidget *tabGameplaySettings;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblRulers;
    QSpinBox *sbxRulers;
    QLabel *lblAdvisors;
    QSpinBox *sbxAdvisors;
    QLabel *lblLeaders;
    QSpinBox *sbxLeaders;
    QLabel *lblColonists;
    QSpinBox *sbxColonists;
    QLabel *lblMerchants;
    QSpinBox *sbxMerchants;
    QLabel *lblMissionaries;
    QSpinBox *sbxMissionaries;
    QLabel *lblSpies;
    QSpinBox *sbxSpies;
    QLabel *lblInflation;
    QSpinBox *sbxInflation;
    QLabel *lblSizeofColonists;
    QSpinBox *sbxSizeofColonists;
    QLabel *lblDifficulty;
    QSpinBox *sbxDifficulty;
    QLabel *lblAIAggressiveness;
    QSpinBox *sbxAIAggressiveness;
    QLabel *lblSpreadofLandProvinces;
    QSpinBox *sbxSpreadofLandProvinces;
    QLabel *lblSpreadofSeaProvinces;
    QSpinBox *sbxSpreadofSeaProvinces;
    QLabel *lblLuckyNations;
    QSpinBox *sbxLuckyNations;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QWidget *tabCommon;
    QTreeView *trvEvents_4;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QWidget *tab;
    QTreeView *trvEvents_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QWidget *TabEvents;
    QTreeView *trvEvents;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QWidget *tabHistory;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tabInterface;
    QWidget *tabLocalisation;
    QWidget *tabMap;
    QWidget *tabMissions;
    QWidget *tabReference;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuSyntax_Check;
    QMenu *menuEditor_Language;
    QMenu *menuBNM_Event_Convention;
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
        actionEnglish = new QAction(BravenewmodderClass);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnable = new QAction(BravenewmodderClass);
        actionEnable->setObjectName(QString::fromUtf8("actionEnable"));
        actionDisable = new QAction(BravenewmodderClass);
        actionDisable->setObjectName(QString::fromUtf8("actionDisable"));
        actionMod_Settings = new QAction(BravenewmodderClass);
        actionMod_Settings->setObjectName(QString::fromUtf8("actionMod_Settings"));
        centralWidget = new QWidget(BravenewmodderClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tbxMain = new QTabWidget(centralWidget);
        tbxMain->setObjectName(QString::fromUtf8("tbxMain"));
        tbxMain->setGeometry(QRect(-10, 0, 1041, 761));
        tbxMain->setElideMode(Qt::ElideLeft);
        tbxMain->setUsesScrollButtons(false);
        tabGameplaySettings = new QWidget();
        tabGameplaySettings->setObjectName(QString::fromUtf8("tabGameplaySettings"));
        formLayoutWidget = new QWidget(tabGameplaySettings);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 30, 361, 421));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblRulers = new QLabel(formLayoutWidget);
        lblRulers->setObjectName(QString::fromUtf8("lblRulers"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblRulers);

        sbxRulers = new QSpinBox(formLayoutWidget);
        sbxRulers->setObjectName(QString::fromUtf8("sbxRulers"));
        sbxRulers->setWrapping(true);
        sbxRulers->setReadOnly(true);
        sbxRulers->setMaximum(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, sbxRulers);

        lblAdvisors = new QLabel(formLayoutWidget);
        lblAdvisors->setObjectName(QString::fromUtf8("lblAdvisors"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblAdvisors);

        sbxAdvisors = new QSpinBox(formLayoutWidget);
        sbxAdvisors->setObjectName(QString::fromUtf8("sbxAdvisors"));
        sbxAdvisors->setWrapping(true);
        sbxAdvisors->setReadOnly(true);
        sbxAdvisors->setMaximum(2);

        formLayout->setWidget(1, QFormLayout::FieldRole, sbxAdvisors);

        lblLeaders = new QLabel(formLayoutWidget);
        lblLeaders->setObjectName(QString::fromUtf8("lblLeaders"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblLeaders);

        sbxLeaders = new QSpinBox(formLayoutWidget);
        sbxLeaders->setObjectName(QString::fromUtf8("sbxLeaders"));
        sbxLeaders->setWrapping(true);
        sbxLeaders->setReadOnly(true);
        sbxLeaders->setMaximum(2);

        formLayout->setWidget(2, QFormLayout::FieldRole, sbxLeaders);

        lblColonists = new QLabel(formLayoutWidget);
        lblColonists->setObjectName(QString::fromUtf8("lblColonists"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblColonists);

        sbxColonists = new QSpinBox(formLayoutWidget);
        sbxColonists->setObjectName(QString::fromUtf8("sbxColonists"));
        sbxColonists->setWrapping(true);
        sbxColonists->setReadOnly(true);
        sbxColonists->setMaximum(1);

        formLayout->setWidget(3, QFormLayout::FieldRole, sbxColonists);

        lblMerchants = new QLabel(formLayoutWidget);
        lblMerchants->setObjectName(QString::fromUtf8("lblMerchants"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblMerchants);

        sbxMerchants = new QSpinBox(formLayoutWidget);
        sbxMerchants->setObjectName(QString::fromUtf8("sbxMerchants"));
        sbxMerchants->setWrapping(true);
        sbxMerchants->setReadOnly(true);
        sbxMerchants->setMaximum(1);

        formLayout->setWidget(4, QFormLayout::FieldRole, sbxMerchants);

        lblMissionaries = new QLabel(formLayoutWidget);
        lblMissionaries->setObjectName(QString::fromUtf8("lblMissionaries"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lblMissionaries);

        sbxMissionaries = new QSpinBox(formLayoutWidget);
        sbxMissionaries->setObjectName(QString::fromUtf8("sbxMissionaries"));
        sbxMissionaries->setWrapping(true);
        sbxMissionaries->setReadOnly(true);
        sbxMissionaries->setMaximum(4);

        formLayout->setWidget(5, QFormLayout::FieldRole, sbxMissionaries);

        lblSpies = new QLabel(formLayoutWidget);
        lblSpies->setObjectName(QString::fromUtf8("lblSpies"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lblSpies);

        sbxSpies = new QSpinBox(formLayoutWidget);
        sbxSpies->setObjectName(QString::fromUtf8("sbxSpies"));
        sbxSpies->setWrapping(true);
        sbxSpies->setReadOnly(true);
        sbxSpies->setMaximum(1);

        formLayout->setWidget(6, QFormLayout::FieldRole, sbxSpies);

        lblInflation = new QLabel(formLayoutWidget);
        lblInflation->setObjectName(QString::fromUtf8("lblInflation"));

        formLayout->setWidget(7, QFormLayout::LabelRole, lblInflation);

        sbxInflation = new QSpinBox(formLayoutWidget);
        sbxInflation->setObjectName(QString::fromUtf8("sbxInflation"));
        sbxInflation->setWrapping(true);
        sbxInflation->setReadOnly(true);
        sbxInflation->setMaximum(2);

        formLayout->setWidget(7, QFormLayout::FieldRole, sbxInflation);

        lblSizeofColonists = new QLabel(formLayoutWidget);
        lblSizeofColonists->setObjectName(QString::fromUtf8("lblSizeofColonists"));

        formLayout->setWidget(8, QFormLayout::LabelRole, lblSizeofColonists);

        sbxSizeofColonists = new QSpinBox(formLayoutWidget);
        sbxSizeofColonists->setObjectName(QString::fromUtf8("sbxSizeofColonists"));
        sbxSizeofColonists->setWrapping(true);
        sbxSizeofColonists->setReadOnly(true);
        sbxSizeofColonists->setMaximum(3);

        formLayout->setWidget(8, QFormLayout::FieldRole, sbxSizeofColonists);

        lblDifficulty = new QLabel(formLayoutWidget);
        lblDifficulty->setObjectName(QString::fromUtf8("lblDifficulty"));

        formLayout->setWidget(9, QFormLayout::LabelRole, lblDifficulty);

        sbxDifficulty = new QSpinBox(formLayoutWidget);
        sbxDifficulty->setObjectName(QString::fromUtf8("sbxDifficulty"));
        sbxDifficulty->setWrapping(true);
        sbxDifficulty->setReadOnly(true);
        sbxDifficulty->setMaximum(4);

        formLayout->setWidget(9, QFormLayout::FieldRole, sbxDifficulty);

        lblAIAggressiveness = new QLabel(formLayoutWidget);
        lblAIAggressiveness->setObjectName(QString::fromUtf8("lblAIAggressiveness"));

        formLayout->setWidget(10, QFormLayout::LabelRole, lblAIAggressiveness);

        sbxAIAggressiveness = new QSpinBox(formLayoutWidget);
        sbxAIAggressiveness->setObjectName(QString::fromUtf8("sbxAIAggressiveness"));
        sbxAIAggressiveness->setWrapping(true);
        sbxAIAggressiveness->setReadOnly(true);
        sbxAIAggressiveness->setMaximum(2);

        formLayout->setWidget(10, QFormLayout::FieldRole, sbxAIAggressiveness);

        lblSpreadofLandProvinces = new QLabel(formLayoutWidget);
        lblSpreadofLandProvinces->setObjectName(QString::fromUtf8("lblSpreadofLandProvinces"));

        formLayout->setWidget(11, QFormLayout::LabelRole, lblSpreadofLandProvinces);

        sbxSpreadofLandProvinces = new QSpinBox(formLayoutWidget);
        sbxSpreadofLandProvinces->setObjectName(QString::fromUtf8("sbxSpreadofLandProvinces"));
        sbxSpreadofLandProvinces->setWrapping(true);
        sbxSpreadofLandProvinces->setReadOnly(true);
        sbxSpreadofLandProvinces->setMaximum(4);

        formLayout->setWidget(11, QFormLayout::FieldRole, sbxSpreadofLandProvinces);

        lblSpreadofSeaProvinces = new QLabel(formLayoutWidget);
        lblSpreadofSeaProvinces->setObjectName(QString::fromUtf8("lblSpreadofSeaProvinces"));

        formLayout->setWidget(12, QFormLayout::LabelRole, lblSpreadofSeaProvinces);

        sbxSpreadofSeaProvinces = new QSpinBox(formLayoutWidget);
        sbxSpreadofSeaProvinces->setObjectName(QString::fromUtf8("sbxSpreadofSeaProvinces"));
        sbxSpreadofSeaProvinces->setWrapping(true);
        sbxSpreadofSeaProvinces->setReadOnly(true);
        sbxSpreadofSeaProvinces->setMaximum(1);

        formLayout->setWidget(12, QFormLayout::FieldRole, sbxSpreadofSeaProvinces);

        lblLuckyNations = new QLabel(formLayoutWidget);
        lblLuckyNations->setObjectName(QString::fromUtf8("lblLuckyNations"));

        formLayout->setWidget(13, QFormLayout::LabelRole, lblLuckyNations);

        sbxLuckyNations = new QSpinBox(formLayoutWidget);
        sbxLuckyNations->setObjectName(QString::fromUtf8("sbxLuckyNations"));
        sbxLuckyNations->setWrapping(true);
        sbxLuckyNations->setReadOnly(true);
        sbxLuckyNations->setMaximum(2);

        formLayout->setWidget(13, QFormLayout::FieldRole, sbxLuckyNations);

        groupBox = new QGroupBox(tabGameplaySettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(8, 579, 1024, 149));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 12, 1024, 134));
        tbxMain->addTab(tabGameplaySettings, QString());
        tabCommon = new QWidget();
        tabCommon->setObjectName(QString::fromUtf8("tabCommon"));
        trvEvents_4 = new QTreeView(tabCommon);
        trvEvents_4->setObjectName(QString::fromUtf8("trvEvents_4"));
        trvEvents_4->setGeometry(QRect(10, 0, 171, 726));
        scrollArea_4 = new QScrollArea(tabCommon);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(180, 40, 561, 688));
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 541, 684));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);
        groupBox_4 = new QGroupBox(tabCommon);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(180, 0, 561, 41));
        groupBox_4->setAlignment(Qt::AlignCenter);
        pushButton_21 = new QPushButton(groupBox_4);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(150, 14, 75, 25));
        pushButton_22 = new QPushButton(groupBox_4);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(0, 14, 75, 25));
        pushButton_23 = new QPushButton(groupBox_4);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(75, 14, 75, 25));
        pushButton_24 = new QPushButton(groupBox_4);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(225, 14, 75, 25));
        pushButton_25 = new QPushButton(groupBox_4);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(375, 14, 75, 25));
        pushButton_26 = new QPushButton(groupBox_4);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(300, 14, 75, 25));
        pushButton_27 = new QPushButton(groupBox_4);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(450, 14, 75, 25));
        tbxMain->addTab(tabCommon, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        trvEvents_3 = new QTreeView(tab);
        trvEvents_3->setObjectName(QString::fromUtf8("trvEvents_3"));
        trvEvents_3->setGeometry(QRect(10, 0, 171, 726));
        scrollArea_3 = new QScrollArea(tab);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(180, 40, 561, 688));
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 541, 684));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 0, 561, 41));
        groupBox_2->setAlignment(Qt::AlignCenter);
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(150, 14, 75, 25));
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 14, 75, 25));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(75, 14, 75, 25));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(225, 14, 75, 25));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(375, 14, 75, 25));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(300, 14, 75, 25));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(450, 14, 75, 25));
        tbxMain->addTab(tab, QString());
        TabEvents = new QWidget();
        TabEvents->setObjectName(QString::fromUtf8("TabEvents"));
        trvEvents = new QTreeView(TabEvents);
        trvEvents->setObjectName(QString::fromUtf8("trvEvents"));
        trvEvents->setGeometry(QRect(10, 0, 171, 726));
        scrollArea = new QScrollArea(TabEvents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(180, 40, 561, 688));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 541, 684));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_3 = new QGroupBox(TabEvents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(180, 0, 561, 41));
        groupBox_3->setAlignment(Qt::AlignCenter);
        pushButton_14 = new QPushButton(groupBox_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(150, 14, 75, 25));
        pushButton_15 = new QPushButton(groupBox_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(0, 14, 75, 25));
        pushButton_16 = new QPushButton(groupBox_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(75, 14, 75, 25));
        pushButton_17 = new QPushButton(groupBox_3);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(225, 14, 75, 25));
        pushButton_18 = new QPushButton(groupBox_3);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(375, 14, 75, 25));
        pushButton_19 = new QPushButton(groupBox_3);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(300, 14, 75, 25));
        pushButton_20 = new QPushButton(groupBox_3);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(450, 14, 75, 25));
        tbxMain->addTab(TabEvents, QString());
        tabHistory = new QWidget();
        tabHistory->setObjectName(QString::fromUtf8("tabHistory"));
        tabWidget = new QTabWidget(tabHistory);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(8, 0, 1024, 728));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
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
        menuEditor_Language = new QMenu(menuSettings);
        menuEditor_Language->setObjectName(QString::fromUtf8("menuEditor_Language"));
        menuBNM_Event_Convention = new QMenu(menuSettings);
        menuBNM_Event_Convention->setObjectName(QString::fromUtf8("menuBNM_Event_Convention"));
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
        menuSettings->addAction(menuBNM_Event_Convention->menuAction());
        menuSettings->addAction(actionMod_Settings);
        menuSettings->addSeparator();
        menuSettings->addAction(actionEditor_Settings);
        menuSettings->addAction(menuEditor_Language->menuAction());
        menuSyntax_Check->addAction(actionForce_Check);
        menuSyntax_Check->addAction(actionSuggested);
        menuSyntax_Check->addAction(actionOff);
        menuEditor_Language->addAction(actionEnglish);
        menuBNM_Event_Convention->addAction(actionEnable);
        menuBNM_Event_Convention->addAction(actionDisable);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuTools->addAction(actionCreate_QuickScript);
        menuTools->addAction(actionEvent_Renumeration);
        menuTools->addAction(actionGenerate_List);
        menuTools->addAction(actionLocalisation_Check);
        menuTools->addAction(actionImport_Content);

        retranslateUi(BravenewmodderClass);

        tbxMain->setCurrentIndex(2);
        tabWidget->setCurrentIndex(4);


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
        actionEnglish->setText(QApplication::translate("BravenewmodderClass", "English", 0, QApplication::UnicodeUTF8));
        actionEnable->setText(QApplication::translate("BravenewmodderClass", "Enable", 0, QApplication::UnicodeUTF8));
        actionDisable->setText(QApplication::translate("BravenewmodderClass", "Disable", 0, QApplication::UnicodeUTF8));
        actionMod_Settings->setText(QApplication::translate("BravenewmodderClass", "Mod Settings", 0, QApplication::UnicodeUTF8));
        lblRulers->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Rulers</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxRulers->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblAdvisors->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Advisors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxAdvisors->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblLeaders->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Leaders</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxLeaders->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblColonists->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxColonists->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblMerchants->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Merchants</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxMerchants->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblMissionaries->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Missionaries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxMissionaries->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblSpies->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spies</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxSpies->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Very Hard", 0, QApplication::UnicodeUTF8));
        lblInflation->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Inflation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxInflation->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblSizeofColonists->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Size of Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxSizeofColonists->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblDifficulty->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Difficulty</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxDifficulty->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblAIAggressiveness->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">AI Aggressiveness</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxAIAggressiveness->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblSpreadofLandProvinces->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Land Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxSpreadofLandProvinces->setSpecialValueText(QApplication::translate("BravenewmodderClass", "50 Years (Normal)", 0, QApplication::UnicodeUTF8));
        lblSpreadofSeaProvinces->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Sea Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxSpreadofSeaProvinces->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        lblLuckyNations->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Lucky Nations</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxLuckyNations->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical (Normal)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BravenewmodderClass", "About", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabGameplaySettings), QApplication::translate("BravenewmodderClass", "Gameplay Settings", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("BravenewmodderClass", "File Options", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("BravenewmodderClass", "Original Doc.", 0, QApplication::UnicodeUTF8));
        pushButton_22->setText(QApplication::translate("BravenewmodderClass", "Clear Entry", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("BravenewmodderClass", "Syntax Check", 0, QApplication::UnicodeUTF8));
        pushButton_24->setText(QApplication::translate("BravenewmodderClass", "New File", 0, QApplication::UnicodeUTF8));
        pushButton_25->setText(QApplication::translate("BravenewmodderClass", "New Entry", 0, QApplication::UnicodeUTF8));
        pushButton_26->setText(QApplication::translate("BravenewmodderClass", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_27->setText(QApplication::translate("BravenewmodderClass", "Preview", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabCommon), QApplication::translate("BravenewmodderClass", "Common", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("BravenewmodderClass", "File Options", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("BravenewmodderClass", "Original Doc.", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("BravenewmodderClass", "Clear Entry", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("BravenewmodderClass", "Syntax Check", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("BravenewmodderClass", "New File", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("BravenewmodderClass", "New Entry", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("BravenewmodderClass", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("BravenewmodderClass", "Preview", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tab), QApplication::translate("BravenewmodderClass", "Decisions", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("BravenewmodderClass", "File Options", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("BravenewmodderClass", "Original Doc.", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("BravenewmodderClass", "Clear Entry", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("BravenewmodderClass", "Syntax Check", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("BravenewmodderClass", "New File", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("BravenewmodderClass", "New Entry", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("BravenewmodderClass", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("BravenewmodderClass", "Preview", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(TabEvents), QApplication::translate("BravenewmodderClass", "Events", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("BravenewmodderClass", "Advisors", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("BravenewmodderClass", "Countries", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("BravenewmodderClass", "Diplomacy", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("BravenewmodderClass", "Provinces", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("BravenewmodderClass", "Wars", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabHistory), QApplication::translate("BravenewmodderClass", "History", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabInterface), QApplication::translate("BravenewmodderClass", "Interface", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabLocalisation), QApplication::translate("BravenewmodderClass", "Localisation", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabMap), QApplication::translate("BravenewmodderClass", "Map", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabMissions), QApplication::translate("BravenewmodderClass", "Missions", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabReference), QApplication::translate("BravenewmodderClass", "Reference", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("BravenewmodderClass", "File", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("BravenewmodderClass", "Settings", 0, QApplication::UnicodeUTF8));
        menuSyntax_Check->setTitle(QApplication::translate("BravenewmodderClass", "Syntax Check Mode", 0, QApplication::UnicodeUTF8));
        menuEditor_Language->setTitle(QApplication::translate("BravenewmodderClass", "Editor Language", 0, QApplication::UnicodeUTF8));
        menuBNM_Event_Convention->setTitle(QApplication::translate("BravenewmodderClass", "BNM Event Convention", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("BravenewmodderClass", "Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("BravenewmodderClass", "Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BravenewmodderClass: public Ui_BravenewmodderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRAVENEWMODDER_H
