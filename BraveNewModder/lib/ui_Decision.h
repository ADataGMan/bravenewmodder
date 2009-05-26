/********************************************************************************
** Form generated from reading ui file 'Decision.ui'
**
** Created: Tue May 26 03:08:32 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DECISION_H
#define UI_DECISION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_4;
    QPlainTextEdit *plainTextEdit_2;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_8;
    QPlainTextEdit *plainTextEdit_3;
    QGroupBox *groupBox_9;
    QPlainTextEdit *plainTextEdit_4;
    QGroupBox *groupBox_10;
    QPlainTextEdit *plainTextEdit_5;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(541, 768);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 0, 411, 32));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 411, 20));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        groupBox_3 = new QGroupBox(Frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 570, 541, 202));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 12, 61, 19));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 30, 541, 171));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 12, 541, 156));
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        groupBox_5 = new QGroupBox(Frame);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(1, 0, 131, 62));
        radioButton = new QRadioButton(groupBox_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(4, 10, 61, 19));
        radioButton_2 = new QRadioButton(groupBox_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(70, 10, 61, 19));
        radioButton_3 = new QRadioButton(groupBox_5);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(4, 30, 61, 19));
        radioButton_4 = new QRadioButton(groupBox_5);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(70, 30, 41, 19));
        groupBox_6 = new QGroupBox(Frame);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(130, 30, 411, 32));
        lineEdit = new QLineEdit(groupBox_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 12, 411, 20));
        groupBox_7 = new QGroupBox(Frame);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 60, 541, 121));
        textEdit_2 = new QTextEdit(groupBox_7);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 12, 541, 106));
        groupBox_8 = new QGroupBox(Frame);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 180, 541, 131));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_8);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(0, 12, 541, 116));
        groupBox_9 = new QGroupBox(Frame);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 310, 541, 131));
        plainTextEdit_4 = new QPlainTextEdit(groupBox_9);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(0, 12, 541, 116));
        groupBox_10 = new QGroupBox(Frame);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 440, 541, 131));
        plainTextEdit_5 = new QPlainTextEdit(groupBox_10);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(0, 12, 541, 116));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Frame", "Decision Title", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Frame", "AI Will Do", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Frame", "Decision Type", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Frame", "Country", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Frame", "Province", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Frame", "Religious", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Frame", "Law", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("Frame", "Internal Decision Title", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("Frame", "Decision Description", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("Frame", "Potential", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("Frame", "Allow", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECISION_H
