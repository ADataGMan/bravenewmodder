#include "fileoptions.h"
#include "../ui_fileoptions.h"

FileOptions::FileOptions(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::FileOptions)
{
    m_ui->setupUi(this);
}

FileOptions::~FileOptions()
{
    delete m_ui;
}

void FileOptions::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
