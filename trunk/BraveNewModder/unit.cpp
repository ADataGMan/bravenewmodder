#include "unit.h"
#include "ui_unit.h"

unit::unit(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::unit)
{
    m_ui->setupUi(this);
}

unit::~unit()
{
    delete m_ui;
}

void unit::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
