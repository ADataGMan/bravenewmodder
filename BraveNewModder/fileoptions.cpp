#include "fileoptions.h"
#include "ui_fileoptions.h"

Fileoptions::Fileoptions(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::Fileoptions)
{
    m_ui->setupUi(this);
}

Fileoptions::~Fileoptions()
{
    delete m_ui;
}

void Fileoptions::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
