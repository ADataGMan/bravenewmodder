/********************************************************************************
** Form generated from reading ui file 'Countries.ui'
**
** Created: Fri Feb 27 01:17:53 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_COUNTRIES_H
#define UI_COUNTRIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QLineEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScrollArea
{
public:
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QTreeWidget *treeWidget;

    void setupUi(QScrollArea *ScrollArea)
    {
    if (ScrollArea->objectName().isEmpty())
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
    ScrollArea->resize(640, 480);
    ScrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 636, 476));
    groupBox = new QGroupBox(scrollAreaWidgetContents);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(140, 0, 491, 471));
    tableWidget = new QTableWidget(groupBox);
    if (tableWidget->columnCount() < 4)
        tableWidget->setColumnCount(4);
    QTableWidgetItem *__colItem = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(0, __colItem);
    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(1, __colItem1);
    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(2, __colItem2);
    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(3, __colItem3);
    if (tableWidget->rowCount() < 1)
        tableWidget->setRowCount(1);
    QTableWidgetItem *__rowItem = new QTableWidgetItem();
    tableWidget->setVerticalHeaderItem(0, __rowItem);
    QTableWidgetItem *__tableItem = new QTableWidgetItem();
    tableWidget->setItem(0, 0, __tableItem);
    QTableWidgetItem *__tableItem1 = new QTableWidgetItem();
    tableWidget->setItem(0, 1, __tableItem1);
    QTableWidgetItem *__tableItem2 = new QTableWidgetItem();
    tableWidget->setItem(0, 2, __tableItem2);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
    tableWidget->setGeometry(QRect(10, 40, 471, 421));
    lineEdit = new QLineEdit(groupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(10, 20, 471, 20));
    treeWidget = new QTreeWidget(scrollAreaWidgetContents);
    new QTreeWidgetItem(treeWidget);

    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setGeometry(QRect(0, 0, 141, 471));
    ScrollArea->setWidget(scrollAreaWidgetContents);

    retranslateUi(ScrollArea);

    QMetaObject::connectSlotsByName(ScrollArea);
    } // setupUi

    void retranslateUi(QScrollArea *ScrollArea)
    {
    ScrollArea->setWindowTitle(QApplication::translate("ScrollArea", "ScrollArea", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("ScrollArea", "Regions", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(0)->setText(QApplication::translate("ScrollArea", "Tag", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(1)->setText(QApplication::translate("ScrollArea", "Country Name", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(2)->setText(QApplication::translate("ScrollArea", "Adjective", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(3)->setText(QApplication::translate("ScrollArea", "Adjective 2", 0, QApplication::UnicodeUTF8));
    tableWidget->verticalHeaderItem(0)->setText(QApplication::translate("ScrollArea", "1", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = tableWidget->isSortingEnabled();
    tableWidget->setSortingEnabled(false);
    tableWidget->item(0, 0)->setText(QApplication::translate("ScrollArea", "SPA", 0, QApplication::UnicodeUTF8));
    tableWidget->item(0, 1)->setText(QApplication::translate("ScrollArea", "Spain", 0, QApplication::UnicodeUTF8));
    tableWidget->item(0, 2)->setText(QApplication::translate("ScrollArea", "Spanish", 0, QApplication::UnicodeUTF8));

    tableWidget->setSortingEnabled(__sortingEnabled);
    lineEdit->setText(QApplication::translate("ScrollArea", "Name of Region - Spain - Each country listed will have a country file generated under Countries", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("ScrollArea", "Regions", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    treeWidget->topLevelItem(0)->setText(0, QApplication::translate("ScrollArea", "Spain", 0, QApplication::UnicodeUTF8));

    treeWidget->setSortingEnabled(__sortingEnabled1);
    Q_UNUSED(ScrollArea);
    } // retranslateUi

};

namespace Ui {
    class ScrollArea: public Ui_ScrollArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRIES_H
