#ifndef EDITORSETTINGSFRAME_H
#define EDITORSETTINGSFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class EditorSettingsFrame;
}

class EditorSettingsFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(EditorSettingsFrame)
public:
    explicit EditorSettingsFrame(QWidget *parent = 0);
    virtual ~EditorSettingsFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::EditorSettingsFrame *m_ui;
};

#endif // EDITORSETTINGS_H
