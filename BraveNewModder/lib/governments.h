#ifndef GOVERNMENTS_H
#define GOVERNMENTS_H

#include <QtGui/QFrame>

namespace Ui {
    class Governments;
}

class Governments : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Governments)
public:
    explicit Governments(QWidget *parent = 0);
    virtual ~Governments();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Governments *m_ui;
};

#endif // GOVERNMENTS_H
