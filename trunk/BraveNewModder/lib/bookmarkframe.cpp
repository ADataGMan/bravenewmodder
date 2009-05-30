#include "bookmarkframe.h"
#include "../ui_bookmarkframe.h"

BookmarkFrame::BookmarkFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::BookmarkFrame)
{
    m_ui->setupUi(this);
}

BookmarkFrame::~BookmarkFrame()
{
    delete m_ui;
}

void BookmarkFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
