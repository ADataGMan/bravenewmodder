/********************************************************************************
** Form generated from reading ui file 'eventmain.ui'
**
** Created: Mon May 25 20:18:06 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EVENTMAIN_H
#define UI_EVENTMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Eventmain
{
public:
    QGroupBox *groupBox;
    QGroupBox *gbxRange;
    QRadioButton *rdbUnique;
    QRadioButton *rdbSeries;
    QSpinBox *sbxRange;
    QGroupBox *gbxNumber;
    QComboBox *cbxType;
    QSpinBox *sbxNumber;
    QGroupBox *gbxType;
    QRadioButton *rdbCountry;
    QRadioButton *rdbProvince;
    QRadioButton *radioButton;
    QGroupBox *groupBox_9;
    QLineEdit *lneInternaleventname;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_8;
    QPlainTextEdit *plainTextEdit_2;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit_2;

    void setupUi(QFrame *Eventmain)
    {
        if (Eventmain->objectName().isEmpty())
            Eventmain->setObjectName(QString::fromUtf8("Eventmain"));
        Eventmain->resize(541, 638);
        Eventmain->setFrameShape(QFrame::StyledPanel);
        Eventmain->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(Eventmain);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 541, 75));
        groupBox->setAlignment(Qt::AlignCenter);
        gbxRange = new QGroupBox(groupBox);
        gbxRange->setObjectName(QString::fromUtf8("gbxRange"));
        gbxRange->setGeometry(QRect(360, 10, 181, 31));
        gbxRange->setAlignment(Qt::AlignCenter);
        rdbUnique = new QRadioButton(gbxRange);
        rdbUnique->setObjectName(QString::fromUtf8("rdbUnique"));
        rdbUnique->setGeometry(QRect(10, 12, 51, 19));
        rdbSeries = new QRadioButton(gbxRange);
        rdbSeries->setObjectName(QString::fromUtf8("rdbSeries"));
        rdbSeries->setGeometry(QRect(70, 12, 51, 19));
        sbxRange = new QSpinBox(gbxRange);
        sbxRange->setObjectName(QString::fromUtf8("sbxRange"));
        sbxRange->setGeometry(QRect(120, 12, 61, 19));
        sbxRange->setLayoutDirection(Qt::LeftToRight);
        sbxRange->setFrame(true);
        sbxRange->setMinimum(10);
        sbxRange->setMaximum(10000);
        sbxRange->setValue(10000);
        gbxNumber = new QGroupBox(groupBox);
        gbxNumber->setObjectName(QString::fromUtf8("gbxNumber"));
        gbxNumber->setGeometry(QRect(190, 10, 171, 31));
        gbxNumber->setAlignment(Qt::AlignCenter);
        cbxType = new QComboBox(gbxNumber);
        cbxType->setObjectName(QString::fromUtf8("cbxType"));
        cbxType->setGeometry(QRect(0, 11, 91, 20));
        sbxNumber = new QSpinBox(gbxNumber);
        sbxNumber->setObjectName(QString::fromUtf8("sbxNumber"));
        sbxNumber->setGeometry(QRect(90, 11, 81, 20));
        sbxNumber->setMaximum(99999999);
        sbxNumber->setValue(10100500);
        gbxType = new QGroupBox(groupBox);
        gbxType->setObjectName(QString::fromUtf8("gbxType"));
        gbxType->setGeometry(QRect(0, 10, 191, 31));
        gbxType->setAlignment(Qt::AlignCenter);
        rdbCountry = new QRadioButton(gbxType);
        rdbCountry->setObjectName(QString::fromUtf8("rdbCountry"));
        rdbCountry->setGeometry(QRect(2, 12, 57, 16));
        rdbProvince = new QRadioButton(gbxType);
        rdbProvince->setObjectName(QString::fromUtf8("rdbProvince"));
        rdbProvince->setGeometry(QRect(60, 12, 61, 16));
        radioButton = new QRadioButton(gbxType);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(122, 12, 71, 16));
        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 40, 541, 35));
        lneInternaleventname = new QLineEdit(groupBox_9);
        lneInternaleventname->setObjectName(QString::fromUtf8("lneInternaleventname"));
        lneInternaleventname->setGeometry(QRect(0, 13, 241, 20));
        lineEdit = new QLineEdit(groupBox_9);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 13, 221, 20));
        lineEdit_2 = new QLineEdit(groupBox_9);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(460, 13, 81, 20));
        groupBox_2 = new QGroupBox(Eventmain);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 74, 541, 566));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 336, 541, 452));
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 10, 541, 31));
        lineEdit_4 = new QLineEdit(groupBox_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 10, 41, 19));
        radioButton_2 = new QRadioButton(groupBox_6);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(7, 10, 41, 19));
        radioButton_3 = new QRadioButton(groupBox_6);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(48, 10, 51, 19));
        radioButton_4 = new QRadioButton(groupBox_6);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(100, 10, 41, 19));
        groupBox_8 = new QGroupBox(groupBox_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 40, 541, 188));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_8);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 12, 541, 174));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 10, 541, 36));
        textEdit = new QTextEdit(groupBox_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 13, 541, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 143, 541, 196));
        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 13, 541, 181));
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 44, 541, 101));
        textEdit_2 = new QTextEdit(groupBox_7);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 14, 541, 85));

        retranslateUi(Eventmain);

        QMetaObject::connectSlotsByName(Eventmain);
    } // setupUi

    void retranslateUi(QFrame *Eventmain)
    {
        Eventmain->setWindowTitle(QApplication::translate("Eventmain", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Eventmain", "Internal Title and Numeration", 0, QApplication::UnicodeUTF8));
        gbxRange->setTitle(QApplication::translate("Eventmain", "Event Range", 0, QApplication::UnicodeUTF8));
        rdbUnique->setText(QApplication::translate("Eventmain", "Unique", 0, QApplication::UnicodeUTF8));
        rdbSeries->setText(QApplication::translate("Eventmain", "Series", 0, QApplication::UnicodeUTF8));
        gbxNumber->setTitle(QApplication::translate("Eventmain", "Event Number", 0, QApplication::UnicodeUTF8));
        cbxType->clear();
        cbxType->insertItems(0, QStringList()
         << QApplication::translate("Eventmain", "- Legacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "0 Government", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "1 Diplomacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "2 Economy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "3 Military", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "4 Religion", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "5 Colonial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "6 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "7 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "8 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Eventmain", "9 Custom", 0, QApplication::UnicodeUTF8)
        );
        gbxType->setTitle(QApplication::translate("Eventmain", "Event Type", 0, QApplication::UnicodeUTF8));
        rdbCountry->setText(QApplication::translate("Eventmain", "Country", 0, QApplication::UnicodeUTF8));
        rdbProvince->setText(QApplication::translate("Eventmain", "Province", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Eventmain", "Character", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("Eventmain", "Internal Event Name                                                Internal Event Series Name                             Series Start #", 0, QApplication::UnicodeUTF8));
        lneInternaleventname->setText(QString());
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Eventmain", "Event Data", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Eventmain", "Mean Time to Happen", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("Eventmain", "Initial MTTH", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QString());
        radioButton_2->setText(QApplication::translate("Eventmain", "Day", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Eventmain", "Month", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Eventmain", "Year", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("Eventmain", "Modifiers", 0, QApplication::UnicodeUTF8));
        plainTextEdit_2->setPlainText(QString());
        groupBox_4->setTitle(QApplication::translate("Eventmain", "Event Title", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Eventmain", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Eventmain", "Trigger", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        groupBox_7->setTitle(QApplication::translate("Eventmain", "Event Description", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("Eventmain", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Eventmain);
    } // retranslateUi

};

namespace Ui {
    class Eventmain: public Ui_Eventmain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTMAIN_H
