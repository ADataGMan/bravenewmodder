#ifndef NEWMODFRAME_H
#define NEWMODFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class NewModFrame;
}

class NewModFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(NewModFrame)
public:
    explicit NewModFrame(QWidget *parent = 0);
    virtual ~NewModFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::NewModFrame *m_ui;
};

#endif // NEWMOD_H
