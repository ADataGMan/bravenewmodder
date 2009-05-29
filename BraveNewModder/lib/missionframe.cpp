#include "missionframe.h"
#include "../ui_missionframe.h"

MissionFrame::MissionFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::MissionFrame)
{
    m_ui->setupUi(this);
}

MissionFrame::~MissionFrame()
{
    delete m_ui;
}

void MissionFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
