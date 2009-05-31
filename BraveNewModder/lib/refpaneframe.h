#ifndef REFPANEFRAME_H
#define REFPANEFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class RefPaneFrame;
}

class RefPaneFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(RefPaneFrame)
public:
    explicit RefPaneFrame(QWidget *parent = 0);
    virtual ~RefPaneFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::RefPaneFrame *m_ui;
};

#endif // REFPANEFRAME_H
