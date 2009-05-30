#ifndef UNIT_H
#define UNIT_H

#include <QtGui/QFrame>

namespace Ui {
    class unit;
}

class unit : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(unit)
public:
    explicit unit(QWidget *parent = 0);
    virtual ~unit();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::unit *m_ui;
};

#endif // UNIT_H
