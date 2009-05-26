#include "mission.h"
#include "ui_mission.h"

mission::mission(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::mission)
{
    m_ui->setupUi(this);
}

mission::~mission()
{
    delete m_ui;
}

void mission::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
