#include "eventoption.h"
#include "ui_eventoption.h"

Eventoption::Eventoption(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Eventoption)
{
    m_ui->setupUi(this);
}

Eventoption::~Eventoption()
{
    delete m_ui;
}

void Eventoption::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
