/********************************************************************************
** Form generated from reading ui file 'buildings.ui'
**
** Created: Fri Feb 27 01:17:53 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BUILDINGS_H
#define UI_BUILDINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScrollArea
{
public:
    QWidget *scrollAreaWidgetContents;
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QScrollArea *ScrollArea)
    {
    if (ScrollArea->objectName().isEmpty())
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
    ScrollArea->resize(643, 605);
    ScrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 639, 601));
    treeWidget = new QTreeWidget(scrollAreaWidgetContents);
    new QTreeWidgetItem(treeWidget);

    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setGeometry(QRect(0, 0, 71, 551));
    lineEdit = new QLineEdit(scrollAreaWidgetContents);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(80, 10, 431, 21));
    lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(80, 40, 113, 20));
    lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(210, 40, 113, 20));
    textBrowser = new QTextBrowser(scrollAreaWidgetContents);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(520, 10, 121, 531));
    label = new QLabel(scrollAreaWidgetContents);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(540, 80, 91, 21));
    textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
    textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
    textBrowser_2->setGeometry(QRect(-5, 551, 651, 51));
    label_2 = new QLabel(scrollAreaWidgetContents);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(40, 560, 171, 21));
    lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
    lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
    lineEdit_4->setGeometry(QRect(80, 70, 431, 21));
    lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
    lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
    lineEdit_5->setGeometry(QRect(80, 100, 431, 20));
    groupBox = new QGroupBox(scrollAreaWidgetContents);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(80, 290, 431, 111));
    textEdit_2 = new QTextEdit(groupBox);
    textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
    textEdit_2->setGeometry(QRect(10, 20, 411, 81));
    groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(80, 130, 431, 151));
    textEdit = new QTextEdit(groupBox_2);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setGeometry(QRect(0, 20, 431, 131));
    groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(80, 410, 71, 91));
    checkBox_4 = new QCheckBox(groupBox_3);
    checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
    checkBox_4->setGeometry(QRect(10, 70, 71, 19));
    checkBox_3 = new QCheckBox(groupBox_3);
    checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
    checkBox_3->setGeometry(QRect(10, 10, 71, 19));
    checkBox = new QCheckBox(groupBox_3);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(10, 30, 71, 19));
    checkBox_2 = new QCheckBox(groupBox_3);
    checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
    checkBox_2->setGeometry(QRect(10, 50, 71, 19));
    ScrollArea->setWidget(scrollAreaWidgetContents);

    retranslateUi(ScrollArea);

    QMetaObject::connectSlotsByName(ScrollArea);
    } // setupUi

    void retranslateUi(QScrollArea *ScrollArea)
    {
    ScrollArea->setWindowTitle(QApplication::translate("ScrollArea", "ScrollArea", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("ScrollArea", "Buildings", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    treeWidget->topLevelItem(0)->setText(0, QApplication::translate("ScrollArea", "Temple", 0, QApplication::UnicodeUTF8));

    treeWidget->setSortingEnabled(__sortingEnabled);
    lineEdit->setText(QApplication::translate("ScrollArea", "Building Title", 0, QApplication::UnicodeUTF8));
    lineEdit_2->setText(QApplication::translate("ScrollArea", "Cost", 0, QApplication::UnicodeUTF8));
    lineEdit_3->setText(QApplication::translate("ScrollArea", "Time in Months", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("ScrollArea", "List of Modifiers", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("ScrollArea", "Description of modifiers, use", 0, QApplication::UnicodeUTF8));
    lineEdit_4->setText(QApplication::translate("ScrollArea", "Prerequisite buildings", 0, QApplication::UnicodeUTF8));
    lineEdit_5->setText(QApplication::translate("ScrollArea", "Can not be built if X exists", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("ScrollArea", "Manufactory bonus if Trade Goods exist", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("ScrollArea", "Modifiers", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QString());
    checkBox_4->setText(QApplication::translate("ScrollArea", "Capital", 0, QApplication::UnicodeUTF8));
    checkBox_3->setText(QApplication::translate("ScrollArea", "Port", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("ScrollArea", "On Map", 0, QApplication::UnicodeUTF8));
    checkBox_2->setText(QApplication::translate("ScrollArea", "Confirm", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ScrollArea);
    } // retranslateUi

};

namespace Ui {
    class ScrollArea: public Ui_ScrollArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDINGS_H
