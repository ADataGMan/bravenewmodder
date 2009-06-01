#ifndef EVENTOPTION_H
#define EVENTOPTION_H

#include <QtGui/QFrame>

namespace Ui {
    class Eventoption;
}

class Eventoption : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Eventoption)
public:
    explicit Eventoption(QWidget *parent = 0);
    virtual ~Eventoption();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Eventoption *m_ui;
};

#endif // EVENTOPTION_H
