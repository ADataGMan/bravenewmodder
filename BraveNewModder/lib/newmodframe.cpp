#include "newmodframe.h"
#include "../ui_newmodframe.h"

NewModFrame::NewModFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::NewModFrame)
{
    m_ui->setupUi(this);
}

NewModFrame::~NewModFrame()
{
    delete m_ui;
}

void NewModFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
