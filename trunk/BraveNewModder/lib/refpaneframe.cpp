#include "refpaneframe.h"
#include "ui_refpaneframe.h"

RefPaneFrame::RefPaneFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::RefPaneFrame)
{
    m_ui->setupUi(this);
}

RefPaneFrame::~RefPaneFrame()
{
    delete m_ui;
}

void RefPaneFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
