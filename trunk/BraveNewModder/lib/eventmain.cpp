#include "eventmain.h"
#include "ui_eventmain.h"

Eventmain::Eventmain(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Eventmain)
{
    m_ui->setupUi(this);
}

Eventmain::~Eventmain()
{
    delete m_ui;
}

void Eventmain::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
