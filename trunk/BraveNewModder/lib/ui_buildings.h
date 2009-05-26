/********************************************************************************
** Form generated from reading ui file 'buildings.ui'
**
** Created: Tue May 26 04:00:18 2009
**      by: Qt User Interface Compiler version 4.5.0
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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_buildings
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_4;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit_2;

    void setupUi(QFrame *buildings)
    {
        if (buildings->objectName().isEmpty())
            buildings->setObjectName(QString::fromUtf8("buildings"));
        buildings->resize(541, 343);
        buildings->setFrameShape(QFrame::StyledPanel);
        buildings->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(buildings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 541, 34));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 12, 271, 20));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 12, 271, 20));
        groupBox_2 = new QGroupBox(buildings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 110, 541, 34));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(310, 10, 41, 19));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(360, 10, 51, 19));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(480, 10, 58, 19));
        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(420, 10, 61, 19));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 12, 81, 20));
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 12, 81, 20));
        groupBox_3 = new QGroupBox(buildings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 144, 541, 31));
        checkBox_5 = new QCheckBox(groupBox_3);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 10, 81, 19));
        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 12, 431, 19));
        groupBox_4 = new QGroupBox(buildings);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 240, 541, 103));
        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 14, 541, 87));
        groupBox_5 = new QGroupBox(buildings);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 174, 541, 34));
        lineEdit_5 = new QLineEdit(groupBox_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(0, 12, 541, 20));
        groupBox_6 = new QGroupBox(buildings);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 208, 541, 34));
        lineEdit_6 = new QLineEdit(groupBox_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(0, 12, 541, 20));
        groupBox_7 = new QGroupBox(buildings);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 34, 541, 78));
        textEdit_2 = new QTextEdit(groupBox_7);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 12, 541, 64));

        retranslateUi(buildings);

        QMetaObject::connectSlotsByName(buildings);
    } // setupUi

    void retranslateUi(QFrame *buildings)
    {
        buildings->setWindowTitle(QApplication::translate("buildings", "Frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("buildings", "Building Name                                                                      Internal Building Name", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("buildings", "Time in Months                     Cost                                                                            Settings", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("buildings", "Port", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("buildings", "Capital", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("buildings", "Confirm", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("buildings", "On Map", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("buildings", "Manufactory Bonus      Trade Goods", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("buildings", "Manufactory", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("buildings", "Effects", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("buildings", "Prerequisite", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("buildings", "Not if X Exists", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("buildings", "Building Ledger Long Description", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(buildings);
    } // retranslateUi

};

namespace Ui {
    class buildings: public Ui_buildings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDINGS_H
