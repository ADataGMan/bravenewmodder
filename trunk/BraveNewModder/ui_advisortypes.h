/********************************************************************************
** Form generated from reading ui file 'advisortypes.ui'
**
** Created: Sun May 24 15:30:54 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADVISORTYPES_H
#define UI_ADVISORTYPES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
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
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEdit_2;
    QLineEdit *lineEdit_2;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(831, 630);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        tbxReference_2 = new QTabWidget(Frame);
        tbxReference_2->setObjectName(QString::fromUtf8("tbxReference_2"));
        tbxReference_2->setGeometry(QRect(590, 0, 241, 631));
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
        tbrTriggers->setGeometry(QRect(0, 0, 241, 611));
        tbxReference_2->addTab(tabTriggers, QString());
        tabScopes = new QWidget();
        tabScopes->setObjectName(QString::fromUtf8("tabScopes"));
        tbrScopes = new QTextBrowser(tabScopes);
        tbrScopes->setObjectName(QString::fromUtf8("tbrScopes"));
        tbrScopes->setGeometry(QRect(0, 0, 241, 611));
        tbxReference_2->addTab(tabScopes, QString());
        tabEffects = new QWidget();
        tabEffects->setObjectName(QString::fromUtf8("tabEffects"));
        tbrEffects = new QTextBrowser(tabEffects);
        tbrEffects->setObjectName(QString::fromUtf8("tbrEffects"));
        tbrEffects->setGeometry(QRect(0, 0, 241, 611));
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
        tbrFlags->setGeometry(QRect(0, 0, 241, 581));
        tbxUserdata->addTab(tabFlags, QString());
        tabModifiers = new QWidget();
        tabModifiers->setObjectName(QString::fromUtf8("tabModifiers"));
        tbrModifiers = new QTextBrowser(tabModifiers);
        tbrModifiers->setObjectName(QString::fromUtf8("tbrModifiers"));
        tbrModifiers->setGeometry(QRect(0, 0, 241, 581));
        tbxUserdata->addTab(tabModifiers, QString());
        tabVariables = new QWidget();
        tabVariables->setObjectName(QString::fromUtf8("tabVariables"));
        tbrVariables = new QTextBrowser(tabVariables);
        tbrVariables->setObjectName(QString::fromUtf8("tbrVariables"));
        tbrVariables->setGeometry(QRect(0, 0, 241, 581));
        tbxUserdata->addTab(tabVariables, QString());
        tabData = new QWidget();
        tabData->setObjectName(QString::fromUtf8("tabData"));
        trvLData = new QTreeView(tabData);
        trvLData->setObjectName(QString::fromUtf8("trvLData"));
        trvLData->setGeometry(QRect(0, 0, 241, 581));
        tbxUserdata->addTab(tabData, QString());
        tbxReference_2->addTab(tabIndex, QString());
        groupBox = new QGroupBox(Frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 591, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 251, 20));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 12, 341, 20));
        groupBox_2 = new QGroupBox(Frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 30, 591, 101));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 12, 591, 90));
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        groupBox_3 = new QGroupBox(Frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 130, 591, 501));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_3);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 31, 591, 471));
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 12, 113, 19));

        retranslateUi(Frame);

        tbxReference_2->setCurrentIndex(0);
        tbxUserdata->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabTriggers), QApplication::translate("Frame", "Triggers", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabScopes), QApplication::translate("Frame", "Scopes", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabEffects), QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabFlags), QApplication::translate("Frame", "Flags", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabModifiers), QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabVariables), QApplication::translate("Frame", "Variables", 0, QApplication::UnicodeUTF8));
        tbxUserdata->setTabText(tbxUserdata->indexOf(tabData), QApplication::translate("Frame", "Data", 0, QApplication::UnicodeUTF8));
        tbxReference_2->setTabText(tbxReference_2->indexOf(tabIndex), QApplication::translate("Frame", "Index", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Frame", "Advisor Title", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Displayed title of advisor</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("Frame", "Internal name, otherwise will default to display title with formatting ", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        groupBox_3->setTitle(QApplication::translate("Frame", "Chance", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("Frame", "AI Chance", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVISORTYPES_H
