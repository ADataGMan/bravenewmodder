#include "decisionframe.h"
#include "../ui_decisionframe.h"

DecisionFrame::DecisionFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::DecisionFrame)
{
    m_ui->setupUi(this);
}

DecisionFrame::~DecisionFrame()
{
    delete m_ui;
}

void DecisionFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
