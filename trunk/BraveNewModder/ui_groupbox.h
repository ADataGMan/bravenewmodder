/********************************************************************************
** Form generated from reading ui file 'groupbox.ui'
**
** Created: Thu Feb 26 18:21:06 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_GROUPBOX_H
#define UI_GROUPBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_GroupBox
{
public:

    void setupUi(QGroupBox *GroupBox)
    {
    if (GroupBox->objectName().isEmpty())
        GroupBox->setObjectName(QString::fromUtf8("GroupBox"));
    GroupBox->resize(400, 300);

    retranslateUi(GroupBox);

    QMetaObject::connectSlotsByName(GroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *GroupBox)
    {
    GroupBox->setTitle(QApplication::translate("GroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
    GroupBox->setWindowTitle(QApplication::translate("GroupBox", "GroupBox", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GroupBox);
    } // retranslateUi

};

namespace Ui {
    class GroupBox: public Ui_GroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBOX_H
