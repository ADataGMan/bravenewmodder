#include "editorsettingsframe.h"
#include "../ui_editorsettingsframe.h"

EditorSettingsFrame::EditorSettingsFrame(QWidget *parent) :
    QFrame(parent),
    m_ui(new Ui::EditorSettingsFrame)
{
    m_ui->setupUi(this);
}

EditorSettingsFrame::~EditorSettingsFrame()
{
    delete m_ui;
}

void EditorSettingsFrame::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
