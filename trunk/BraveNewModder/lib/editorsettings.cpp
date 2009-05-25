#include "editorsettings.h"
#include "ui_editorsettings.h"

editorsettings::editorsettings(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::editorsettings)
{
    m_ui->setupUi(this);
}

editorsettings::~editorsettings()
{
    delete m_ui;
}

void editorsettings::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
