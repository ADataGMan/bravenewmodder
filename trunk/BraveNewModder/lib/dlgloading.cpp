#include "dlgloading.h"
#include "../ui_dlgloading.h"

DlgLoading::DlgLoading(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::DlgLoading)
{
    m_ui->setupUi(this);
}

DlgLoading::~DlgLoading()
{
    delete m_ui;
}

void DlgLoading::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DlgLoading::setFileName(QString fileName)
{
    _fileName = fileName;
    m_ui->lblLoading->setText(_fileName);
}
