/********************************************************************************
** Form generated from reading ui file 'bookmarks.ui'
**
** Created: Fri Feb 27 01:17:53 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BOOKMARKS_H
#define UI_BOOKMARKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupBox
{
public:
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QComboBox *comboBox_11;
    QComboBox *comboBox_12;

    void setupUi(QGroupBox *GroupBox)
    {
    if (GroupBox->objectName().isEmpty())
        GroupBox->setObjectName(QString::fromUtf8("GroupBox"));
    GroupBox->resize(640, 480);
    treeWidget = new QTreeWidget(GroupBox);
    new QTreeWidgetItem(treeWidget);

    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setGeometry(QRect(0, 20, 111, 471));
    lineEdit = new QLineEdit(GroupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(120, 20, 511, 21));
    plainTextEdit = new QPlainTextEdit(GroupBox);
    plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
    plainTextEdit->setGeometry(QRect(120, 50, 511, 121));
    spinBox = new QSpinBox(GroupBox);
    spinBox->setObjectName(QString::fromUtf8("spinBox"));
    spinBox->setGeometry(QRect(120, 180, 71, 21));
    spinBox_2 = new QSpinBox(GroupBox);
    spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
    spinBox_2->setGeometry(QRect(200, 180, 81, 21));
    spinBox_3 = new QSpinBox(GroupBox);
    spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
    spinBox_3->setGeometry(QRect(290, 180, 51, 21));
    label = new QLabel(GroupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(120, 210, 211, 21));
    comboBox = new QComboBox(GroupBox);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(120, 240, 121, 21));
    comboBox_2 = new QComboBox(GroupBox);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setGeometry(QRect(120, 270, 121, 21));
    comboBox_3 = new QComboBox(GroupBox);
    comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
    comboBox_3->setGeometry(QRect(120, 300, 121, 21));
    comboBox_4 = new QComboBox(GroupBox);
    comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
    comboBox_4->setGeometry(QRect(120, 330, 121, 21));
    comboBox_5 = new QComboBox(GroupBox);
    comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
    comboBox_5->setGeometry(QRect(120, 390, 121, 21));
    comboBox_6 = new QComboBox(GroupBox);
    comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
    comboBox_6->setGeometry(QRect(120, 360, 121, 21));
    comboBox_7 = new QComboBox(GroupBox);
    comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
    comboBox_7->setGeometry(QRect(290, 330, 121, 21));
    comboBox_8 = new QComboBox(GroupBox);
    comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
    comboBox_8->setGeometry(QRect(290, 390, 121, 21));
    comboBox_9 = new QComboBox(GroupBox);
    comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
    comboBox_9->setGeometry(QRect(290, 300, 121, 21));
    comboBox_10 = new QComboBox(GroupBox);
    comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));
    comboBox_10->setGeometry(QRect(290, 240, 121, 21));
    comboBox_11 = new QComboBox(GroupBox);
    comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));
    comboBox_11->setGeometry(QRect(290, 360, 121, 21));
    comboBox_12 = new QComboBox(GroupBox);
    comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));
    comboBox_12->setGeometry(QRect(290, 270, 121, 21));

    retranslateUi(GroupBox);

    QMetaObject::connectSlotsByName(GroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox)
    {
    GroupBox->setWindowTitle(QApplication::translate("GroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
    GroupBox->setTitle(QApplication::translate("GroupBox", "Bookmarks", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("GroupBox", "Bookmarks", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    treeWidget->topLevelItem(0)->setText(0, QApplication::translate("GroupBox", "Grand Campaign", 0, QApplication::UnicodeUTF8));

    treeWidget->setSortingEnabled(__sortingEnabled);
    lineEdit->setText(QApplication::translate("GroupBox", "Title", 0, QApplication::UnicodeUTF8));
    plainTextEdit->setPlainText(QApplication::translate("GroupBox", "Description", 0, QApplication::UnicodeUTF8));
    spinBox->setSpecialValueText(QApplication::translate("GroupBox", "Years", 0, QApplication::UnicodeUTF8));
    spinBox_2->setSpecialValueText(QApplication::translate("GroupBox", "Months", 0, QApplication::UnicodeUTF8));
    spinBox_3->setSpecialValueText(QApplication::translate("GroupBox", "Days", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("GroupBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Recommended Countries</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_2->clear();
    comboBox_2->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_3->clear();
    comboBox_3->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_4->clear();
    comboBox_4->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_5->clear();
    comboBox_5->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_6->clear();
    comboBox_6->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_7->clear();
    comboBox_7->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_8->clear();
    comboBox_8->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_9->clear();
    comboBox_9->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_10->clear();
    comboBox_10->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_11->clear();
    comboBox_11->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    comboBox_12->clear();
    comboBox_12->insertItems(0, QStringList()
     << QApplication::translate("GroupBox", "Country Name", 0, QApplication::UnicodeUTF8)
    );
    Q_UNUSED(GroupBox);
    } // retranslateUi

};

namespace Ui {
    class GroupBox: public Ui_GroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKS_H
