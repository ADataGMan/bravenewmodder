#ifndef EVENTMAIN_H
#define EVENTMAIN_H

#include <QtGui/QFrame>

namespace Ui {
    class Eventmain;
}

class Eventmain : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Eventmain)
public:
    explicit Eventmain(QWidget *parent = 0);
    virtual ~Eventmain();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Eventmain *m_ui;
};

#endif // EVENTMAIN_H
