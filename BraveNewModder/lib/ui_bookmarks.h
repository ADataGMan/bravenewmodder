/********************************************************************************
** Form generated from reading ui file 'bookmarks.ui'
**
** Created: Tue May 26 03:08:33 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BOOKMARKS_H
#define UI_BOOKMARKS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_bookmarks
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QDateEdit *dateEdit;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;

    void setupUi(QFrame *bookmarks)
    {
        if (bookmarks->objectName().isEmpty())
            bookmarks->setObjectName(QString::fromUtf8("bookmarks"));
        bookmarks->resize(541, 146);
        bookmarks->setFrameShape(QFrame::StyledPanel);
        bookmarks->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(bookmarks);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 541, 36));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 431, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(430, 12, 110, 22));
        dateEdit->setMinimumDate(QDate(1752, 9, 15));
        groupBox_2 = new QGroupBox(bookmarks);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 36, 541, 78));
        groupBox_2->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 12, 541, 64));
        groupBox_3 = new QGroupBox(bookmarks);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 110, 541, 34));
        groupBox_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 12, 541, 20));

        retranslateUi(bookmarks);

        QMetaObject::connectSlotsByName(bookmarks);
    } // setupUi

    void retranslateUi(QFrame *bookmarks)
    {
        bookmarks->setWindowTitle(QApplication::translate("bookmarks", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("bookmarks", "                                                                        Bookmark Title                                                Date", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("bookmarks", "Bookmark Description", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("bookmarks", "Countries", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(bookmarks);
    } // retranslateUi

};

namespace Ui {
    class bookmarks: public Ui_bookmarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKS_H
