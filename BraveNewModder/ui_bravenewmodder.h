/********************************************************************************
** Form generated from reading ui file 'bravenewmodder.ui'
**
** Created: Fri Apr 3 22:37:24 2009
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
    QWidget *TabEvents;
    QTextBrowser *tbrInfo;
    QTreeView *trvEvents;
    QFrame *frmEventStyle;
    QGroupBox *gbxType;
    QRadioButton *rdbCountry;
    QRadioButton *rdbProvince;
    QGroupBox *gbxNumber;
    QComboBox *cbxType;
    QComboBox *cbxRange;
    QSpinBox *sbxNumber;
    QGroupBox *gbxRange;
    QRadioButton *rdbUnique;
    QRadioButton *rdbSeries;
    QSpinBox *sbxRange;
    QLineEdit *lneInternaleventname;
    QPushButton *psbNew;
    QPushButton *psbPreview;
    QPushButton *psbSave;
    QPushButton *psbPreview_2;
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
    QWidget *frmEventmain;
    QScrollArea *scrEventmain;
    QWidget *sacEventmain;
    QGroupBox *gbxEventTitle;
    QLineEdit *lneEventTitle;
    QGroupBox *gbxEventDesc;
    QTextEdit *txeEventDesc;
    QGroupBox *gbxMTTH;
    QPlainTextEdit *pteMTTH;
    QGroupBox *gbxTrigger;
    QPlainTextEdit *pteTrigger;
    QGroupBox *gbxOption1;
    QLineEdit *lneOptionTitle;
    QPlainTextEdit *pteOption1;
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
        frmGameplaySettings->setGeometry(QRect(160, 10, 711, 211));
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
        lblSpreadofSeaProvinces->setGeometry(QRect(390, 150, 231, 31));
        lblInflation = new QLabel(frmGameplaySettings);
        lblInflation->setObjectName(QString::fromUtf8("lblInflation"));
        lblInflation->setGeometry(QRect(390, 0, 91, 31));
        lblSpreadofLandProvinces = new QLabel(frmGameplaySettings);
        lblSpreadofLandProvinces->setObjectName(QString::fromUtf8("lblSpreadofLandProvinces"));
        lblSpreadofLandProvinces->setGeometry(QRect(390, 120, 231, 31));
        lblSpies = new QLabel(frmGameplaySettings);
        lblSpies->setObjectName(QString::fromUtf8("lblSpies"));
        lblSpies->setGeometry(QRect(0, 180, 61, 31));
        lblMissionaries = new QLabel(frmGameplaySettings);
        lblMissionaries->setObjectName(QString::fromUtf8("lblMissionaries"));
        lblMissionaries->setGeometry(QRect(0, 150, 131, 31));
        lblDifficulty = new QLabel(frmGameplaySettings);
        lblDifficulty->setObjectName(QString::fromUtf8("lblDifficulty"));
        lblDifficulty->setGeometry(QRect(390, 60, 91, 31));
        lblAIAggressiveness = new QLabel(frmGameplaySettings);
        lblAIAggressiveness->setObjectName(QString::fromUtf8("lblAIAggressiveness"));
        lblAIAggressiveness->setGeometry(QRect(390, 90, 181, 31));
        lblSizeofColonists = new QLabel(frmGameplaySettings);
        lblSizeofColonists->setObjectName(QString::fromUtf8("lblSizeofColonists"));
        lblSizeofColonists->setGeometry(QRect(390, 30, 161, 31));
        sbxMissionaries = new QSpinBox(frmGameplaySettings);
        sbxMissionaries->setObjectName(QString::fromUtf8("sbxMissionaries"));
        sbxMissionaries->setGeometry(QRect(130, 150, 81, 21));
        sbxMissionaries->setReadOnly(true);
        sbxRulers = new QSpinBox(frmGameplaySettings);
        sbxRulers->setObjectName(QString::fromUtf8("sbxRulers"));
        sbxRulers->setGeometry(QRect(130, 2, 81, 20));
        sbxRulers->setReadOnly(true);
        sbxColonists = new QSpinBox(frmGameplaySettings);
        sbxColonists->setObjectName(QString::fromUtf8("sbxColonists"));
        sbxColonists->setGeometry(QRect(130, 90, 81, 21));
        sbxColonists->setReadOnly(true);
        sbxLeaders = new QSpinBox(frmGameplaySettings);
        sbxLeaders->setObjectName(QString::fromUtf8("sbxLeaders"));
        sbxLeaders->setGeometry(QRect(130, 60, 81, 21));
        sbxLeaders->setReadOnly(true);
        sbxAdvisors = new QSpinBox(frmGameplaySettings);
        sbxAdvisors->setObjectName(QString::fromUtf8("sbxAdvisors"));
        sbxAdvisors->setGeometry(QRect(130, 30, 81, 21));
        sbxAdvisors->setReadOnly(true);
        sbxMerchants = new QSpinBox(frmGameplaySettings);
        sbxMerchants->setObjectName(QString::fromUtf8("sbxMerchants"));
        sbxMerchants->setGeometry(QRect(130, 120, 81, 21));
        sbxMerchants->setReadOnly(true);
        sbxSpies = new QSpinBox(frmGameplaySettings);
        sbxSpies->setObjectName(QString::fromUtf8("sbxSpies"));
        sbxSpies->setGeometry(QRect(130, 180, 81, 21));
        sbxSpies->setReadOnly(true);
        sbxAIAggressiveness = new QSpinBox(frmGameplaySettings);
        sbxAIAggressiveness->setObjectName(QString::fromUtf8("sbxAIAggressiveness"));
        sbxAIAggressiveness->setGeometry(QRect(630, 90, 81, 21));
        sbxAIAggressiveness->setReadOnly(true);
        sbxSizeofColonists = new QSpinBox(frmGameplaySettings);
        sbxSizeofColonists->setObjectName(QString::fromUtf8("sbxSizeofColonists"));
        sbxSizeofColonists->setGeometry(QRect(630, 30, 81, 21));
        sbxSizeofColonists->setReadOnly(true);
        sbxSpreadofSeaProvinces = new QSpinBox(frmGameplaySettings);
        sbxSpreadofSeaProvinces->setObjectName(QString::fromUtf8("sbxSpreadofSeaProvinces"));
        sbxSpreadofSeaProvinces->setGeometry(QRect(630, 150, 81, 21));
        sbxSpreadofSeaProvinces->setReadOnly(true);
        sbxDifficulty = new QSpinBox(frmGameplaySettings);
        sbxDifficulty->setObjectName(QString::fromUtf8("sbxDifficulty"));
        sbxDifficulty->setGeometry(QRect(630, 60, 81, 21));
        sbxDifficulty->setReadOnly(true);
        sbxInflation = new QSpinBox(frmGameplaySettings);
        sbxInflation->setObjectName(QString::fromUtf8("sbxInflation"));
        sbxInflation->setGeometry(QRect(630, 2, 81, 20));
        sbxInflation->setReadOnly(true);
        sbxSpreadofLandProvinces = new QSpinBox(frmGameplaySettings);
        sbxSpreadofLandProvinces->setObjectName(QString::fromUtf8("sbxSpreadofLandProvinces"));
        sbxSpreadofLandProvinces->setGeometry(QRect(630, 120, 81, 21));
        sbxSpreadofLandProvinces->setReadOnly(true);
        sbxLuckyNations = new QSpinBox(frmGameplaySettings);
        sbxLuckyNations->setObjectName(QString::fromUtf8("sbxLuckyNations"));
        sbxLuckyNations->setGeometry(QRect(630, 180, 81, 21));
        sbxLuckyNations->setReadOnly(true);
        lblLuckyNations = new QLabel(frmGameplaySettings);
        lblLuckyNations->setObjectName(QString::fromUtf8("lblLuckyNations"));
        lblLuckyNations->setGeometry(QRect(390, 180, 141, 31));
        tbrGameplaySettings = new QTextBrowser(tabGameplaySettings);
        tbrGameplaySettings->setObjectName(QString::fromUtf8("tbrGameplaySettings"));
        tbrGameplaySettings->setGeometry(QRect(10, 581, 1021, 141));
        tbxMain->addTab(tabGameplaySettings, QString());
        tabCommon = new QWidget();
        tabCommon->setObjectName(QString::fromUtf8("tabCommon"));
        tbxMain->addTab(tabCommon, QString());
        TabEvents = new QWidget();
        TabEvents->setObjectName(QString::fromUtf8("TabEvents"));
        tbrInfo = new QTextBrowser(TabEvents);
        tbrInfo->setObjectName(QString::fromUtf8("tbrInfo"));
        tbrInfo->setGeometry(QRect(10, 661, 781, 61));
        trvEvents = new QTreeView(TabEvents);
        trvEvents->setObjectName(QString::fromUtf8("trvEvents"));
        trvEvents->setGeometry(QRect(10, 0, 171, 661));
        trvEvents->setSortingEnabled(true);
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
        gbxRange = new QGroupBox(frmEventStyle);
        gbxRange->setObjectName(QString::fromUtf8("gbxRange"));
        gbxRange->setGeometry(QRect(390, 0, 171, 31));
        gbxRange->setAlignment(Qt::AlignCenter);
        rdbUnique = new QRadioButton(gbxRange);
        rdbUnique->setObjectName(QString::fromUtf8("rdbUnique"));
        rdbUnique->setGeometry(QRect(10, 10, 51, 19));
        rdbSeries = new QRadioButton(gbxRange);
        rdbSeries->setObjectName(QString::fromUtf8("rdbSeries"));
        rdbSeries->setGeometry(QRect(70, 10, 51, 19));
        sbxRange = new QSpinBox(gbxRange);
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
        tbxReference_2 = new QTabWidget(TabEvents);
        tbxReference_2->setObjectName(QString::fromUtf8("tbxReference_2"));
        tbxReference_2->setGeometry(QRect(790, 0, 251, 721));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbxReference_2->sizePolicy().hasHeightForWidth());
        tbxReference_2->setSizePolicy(sizePolicy);
        tbxReference_2->setElideMode(Qt::ElideLeft);
        tabTriggers = new QWidget();
        tabTriggers->setObjectName(QString::fromUtf8("tabTriggers"));
        tbrTriggers = new QTextBrowser(tabTriggers);
        tbrTriggers->setObjectName(QString::fromUtf8("tbrTriggers"));
        tbrTriggers->setGeometry(QRect(0, 0, 281, 701));
        tbxReference_2->addTab(tabTriggers, QString());
        tabScopes = new QWidget();
        tabScopes->setObjectName(QString::fromUtf8("tabScopes"));
        tbrScopes = new QTextBrowser(tabScopes);
        tbrScopes->setObjectName(QString::fromUtf8("tbrScopes"));
        tbrScopes->setGeometry(QRect(0, 0, 281, 701));
        tbxReference_2->addTab(tabScopes, QString());
        tabEffects = new QWidget();
        tabEffects->setObjectName(QString::fromUtf8("tabEffects"));
        tbrEffects = new QTextBrowser(tabEffects);
        tbrEffects->setObjectName(QString::fromUtf8("tbrEffects"));
        tbrEffects->setGeometry(QRect(0, 0, 281, 701));
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
        tbrFlags->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata->addTab(tabFlags, QString());
        tabModifiers = new QWidget();
        tabModifiers->setObjectName(QString::fromUtf8("tabModifiers"));
        tbrModifiers = new QTextBrowser(tabModifiers);
        tbrModifiers->setObjectName(QString::fromUtf8("tbrModifiers"));
        tbrModifiers->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata->addTab(tabModifiers, QString());
        tabVariables = new QWidget();
        tabVariables->setObjectName(QString::fromUtf8("tabVariables"));
        tbrVariables = new QTextBrowser(tabVariables);
        tbrVariables->setObjectName(QString::fromUtf8("tbrVariables"));
        tbrVariables->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata->addTab(tabVariables, QString());
        tabData = new QWidget();
        tabData->setObjectName(QString::fromUtf8("tabData"));
        trvLData = new QTreeView(tabData);
        trvLData->setObjectName(QString::fromUtf8("trvLData"));
        trvLData->setGeometry(QRect(0, 0, 281, 681));
        tbxUserdata->addTab(tabData, QString());
        tbxReference_2->addTab(tabIndex, QString());
        frmEventmain = new QWidget(TabEvents);
        frmEventmain->setObjectName(QString::fromUtf8("frmEventmain"));
        frmEventmain->setGeometry(QRect(180, 50, 611, 611));
        scrEventmain = new QScrollArea(frmEventmain);
        scrEventmain->setObjectName(QString::fromUtf8("scrEventmain"));
        scrEventmain->setGeometry(QRect(0, 0, 611, 741));
        scrEventmain->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrEventmain->setWidgetResizable(true);
        sacEventmain = new QWidget();
        sacEventmain->setObjectName(QString::fromUtf8("sacEventmain"));
        sacEventmain->setGeometry(QRect(0, 0, 591, 737));
        gbxEventTitle = new QGroupBox(sacEventmain);
        gbxEventTitle->setObjectName(QString::fromUtf8("gbxEventTitle"));
        gbxEventTitle->setGeometry(QRect(0, 0, 591, 31));
        lneEventTitle = new QLineEdit(gbxEventTitle);
        lneEventTitle->setObjectName(QString::fromUtf8("lneEventTitle"));
        lneEventTitle->setGeometry(QRect(0, 12, 591, 20));
        gbxEventDesc = new QGroupBox(sacEventmain);
        gbxEventDesc->setObjectName(QString::fromUtf8("gbxEventDesc"));
        gbxEventDesc->setGeometry(QRect(0, 30, 591, 80));
        txeEventDesc = new QTextEdit(gbxEventDesc);
        txeEventDesc->setObjectName(QString::fromUtf8("txeEventDesc"));
        txeEventDesc->setGeometry(QRect(0, 13, 591, 61));
        gbxMTTH = new QGroupBox(sacEventmain);
        gbxMTTH->setObjectName(QString::fromUtf8("gbxMTTH"));
        gbxMTTH->setGeometry(QRect(0, 280, 591, 171));
        pteMTTH = new QPlainTextEdit(gbxMTTH);
        pteMTTH->setObjectName(QString::fromUtf8("pteMTTH"));
        pteMTTH->setGeometry(QRect(0, 13, 591, 151));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pteMTTH->sizePolicy().hasHeightForWidth());
        pteMTTH->setSizePolicy(sizePolicy1);
        gbxTrigger = new QGroupBox(sacEventmain);
        gbxTrigger->setObjectName(QString::fromUtf8("gbxTrigger"));
        gbxTrigger->setGeometry(QRect(0, 110, 591, 171));
        pteTrigger = new QPlainTextEdit(gbxTrigger);
        pteTrigger->setObjectName(QString::fromUtf8("pteTrigger"));
        pteTrigger->setGeometry(QRect(0, 13, 591, 151));
        sizePolicy1.setHeightForWidth(pteTrigger->sizePolicy().hasHeightForWidth());
        pteTrigger->setSizePolicy(sizePolicy1);
        gbxOption1 = new QGroupBox(sacEventmain);
        gbxOption1->setObjectName(QString::fromUtf8("gbxOption1"));
        gbxOption1->setGeometry(QRect(0, 450, 591, 161));
        lneOptionTitle = new QLineEdit(gbxOption1);
        lneOptionTitle->setObjectName(QString::fromUtf8("lneOptionTitle"));
        lneOptionTitle->setGeometry(QRect(0, 13, 591, 20));
        pteOption1 = new QPlainTextEdit(gbxOption1);
        pteOption1->setObjectName(QString::fromUtf8("pteOption1"));
        pteOption1->setGeometry(QRect(0, 40, 591, 121));
        scrEventmain->setWidget(sacEventmain);
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

        tbxMain->setCurrentIndex(0);
        tbxReference_2->setCurrentIndex(3);
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
        sbxSpreadofLandProvinces->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Historical", 0, QApplication::UnicodeUTF8));
        sbxLuckyNations->setSpecialValueText(QApplication::translate("BravenewmodderClass", "Very Hard", 0, QApplication::UnicodeUTF8));
        lblLuckyNations->setText(QApplication::translate("BravenewmodderClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Lucky Nations</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
        gbxRange->setTitle(QApplication::translate("BravenewmodderClass", "Event Range", 0, QApplication::UnicodeUTF8));
        rdbUnique->setText(QApplication::translate("BravenewmodderClass", "Unique", 0, QApplication::UnicodeUTF8));
        rdbSeries->setText(QApplication::translate("BravenewmodderClass", "Series", 0, QApplication::UnicodeUTF8));
        lneInternaleventname->setText(QApplication::translate("BravenewmodderClass", "\"Internal Event Series Name\" *Series range&active number* [Internal Event Name]", 0, QApplication::UnicodeUTF8));
        psbNew->setText(QApplication::translate("BravenewmodderClass", "New", 0, QApplication::UnicodeUTF8));
        psbPreview->setText(QApplication::translate("BravenewmodderClass", "Preview", 0, QApplication::UnicodeUTF8));
        psbSave->setText(QApplication::translate("BravenewmodderClass", "Save", 0, QApplication::UnicodeUTF8));
        psbPreview_2->setText(QApplication::translate("BravenewmodderClass", "Syntax Check", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabTriggers), QApplication::translate("BravenewmodderClass", "Triggers", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabScopes), QApplication::translate("BravenewmodderClass", "Scopes", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabEffects), QApplication::translate("BravenewmodderClass", "Effects", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabFlags), QApplication::translate("BravenewmodderClass", "Flags", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabModifiers), QApplication::translate("BravenewmodderClass", "Modifiers", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabVariables), QApplication::translate("BravenewmodderClass", "Variables", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabData), QApplication::translate("BravenewmodderClass", "Data", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabIndex), QApplication::translate("BravenewmodderClass", "Index", 0, QApplication::UnicodeUTF8));
        gbxEventTitle->setTitle(QApplication::translate("BravenewmodderClass", "Event Title", 0, QApplication::UnicodeUTF8));
        gbxEventDesc->setTitle(QApplication::translate("BravenewmodderClass", "Event Description", 0, QApplication::UnicodeUTF8));
        gbxMTTH->setTitle(QApplication::translate("BravenewmodderClass", "Mean Time To Happen", 0, QApplication::UnicodeUTF8));
        gbxTrigger->setTitle(QApplication::translate("BravenewmodderClass", "Trigger", 0, QApplication::UnicodeUTF8));
        gbxOption1->setTitle(QApplication::translate("BravenewmodderClass", "Option 1", 0, QApplication::UnicodeUTF8));
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
