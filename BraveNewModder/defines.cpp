#include "defines.h"
#include "ui_defines.h"

Defines::Defines(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Defines)
{
    m_ui->setupUi(this);
}

Defines::~Defines()
{
    delete m_ui;
}

void Defines::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
