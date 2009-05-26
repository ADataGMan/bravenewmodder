#include "bookmarks.h"
#include "ui_bookmarks.h"

bookmarks::bookmarks(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::bookmarks)
{
    m_ui->setupUi(this);
}

bookmarks::~bookmarks()
{
    delete m_ui;
}

void bookmarks::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
