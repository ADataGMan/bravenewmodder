#include "buildingsframe.h"
#include "../ui_buildingsframe.h"

BuildingsFrame::BuildingsFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::BuildingsFrame)
{
    m_ui->setupUi(this);
}

BuildingsFrame::~BuildingsFrame()
{
    delete m_ui;
}

void BuildingsFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
