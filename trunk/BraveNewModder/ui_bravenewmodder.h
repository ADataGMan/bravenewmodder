/********************************************************************************
** Form generated from reading ui file 'bravenewmodder.ui'
**
** Created: Sun May 24 15:30:54 2009
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
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
    QWidget *centralWidget;
    QTabWidget *tbxMain;
    QWidget *tabGameplaySettings;
    QFrame *frmGameplaySettings;
    QLabel *lblRulers;
    QLabel *lblColonists;
    QLabel *lblMerchants;
    QLabel *lblAdvisors;
    QLabel *lblLeaders;
    QLabel *lblSpreadofSeaProvinces;
    QLabel *lblInflation;
    QLabel *lblSpreadofLandProvinces;
    QLabel *lblSpies;
    QLabel *lblMissionaries;
    QLabel *lblDifficulty;
    QLabel *lblAIAggressiveness;
    QLabel *lblSizeofColonists;
    QSpinBox *sbxMissionaries;
    QSpinBox *sbxRulers;
    QSpinBox *sbxColonists;
    QSpinBox *sbxLeaders;
    QSpinBox *sbxAdvisors;
    QSpinBox *sbxMerchants;
    QSpinBox *sbxSpies;
    QSpinBox *sbxAIAggressiveness;
    QSpinBox *sbxSizeofColonists;
    QSpinBox *sbxSpreadofSeaProvinces;
    QSpinBox *sbxDifficulty;
    QSpinBox *sbxInflation;
    QSpinBox *sbxSpreadofLandProvinces;
    QSpinBox *sbxLuckyNations;
    QLabel *lblLuckyNations;
    QTextBrowser *tbrGameplaySettings;
    QWidget *tabCommon;
    QTextBrowser *tbrInfo_2;
    QTreeView *trvEvents_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *tab;
    QTabWidget *tbxReference_4;
    QWidget *tabTriggers_3;
    QTextBrowser *tbrTriggers_3;
    QWidget *tabScopes_3;
    QTextBrowser *tbrScopes_3;
    QWidget *tabEffects_3;
    QTextBrowser *tbrEffects_3;
    QWidget *tabIndex_3;
    QTabWidget *tbxUserdata_3;
    QWidget *tabFlags_3;
    QTextBrowser *tbrFlags_3;
    QWidget *tabModifiers_3;
    QTextBrowser *tbrModifiers_3;
    QWidget *tabVariables_3;
    QTextBrowser *tbrVariables_3;
    QWidget *tabData_3;
    QTreeView *trvLData_3;
    QTextBrowser *tbrInfo_5;
    QTreeView *trvEvents_5;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QWidget *TabEvents;
    QTextBrowser *tbrInfo;
    QTabWidget *tbxReference_2;
    QWidget *tabTriggers;
    QTextBrowser *tbrTriggers;
    QWidget *tabScopes;
    QTextBrowser *tbrScopes;
    QWidget *tabEffects;
    QTextBrowser *tbrEffects;
    QWidget *tabIndex;
    QTabWidget *tbxUserdata;
    QWidget *tabFlags;
    QTextBrowser *tbrFlags;
    QWidget *tabModifiers;
    QTextBrowser *tbrModifiers;
    QWidget *tabVariables;
    QTextBrowser *tbrVariables;
    QWidget *tabData;
    QTreeView *trvLData;
    QTreeView *trvEvents;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
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
        frmGameplaySettings = new QFrame(tabGameplaySettings);
        frmGameplaySettings->setObjectName(QString::fromUtf8("frmGameplaySettings"));
        frmGameplaySettings->setGeometry(QRect(150, 10, 741, 211));
        frmGameplaySettings->setFrameShape(QFrame::NoFrame);
        frmGameplaySettings->setFrameShadow(QFrame::Plain);
        lblRulers = new QLabel(frmGameplaySettings);
        lblRulers->setObjectName(QString::fromUtf8("lblRulers"));
        lblRulers->setGeometry(QRect(0, 0, 71, 31));
        lblColonists = new QLabel(frmGameplaySettings);
        lblColonists->setObjectName(QString::fromUtf8("lblColonists"));
        lblColonists->setGeometry(QRect(0, 90, 91, 31));
        lblMerchants = new QLabel(frmGameplaySettings);
        lblMerchants->setObjectName(QString::fromUtf8("lblMerchants"));
        lblMerchants->setGeometry(QRect(0, 120, 111, 31));
        lblAdvisors = new QLabel(frmGameplaySettings);
        lblAdvisors->setObjectName(QString::fromUtf8("lblAdvisors"));
        lblAdvisors->setGeometry(QRect(0, 30, 91, 31));
        lblLeaders = new QLabel(frmGameplaySettings);
        lblLeaders->setObjectName(QString::fromUtf8("lblLeaders"));
        lblLeaders->setGeometry(QRect(0, 60, 81, 31));
        lblSpreadofSeaProvinces = new QLabel(frmGameplaySettings);
        lblSpreadofSeaProvinces->setObjectName(QString::fromUtf8("lblSpreadofSeaProvinces"));
        lblSpreadofSeaProvinces->setGeometry(QRect(380, 150, 231, 31));
        lblInflation = new QLabel(frmGameplaySettings);
        lblInflation->setObjectName(QString::fromUtf8("lblInflation"));
        lblInflation->setGeometry(QRect(380, 0, 91, 31));
        lblSpreadofLandProvinces = new QLabel(frmGameplaySettings);
        lblSpreadofLandProvinces->setObjectName(QString::fromUtf8("lblSpreadofLandProvinces"));
        lblSpreadofLandProvinces->setGeometry(QRect(380, 120, 241, 31));
        lblSpies = new QLabel(frmGameplaySettings);
        lblSpies->setObjectName(QString::fromUtf8("lblSpies"));
        lblSpies->setGeometry(QRect(0, 180, 61, 31));
        lblMissionaries = new QLabel(frmGameplaySettings);
        lblMissionaries->setObjectName(QString::fromUtf8("lblMissionaries"));
        lblMissionaries->setGeometry(QRect(0, 150, 131, 31));
        lblDifficulty = new QLabel(frmGameplaySettings);
        lblDifficulty->setObjectName(QString::fromUtf8("lblDifficulty"));
        lblDifficulty->setGeometry(QRect(380, 60, 91, 31));
        lblAIAggressiveness = new QLabel(frmGameplaySettings);
        lblAIAggressiveness->setObjectName(QString::fromUtf8("lblAIAggressiveness"));
        lblAIAggressiveness->setGeometry(QRect(380, 90, 181, 31));
        lblSizeofColonists = new QLabel(frmGameplaySettings);
        lblSizeofColonists->setObjectName(QString::fromUtf8("lblSizeofColonists"));
        lblSizeofColonists->setGeometry(QRect(380, 30, 161, 31));
        sbxMissionaries = new QSpinBox(frmGameplaySettings);
        sbxMissionaries->setObjectName(QString::fromUtf8("sbxMissionaries"));
        sbxMissionaries->setGeometry(QRect(630, 150, 111, 21));
        sbxMissionaries->setWrapping(true);
        sbxMissionaries->setReadOnly(true);
        sbxMissionaries->setMaximum(4);
        sbxRulers = new QSpinBox(frmGameplaySettings);
        sbxRulers->setObjectName(QString::fromUtf8("sbxRulers"));
        sbxRulers->setGeometry(QRect(130, 2, 111, 21));
        sbxRulers->setWrapping(true);
        sbxRulers->setReadOnly(true);
        sbxRulers->setMaximum(2);
        sbxColonists = new QSpinBox(frmGameplaySettings);
        sbxColonists->setObjectName(QString::fromUtf8("sbxColonists"));
        sbxColonists->setGeometry(QRect(130, 90, 111, 21));
        sbxColonists->setWrapping(true);
        sbxColonists->setReadOnly(true);
        sbxColonists->setMaximum(1);
        sbxLeaders = new QSpinBox(frmGameplaySettings);
        sbxLeaders->setObjectName(QString::fromUtf8("sbxLeaders"));
        sbxLeaders->setGeometry(QRect(130, 60, 111, 21));
        sbxLeaders->setWrapping(true);
        sbxLeaders->setReadOnly(true);
        sbxLeaders->setMaximum(2);
        sbxAdvisors = new QSpinBox(frmGameplaySettings);
        sbxAdvisors->setObjectName(QString::fromUtf8("sbxAdvisors"));
        sbxAdvisors->setGeometry(QRect(130, 30, 111, 21));
        sbxAdvisors->setWrapping(true);
        sbxAdvisors->setReadOnly(true);
        sbxAdvisors->setMaximum(2);
        sbxMerchants = new QSpinBox(frmGameplaySettings);
        sbxMerchants->setObjectName(QString::fromUtf8("sbxMerchants"));
        sbxMerchants->setGeometry(QRect(130, 120, 111, 21));
        sbxMerchants->setWrapping(true);
        sbxMerchants->setReadOnly(true);
        sbxMerchants->setMaximum(1);
        sbxSpies = new QSpinBox(frmGameplaySettings);
        sbxSpies->setObjectName(QString::fromUtf8("sbxSpies"));
        sbxSpies->setGeometry(QRect(130, 180, 111, 21));
        sbxSpies->setWrapping(true);
        sbxSpies->setReadOnly(true);
        sbxSpies->setMaximum(1);
        sbxAIAggressiveness = new QSpinBox(frmGameplaySettings);
        sbxAIAggressiveness->setObjectName(QString::fromUtf8("sbxAIAggressiveness"));
        sbxAIAggressiveness->setGeometry(QRect(630, 90, 111, 21));
        sbxAIAggressiveness->setWrapping(true);
        sbxAIAggressiveness->setReadOnly(true);
        sbxAIAggressiveness->setMaximum(2);
        sbxSizeofColonists = new QSpinBox(frmGameplaySettings);
        sbxSizeofColonists->setObjectName(QString::fromUtf8("sbxSizeofColonists"));
        sbxSizeofColonists->setGeometry(QRect(630, 30, 111, 21));
        sbxSizeofColonists->setWrapping(true);
        sbxSizeofColonists->setReadOnly(true);
        sbxSizeofColonists->setMaximum(3);
        sbxSpreadofSeaProvinces = new QSpinBox(frmGameplaySettings);
        sbxSpreadofSeaProvinces->setObjectName(QString::fromUtf8("sbxSpreadofSeaProvinces"));
        sbxSpreadofSeaProvinces->setGeometry(QRect(130, 150, 111, 21));
        sbxSpreadofSeaProvinces->setWrapping(true);
        sbxSpreadofSeaProvinces->setReadOnly(true);
        sbxSpreadofSeaProvinces->setMaximum(1);
        sbxDifficulty = new QSpinBox(frmGameplaySettings);
        sbxDifficulty->setObjectName(QString::fromUtf8("sbxDifficulty"));
        sbxDifficulty->setGeometry(QRect(630, 60, 111, 21));
        sbxDifficulty->setWrapping(true);
        sbxDifficulty->setReadOnly(true);
        sbxDifficulty->setMaximum(4);
        sbxInflation = new QSpinBox(frmGameplaySettings);
        sbxInflation->setObjectName(QString::fromUtf8("sbxInflation"));
        sbxInflation->setGeometry(QRect(630, 2, 111, 20));
        sbxInflation->setWrapping(true);
        sbxInflation->setReadOnly(true);
        sbxInflation->setMaximum(2);
        sbxSpreadofLandProvinces = new QSpinBox(frmGameplaySettings);
        sbxSpreadofLandProvinces->setObjectName(QString::fromUtf8("sbxSpreadofLandProvinces"));
        sbxSpreadofLandProvinces->setGeometry(QRect(630, 120, 111, 21));
        sbxSpreadofLandProvinces->setWrapping(true);
        sbxSpreadofLandProvinces->setReadOnly(true);
        sbxSpreadofLandProvinces->setMaximum(4);
        sbxLuckyNations = new QSpinBox(frmGameplaySettings);
        sbxLuckyNations->setObjectName(QString::fromUtf8("sbxLuckyNations"));
        sbxLuckyNations->setGeometry(QRect(630, 180, 111, 21));
        sbxLuckyNations->setWrapping(true);
        sbxLuckyNations->setReadOnly(true);
        sbxLuckyNations->setMaximum(2);
        lblLuckyNations = new QLabel(frmGameplaySettings);
        lblLuckyNations->setObjectName(QString::fromUtf8("lblLuckyNations"));
        lblLuckyNations->setGeometry(QRect(380, 180, 141, 31));
        tbrGameplaySettings = new QTextBrowser(tabGameplaySettings);
        tbrGameplaySettings->setObjectName(QString::fromUtf8("tbrGameplaySettings"));
        tbrGameplaySettings->setGeometry(QRect(10, 581, 1021, 141));
        tbxMain->addTab(tabGameplaySettings, QString());
        tabCommon = new QWidget();
        tabCommon->setObjectName(QString::fromUtf8("tabCommon"));
        tbrInfo_2 = new QTextBrowser(tabCommon);
        tbrInfo_2->setObjectName(QString::fromUtf8("tbrInfo_2"));
        tbrInfo_2->setGeometry(QRect(10, 630, 1021, 91));
        trvEvents_2 = new QTreeView(tabCommon);
        trvEvents_2->setObjectName(QString::fromUtf8("trvEvents_2"));
        trvEvents_2->setGeometry(QRect(10, 0, 171, 631));
        scrollArea_2 = new QScrollArea(tabCommon);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(180, 0, 851, 631));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 831, 627));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tbxMain->addTab(tabCommon, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tbxReference_4 = new QTabWidget(tab);
        tbxReference_4->setObjectName(QString::fromUtf8("tbxReference_4"));
        tbxReference_4->setGeometry(QRect(790, 0, 251, 721));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbxReference_4->sizePolicy().hasHeightForWidth());
        tbxReference_4->setSizePolicy(sizePolicy);
        tbxReference_4->setElideMode(Qt::ElideLeft);
        tabTriggers_3 = new QWidget();
        tabTriggers_3->setObjectName(QString::fromUtf8("tabTriggers_3"));
        tbrTriggers_3 = new QTextBrowser(tabTriggers_3);
        tbrTriggers_3->setObjectName(QString::fromUtf8("tbrTriggers_3"));
        tbrTriggers_3->setGeometry(QRect(0, 0, 281, 701));
        tbxReference_4->addTab(tabTriggers_3, QString());
        tabScopes_3 = new QWidget();
        tabScopes_3->setObjectName(QString::fromUtf8("tabScopes_3"));
        tbrScopes_3 = new QTextBrowser(tabScopes_3);
        tbrScopes_3->setObjectName(QString::fromUtf8("tbrScopes_3"));
        tbrScopes_3->setGeometry(QRect(0, 0, 281, 701));
        tbxReference_4->addTab(tabScopes_3, QString());
        tabEffects_3 = new QWidget();
        tabEffects_3->setObjectName(QString::fromUtf8("tabEffects_3"));
        tbrEffects_3 = new QTextBrowser(tabEffects_3);
        tbrEffects_3->setObjectName(QString::fromUtf8("tbrEffects_3"));
        tbrEffects_3->setGeometry(QRect(0, 0, 281, 701));
        tbxReference_4->addTab(tabEffects_3, QString());
        tabIndex_3 = new QWidget();
        tabIndex_3->setObjectName(QString::fromUtf8("tabIndex_3"));
        tbxUserdata_3 = new QTabWidget(tabIndex_3);
        tbxUserdata_3->setObjectName(QString::fromUtf8("tbxUserdata_3"));
        tbxUserdata_3->setGeometry(QRect(0, 0, 281, 701));
        tbxUserdata_3->setElideMode(Qt::ElideLeft);
        tabFlags_3 = new QWidget();
        tabFlags_3->setObjectName(QString::fromUtf8("tabFlags_3"));
        tbrFlags_3 = new QTextBrowser(tabFlags_3);
        tbrFlags_3->setObjectName(QString::fromUtf8("tbrFlags_3"));
        tbrFlags_3->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata_3->addTab(tabFlags_3, QString());
        tabModifiers_3 = new QWidget();
        tabModifiers_3->setObjectName(QString::fromUtf8("tabModifiers_3"));
        tbrModifiers_3 = new QTextBrowser(tabModifiers_3);
        tbrModifiers_3->setObjectName(QString::fromUtf8("tbrModifiers_3"));
        tbrModifiers_3->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata_3->addTab(tabModifiers_3, QString());
        tabVariables_3 = new QWidget();
        tabVariables_3->setObjectName(QString::fromUtf8("tabVariables_3"));
        tbrVariables_3 = new QTextBrowser(tabVariables_3);
        tbrVariables_3->setObjectName(QString::fromUtf8("tbrVariables_3"));
        tbrVariables_3->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata_3->addTab(tabVariables_3, QString());
        tabData_3 = new QWidget();
        tabData_3->setObjectName(QString::fromUtf8("tabData_3"));
        trvLData_3 = new QTreeView(tabData_3);
        trvLData_3->setObjectName(QString::fromUtf8("trvLData_3"));
        trvLData_3->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata_3->addTab(tabData_3, QString());
        tbxReference_4->addTab(tabIndex_3, QString());
        tbrInfo_5 = new QTextBrowser(tab);
        tbrInfo_5->setObjectName(QString::fromUtf8("tbrInfo_5"));
        tbrInfo_5->setGeometry(QRect(10, 631, 781, 91));
        trvEvents_5 = new QTreeView(tab);
        trvEvents_5->setObjectName(QString::fromUtf8("trvEvents_5"));
        trvEvents_5->setGeometry(QRect(10, 0, 171, 631));
        scrollArea_5 = new QScrollArea(tab);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(180, 0, 611, 631));
        scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 591, 627));
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        tbxMain->addTab(tab, QString());
        TabEvents = new QWidget();
        TabEvents->setObjectName(QString::fromUtf8("TabEvents"));
        tbrInfo = new QTextBrowser(TabEvents);
        tbrInfo->setObjectName(QString::fromUtf8("tbrInfo"));
        tbrInfo->setGeometry(QRect(10, 631, 781, 91));
        tbxReference_2 = new QTabWidget(TabEvents);
        tbxReference_2->setObjectName(QString::fromUtf8("tbxReference_2"));
        tbxReference_2->setGeometry(QRect(790, 0, 241, 721));
        sizePolicy.setHeightForWidth(tbxReference_2->sizePolicy().hasHeightForWidth());
        tbxReference_2->setSizePolicy(sizePolicy);
        tbxReference_2->setElideMode(Qt::ElideLeft);
        tabTriggers = new QWidget();
        tabTriggers->setObjectName(QString::fromUtf8("tabTriggers"));
        tbrTriggers = new QTextBrowser(tabTriggers);
        tbrTriggers->setObjectName(QString::fromUtf8("tbrTriggers"));
        tbrTriggers->setGeometry(QRect(0, 0, 241, 701));
        tbxReference_2->addTab(tabTriggers, QString());
        tabScopes = new QWidget();
        tabScopes->setObjectName(QString::fromUtf8("tabScopes"));
        tbrScopes = new QTextBrowser(tabScopes);
        tbrScopes->setObjectName(QString::fromUtf8("tbrScopes"));
        tbrScopes->setGeometry(QRect(0, 0, 241, 701));
        tbxReference_2->addTab(tabScopes, QString());
        tabEffects = new QWidget();
        tabEffects->setObjectName(QString::fromUtf8("tabEffects"));
        tbrEffects = new QTextBrowser(tabEffects);
        tbrEffects->setObjectName(QString::fromUtf8("tbrEffects"));
        tbrEffects->setGeometry(QRect(0, 0, 241, 701));
        tbxReference_2->addTab(tabEffects, QString());
        tabIndex = new QWidget();
        tabIndex->setObjectName(QString::fromUtf8("tabIndex"));
        tbxUserdata = new QTabWidget(tabIndex);
        tbxUserdata->setObjectName(QString::fromUtf8("tbxUserdata"));
        tbxUserdata->setGeometry(QRect(0, 0, 281, 701));
        tbxUserdata->setElideMode(Qt::ElideLeft);
        tabFlags = new QWidget();
        tabFlags->setObjectName(QString::fromUtf8("tabFlags"));
        tbrFlags = new QTextBrowser(tabFlags);
        tbrFlags->setObjectName(QString::fromUtf8("tbrFlags"));
        tbrFlags->setGeometry(QRect(0, 0, 241, 681));
        tbxUserdata->addTab(tabFlags, QString());
        tabModifiers = new QWidget();
        tabModifiers->setObjectName(QString::fromUtf8("tabModifiers"));
        tbrModifiers = new QTextBrowser(tabModifiers);
        tbrModifiers->setObjectName(QString::fromUtf8("tbrModifiers"));
        tbrModifiers->setGeometry(QRect(0, 0, 241, 681));
        tbxUserdata->addTab(tabModifiers, QString());
        tabVariables = new QWidget();
        tabVariables->setObjectName(QString::fromUtf8("tabVariables"));
        tbrVariables = new QTextBrowser(tabVariables);
        tbrVariables->setObjectName(QString::fromUtf8("tbrVariables"));
        tbrVariables->setGeometry(QRect(0, 0, 241, 681));
        tbxUserdata->addTab(tabVariables, QString());
        tabData = new QWidget();
        tabData->setObjectName(QString::fromUtf8("tabData"));
        trvLData = new QTreeView(tabData);
        trvLData->setObjectName(QString::fromUtf8("trvLData"));
        trvLData->setGeometry(QRect(0, 0, 241, 671));
        tbxUserdata->addTab(tabData, QString());
        tbxReference_2->addTab(tabIndex, QString());
        trvEvents = new QTreeView(TabEvents);
        trvEvents->setObjectName(QString::fromUtf8("trvEvents"));
        trvEvents->setGeometry(QRect(10, 0, 171, 631));
        scrollArea = new QScrollArea(TabEvents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(180, 0, 611, 631));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 591, 627));
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

        tbxMain->setCurrentIndex(3);
        tbxReference_4->setCurrentIndex(0);
        tbxUserdata_3->setCurrentIndex(0);
        tbxReference_2->setCurrentIndex(0);
        tbxUserdata->setCurrentIndex(3);


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
        lblRulers->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Rulers</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblColonists->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblMerchants->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Merchants</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblAdvisors->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Advisors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblLeaders->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Leaders</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblSpreadofSeaProvinces->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Sea Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblInflation->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Inflation</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblSpreadofLandProvinces->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spread of Land Provinces</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblSpies->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Spies</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblMissionaries->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Missionaries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblDifficulty->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Difficulty</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblAIAggressiveness->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">AI Aggressiveness</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblSizeofColonists->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Size of Colonists</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sbxMissionaries->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxRulers->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxColonists->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxLeaders->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxAdvisors->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxMerchants->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxSpies->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Very Hard", 0, QApplication::UnicodeUTF8));
        sbxAIAggressiveness->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxSizeofColonists->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxSpreadofSeaProvinces->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxDifficulty->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxInflation->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxSpreadofLandProvinces->setSpecialValueText(QApplication::translate("BravenewmodderClass", "50 Years (Normal)", 0, QApplication::UnicodeUTF8));
        sbxLuckyNations->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical (Normal)", 0, QApplication::UnicodeUTF8));
        lblLuckyNations->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Lucky Nations</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabGameplaySettings), QApplication::translate("BravenewmodderClass", "Gameplay Settings", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tabCommon), QApplication::translate("BravenewmodderClass", "Common", 0, QApplication::UnicodeUTF8));
        tbxReference_4->setTabText(tbxReference_4->indexOf(tabTriggers_3), QApplication::translate("BravenewmodderClass", "Triggers", 0, QApplication::UnicodeUTF8));
        tbxReference_4->setTabText(tbxReference_4->indexOf(tabScopes_3), QApplication::translate("BravenewmodderClass", "Scopes", 0, QApplication::UnicodeUTF8));
        tbxReference_4->setTabText(tbxReference_4->indexOf(tabEffects_3), QApplication::translate("BravenewmodderClass", "Effects", 0, QApplication::UnicodeUTF8));
        tbxUserdata_3->setTabText(tbxUserdata_3->indexOf(tabFlags_3), QApplication::translate("BravenewmodderClass", "Flags", 0, QApplication::UnicodeUTF8));
        tbxUserdata_3->setTabText(tbxUserdata_3->indexOf(tabModifiers_3), QApplication::translate("BravenewmodderClass", "Modifiers", 0, QApplication::UnicodeUTF8));
        tbxUserdata_3->setTabText(tbxUserdata_3->indexOf(tabVariables_3), QApplication::translate("BravenewmodderClass", "Variables", 0, QApplication::UnicodeUTF8));
        tbxUserdata_3->setTabText(tbxUserdata_3->indexOf(tabData_3), QApplication::translate("BravenewmodderClass", "Data", 0, QApplication::UnicodeUTF8));
        tbxReference_4->setTabText(tbxReference_4->indexOf(tabIndex_3), QApplication::translate("BravenewmodderClass", "Index", 0, QApplication::UnicodeUTF8));
        tbxMain->setTabText(tbxMain->indexOf(tab), QApplication::translate("BravenewmodderClass", "Decisions", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabTriggers), QApplication::translate("BravenewmodderClass", "Triggers", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabScopes), QApplication::translate("BravenewmodderClass", "Scopes", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabEffects), QApplication::translate("BravenewmodderClass", "Effects", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabFlags), QApplication::translate("BravenewmodderClass", "Flags", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabModifiers), QApplication::translate("BravenewmodderClass", "Modifiers", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabVariables), QApplication::translate("BravenewmodderClass", "Variables", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabData), QApplication::translate("BravenewmodderClass", "Data", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabIndex), QApplication::translate("BravenewmodderClass", "Index", 0, QApplication::UnicodeUTF8));
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
