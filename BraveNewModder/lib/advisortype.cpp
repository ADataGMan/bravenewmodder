#include "advisortype.h"
#include "ui_advisortype.h"

Advisortype::Advisortype(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Advisortype)
{
    m_ui->setupUi(this);
}

Advisortype::~Advisortype()
{
    delete m_ui;
}

void Advisortype::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
