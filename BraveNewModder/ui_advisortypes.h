/********************************************************************************
** Form generated from reading ui file 'advisortypes.ui'
**
** Created: Mon May 25 02:43:07 2009
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
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_4;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(541, 362);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 541, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 271, 20));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 12, 271, 20));
        groupBox_2 = new QGroupBox(Frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 30, 541, 101));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 12, 541, 90));
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        groupBox_3 = new QGroupBox(Frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 130, 541, 234));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 12, 61, 19));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 30, 541, 204));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 12, 541, 190));
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Frame", "Advisor Title                                                                        Internal Advisor Name", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        groupBox_3->setTitle(QApplication::translate("Frame", "AI Chance", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVISORTYPES_H
