#ifndef EVENTMODIFIERS_H
#define EVENTMODIFIERS_H

#include <QtGui/QFrame>

namespace Ui {
    class Eventmodifiers;
}

class Eventmodifiers : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Eventmodifiers)
public:
    explicit Eventmodifiers(QWidget *parent = 0);
    virtual ~Eventmodifiers();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Eventmodifiers *m_ui;
};

#endif // EVENTMODIFIERS_H
