#include "eventmodifiers.h"
#include "ui_eventmodifiers.h"

Eventmodifiers::Eventmodifiers(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Eventmodifiers)
{
    m_ui->setupUi(this);
}

Eventmodifiers::~Eventmodifiers()
{
    delete m_ui;
}

void Eventmodifiers::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
