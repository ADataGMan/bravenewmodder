/********************************************************************************
** Form generated from reading ui file 'Option.ui'
**
** Created: Mon May 25 03:37:45 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

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
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEdit_4;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_6;
    QPlainTextEdit *plainTextEdit_3;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(541, 391);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 541, 391));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 541, 31));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 541, 20));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 220, 541, 171));
        plainTextEdit_4 = new QPlainTextEdit(groupBox_5);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(0, 12, 541, 160));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 40, 541, 31));
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(0, 12, 61, 20));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 70, 541, 151));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_6);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(0, 12, 541, 140));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Frame", "Option", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Frame", "Option Title", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        plainTextEdit_4->setPlainText(QString());
        groupBox_4->setTitle(QApplication::translate("Frame", "AI Chance", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setText(QString());
        groupBox_6->setTitle(QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        plainTextEdit_3->setPlainText(QString());
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
