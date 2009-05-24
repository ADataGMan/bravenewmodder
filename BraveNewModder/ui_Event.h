/********************************************************************************
** Form generated from reading ui file 'Event.ui'
**
** Created: Sun May 24 15:30:54 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EVENT_H
#define UI_EVENT_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QFrame *frame;
    QGroupBox *gbxType;
    QRadioButton *rdbCountry;
    QRadioButton *rdbProvince;
    QGroupBox *gbxNumber;
    QComboBox *cbxType;
    QComboBox *cbxRange;
    QSpinBox *sbxNumber;
    QLineEdit *lineEdit;
    QLineEdit *lneInternaleventname;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QGroupBox *gbxRange;
    QRadioButton *rdbUnique;
    QRadioButton *rdbSeries;
    QSpinBox *sbxRange;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEdit_2;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEdit_4;
    QGroupBox *groupBox_6;
    QPlainTextEdit *plainTextEdit_3;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(591, 974);
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Frame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 591, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gbxType = new QGroupBox(frame);
        gbxType->setObjectName(QString::fromUtf8("gbxType"));
        gbxType->setGeometry(QRect(0, 0, 191, 31));
        gbxType->setAlignment(Qt::AlignCenter);
        rdbCountry = new QRadioButton(gbxType);
        rdbCountry->setObjectName(QString::fromUtf8("rdbCountry"));
        rdbCountry->setGeometry(QRect(30, 10, 57, 16));
        rdbProvince = new QRadioButton(gbxType);
        rdbProvince->setObjectName(QString::fromUtf8("rdbProvince"));
        rdbProvince->setGeometry(QRect(110, 10, 61, 16));
        gbxNumber = new QGroupBox(frame);
        gbxNumber->setObjectName(QString::fromUtf8("gbxNumber"));
        gbxNumber->setGeometry(QRect(190, 0, 241, 31));
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
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 30, 351, 20));
        lneInternaleventname = new QLineEdit(frame);
        lneInternaleventname->setObjectName(QString::fromUtf8("lneInternaleventname"));
        lneInternaleventname->setGeometry(QRect(0, 50, 351, 20));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 30, 51, 20));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(350, 50, 51, 20));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 30, 61, 20));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 50, 70, 20));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 50, 61, 20));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 30, 71, 20));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(400, 50, 61, 20));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(530, 30, 61, 20));
        gbxRange = new QGroupBox(frame);
        gbxRange->setObjectName(QString::fromUtf8("gbxRange"));
        gbxRange->setGeometry(QRect(430, 0, 161, 31));
        gbxRange->setAlignment(Qt::AlignCenter);
        rdbUnique = new QRadioButton(gbxRange);
        rdbUnique->setObjectName(QString::fromUtf8("rdbUnique"));
        rdbUnique->setGeometry(QRect(4, 10, 51, 19));
        rdbSeries = new QRadioButton(gbxRange);
        rdbSeries->setObjectName(QString::fromUtf8("rdbSeries"));
        rdbSeries->setGeometry(QRect(60, 10, 51, 19));
        sbxRange = new QSpinBox(gbxRange);
        sbxRange->setObjectName(QString::fromUtf8("sbxRange"));
        sbxRange->setGeometry(QRect(109, 11, 51, 18));
        sbxRange->setLayoutDirection(Qt::LeftToRight);
        sbxRange->setFrame(true);
        sbxRange->setMinimum(10);
        sbxRange->setMaximum(10000);
        sbxRange->setValue(1000);
        groupBox = new QGroupBox(Frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 70, 591, 131));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 13, 591, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 30, 591, 91));
        groupBox_2 = new QGroupBox(Frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 200, 591, 201));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 13, 591, 181));
        groupBox_3 = new QGroupBox(Frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 400, 591, 221));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_3);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 32, 591, 181));
        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(0, 12, 131, 21));
        groupBox_4 = new QGroupBox(Frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 620, 591, 351));
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(0, 12, 131, 21));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 180, 591, 171));
        plainTextEdit_4 = new QPlainTextEdit(groupBox_5);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(0, 12, 591, 160));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 30, 591, 151));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_6);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(0, 12, 591, 140));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0, QApplication::UnicodeUTF8));
        gbxType->setTitle(QApplication::translate("Frame", "Event Type", 0, QApplication::UnicodeUTF8));
        rdbCountry->setText(QApplication::translate("Frame", "Country", 0, QApplication::UnicodeUTF8));
        rdbProvince->setText(QApplication::translate("Frame", "Province", 0, QApplication::UnicodeUTF8));
        gbxNumber->setTitle(QApplication::translate("Frame", "Event Number", 0, QApplication::UnicodeUTF8));
        cbxType->clear();
        cbxType->insertItems(0, QStringList()
         << QApplication::translate("Frame", "- Legacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "0 Government", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "1 Diplomacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "2 Economy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "3 Military", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "4 Religion", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "5 Colonial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "6 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "7 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "8 Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "9 Custom", 0, QApplication::UnicodeUTF8)
        );
        cbxRange->clear();
        cbxRange->insertItems(0, QStringList()
         << QApplication::translate("Frame", "- Legacy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "0 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "1 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "2 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "3 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "4 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "5 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "6 Series", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "7 Unique", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "8 Unique", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Frame", "9 Unique", 0, QApplication::UnicodeUTF8)
        );
        lineEdit->setText(QApplication::translate("Frame", "Internal Event Series Name - Will be reset on user edit only", 0, QApplication::UnicodeUTF8));
        lneInternaleventname->setText(QApplication::translate("Frame", "Internal Event Name - Will be reset every time a new event is started", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("Frame", "Series #", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("Frame", "Event #", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Frame", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Frame", "Syntax Check", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Frame", "New Event", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Frame", "Preview", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Frame", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Frame", "New File", 0, QApplication::UnicodeUTF8));
        gbxRange->setTitle(QApplication::translate("Frame", "Event Range", 0, QApplication::UnicodeUTF8));
        rdbUnique->setText(QApplication::translate("Frame", "Unique", 0, QApplication::UnicodeUTF8));
        rdbSeries->setText(QApplication::translate("Frame", "Series", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Frame", "Event Information", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Event Title</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Event Description</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Frame", "Trigger", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
        groupBox_3->setTitle(QApplication::translate("Frame", "Mean Time to Happen", 0, QApplication::UnicodeUTF8));
        plainTextEdit_2->setPlainText(QString());
        lineEdit_4->setText(QApplication::translate("Frame", "Initial Time", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Frame", "Option 1", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setText(QApplication::translate("Frame", "AI Chance", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Frame", "Effects", 0, QApplication::UnicodeUTF8));
        plainTextEdit_4->setPlainText(QString());
        groupBox_6->setTitle(QApplication::translate("Frame", "Modifiers", 0, QApplication::UnicodeUTF8));
        plainTextEdit_3->setPlainText(QString());
        Q_UNUSED(Frame);
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_H
