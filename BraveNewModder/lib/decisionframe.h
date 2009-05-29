#ifndef DECISIONFRAME_H
#define DECISIONFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class DecisionFrame;
}

class DecisionFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(DecisionFrame)
public:
    explicit DecisionFrame(QWidget *parent = 0);
    virtual ~DecisionFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DecisionFrame *m_ui;
};

#endif // DECISIONFRAME_H
