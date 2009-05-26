/********************************************************************************
** Form generated from reading ui file 'Reference.ui'
**
** Created: Mon May 25 20:18:06 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_REFERENCE_H
#define UI_REFERENCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QWidget *tab_3;
    QTextBrowser *textBrowser_2;
    QWidget *tab_4;
    QTextBrowser *textBrowser_3;
    QWidget *tab_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_6;
    QTreeView *treeView_2;
    QWidget *tab_8;
    QTextBrowser *textBrowser_6;
    QWidget *tab_9;
    QTreeView *treeView;
    QWidget *tab_7;
    QTreeView *treeView_3;
    QWidget *tab_10;
    QTextBrowser *textBrowser_4;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(292, 726);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(Frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 292, 726));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 291, 701));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textBrowser_2 = new QTextBrowser(tab_3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 291, 701));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        textBrowser_3 = new QTextBrowser(tab_4);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 291, 701));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_2 = new QTabWidget(tab_5);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 291, 726));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        treeView_2 = new QTreeView(tab_6);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));
        treeView_2->setGeometry(QRect(0, 0, 288, 681));
        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        textBrowser_6 = new QTextBrowser(tab_8);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 288, 681));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        treeView = new QTreeView(tab_9);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(0, 0, 288, 681));
        tabWidget_2->addTab(tab_9, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        treeView_3 = new QTreeView(tab_7);
        treeView_3->setObjectName(QString::fromUtf8("treeView_3"));
        treeView_3->setGeometry(QRect(0, 0, 288, 681));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab_5, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        textBrowser_4 = new QTextBrowser(tab_10);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 291, 701));
        tabWidget->addTab(tab_10, QString());

        retranslateUi(Frame);

        tabWidget->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Frame", "Scopes", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Frame", "Triggers", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("Frame", "Flags", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("Frame", "Variables", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Frame", "Data", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Frame", "Index", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("Frame", "Guide", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCE_H
