#ifndef ADVISORTYPE_H
#define ADVISORTYPE_H

#include <QtGui/QFrame>

namespace Ui {
    class Advisortype;
}

class Advisortype : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Advisortype)
public:
    explicit Advisortype(QWidget *parent = 0);
    virtual ~Advisortype();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Advisortype *m_ui;
};

#endif // ADVISORTYPE_H
