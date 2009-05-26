#include "buildings.h"
#include "ui_buildings.h"

buildings::buildings(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::buildings)
{
    m_ui->setupUi(this);
}

buildings::~buildings()
{
    delete m_ui;
}

void buildings::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
