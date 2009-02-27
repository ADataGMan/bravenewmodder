/********************************************************************************
** Form generated from reading ui file 'advisortypes.ui'
**
** Created: Thu Feb 26 18:21:06 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADVISORTYPES_H
#define UI_ADVISORTYPES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupBox
{
public:
    QTreeWidget *treeWidget;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QGroupBox *groupBox;
    QTextEdit *textEdit_8;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget_5;
    QWidget *tab_23;
    QWidget *tab_25;
    QWidget *tab_27;
    QTabWidget *tabWidget_6;
    QWidget *tab_28;
    QLabel *label_17;
    QWidget *tab_29;
    QWidget *tab_30;
    QWidget *tab_31;

    void setupUi(QGroupBox *GroupBox)
    {
    if (GroupBox->objectName().isEmpty())
        GroupBox->setObjectName(QString::fromUtf8("GroupBox"));
    GroupBox->resize(1031, 731);
    treeWidget = new QTreeWidget(GroupBox);
    new QTreeWidgetItem(treeWidget);

    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setGeometry(QRect(0, 20, 91, 631));
    textBrowser = new QTextBrowser(GroupBox);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(0, 651, 1031, 81));
    lineEdit_13 = new QLineEdit(GroupBox);
    lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
    lineEdit_13->setGeometry(QRect(140, 20, 481, 21));
    lineEdit_14 = new QLineEdit(GroupBox);
    lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
    lineEdit_14->setGeometry(QRect(90, 20, 51, 21));
    groupBox = new QGroupBox(GroupBox);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(90, 40, 531, 261));
    textEdit_8 = new QTextEdit(groupBox);
    textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));
    textEdit_8->setGeometry(QRect(0, 20, 531, 241));
    groupBox_8 = new QGroupBox(GroupBox);
    groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
    groupBox_8->setGeometry(QRect(770, 10, 261, 641));
    tabWidget_5 = new QTabWidget(groupBox_8);
    tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
    tabWidget_5->setGeometry(QRect(0, 20, 271, 631));
    tabWidget_5->setElideMode(Qt::ElideLeft);
    tab_23 = new QWidget();
    tab_23->setObjectName(QString::fromUtf8("tab_23"));
    tabWidget_5->addTab(tab_23, QString());
    tab_25 = new QWidget();
    tab_25->setObjectName(QString::fromUtf8("tab_25"));
    tabWidget_5->addTab(tab_25, QString());
    tab_27 = new QWidget();
    tab_27->setObjectName(QString::fromUtf8("tab_27"));
    tabWidget_6 = new QTabWidget(tab_27);
    tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
    tabWidget_6->setGeometry(QRect(4, 0, 261, 601));
    tab_28 = new QWidget();
    tab_28->setObjectName(QString::fromUtf8("tab_28"));
    label_17 = new QLabel(tab_28);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(0, 10, 231, 161));
    label_17->setTextFormat(Qt::RichText);
    tabWidget_6->addTab(tab_28, QString());
    tab_29 = new QWidget();
    tab_29->setObjectName(QString::fromUtf8("tab_29"));
    tabWidget_6->addTab(tab_29, QString());
    tab_30 = new QWidget();
    tab_30->setObjectName(QString::fromUtf8("tab_30"));
    tabWidget_6->addTab(tab_30, QString());
    tab_31 = new QWidget();
    tab_31->setObjectName(QString::fromUtf8("tab_31"));
    tabWidget_6->addTab(tab_31, QString());
    tabWidget_5->addTab(tab_27, QString());

    retranslateUi(GroupBox);

    tabWidget_5->setCurrentIndex(2);
    tabWidget_6->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(GroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox)
    {
    GroupBox->setWindowTitle(QApplication::translate("GroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
    GroupBox->setTitle(QApplication::translate("GroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("GroupBox", "Advisor Types", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    treeWidget->topLevelItem(0)->setText(0, QApplication::translate("GroupBox", "Philosopher", 0, QApplication::UnicodeUTF8));

    treeWidget->setSortingEnabled(__sortingEnabled);
    lineEdit_13->setText(QApplication::translate("GroupBox", "Title of Advisor", 0, QApplication::UnicodeUTF8));
    lineEdit_14->setText(QApplication::translate("GroupBox", "Chance", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("GroupBox", "Modifiers", 0, QApplication::UnicodeUTF8));
    groupBox_8->setTitle(QApplication::translate("GroupBox", "Reference", 0, QApplication::UnicodeUTF8));
    tabWidget_5->setTabText(tabWidget_5->indexOf(tab_23), QApplication::translate("GroupBox", "Triggers", 0, QApplication::UnicodeUTF8));
    tabWidget_5->setTabText(tabWidget_5->indexOf(tab_25), QApplication::translate("GroupBox", "Effects", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("GroupBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">A list of triggers, effects,scopes <br />will be displayed in the first few <br />tabs, while in the index a <br />list of all flags, modifiers, <br />variables, and country data <br />such as tags, cultures, <br />trade goods will be displayed here</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    tabWidget_6->setTabText(tabWidget_6->indexOf(tab_28), QApplication::translate("GroupBox", "Flags", 0, QApplication::UnicodeUTF8));
    tabWidget_6->setTabText(tabWidget_6->indexOf(tab_29), QApplication::translate("GroupBox", "Modifiers", 0, QApplication::UnicodeUTF8));
    tabWidget_6->setTabText(tabWidget_6->indexOf(tab_30), QApplication::translate("GroupBox", "Variables", 0, QApplication::UnicodeUTF8));
    tabWidget_6->setTabText(tabWidget_6->indexOf(tab_31), QApplication::translate("GroupBox", "Data", 0, QApplication::UnicodeUTF8));
    tabWidget_5->setTabText(tabWidget_5->indexOf(tab_27), QApplication::translate("GroupBox", "Index", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GroupBox);
    } // retranslateUi

};

namespace Ui {
    class GroupBox: public Ui_GroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVISORTYPES_H
