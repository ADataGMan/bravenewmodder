#include "governments.h"
#include "ui_governments.h"

Governments::Governments(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Governments)
{
    m_ui->setupUi(this);
}

Governments::~Governments()
{
    delete m_ui;
}

void Governments::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
