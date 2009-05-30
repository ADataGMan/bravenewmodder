#ifndef DEFINES_H
#define DEFINES_H

#include <QtGui/QFrame>

namespace Ui {
    class Defines;
}

class Defines : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Defines)
public:
    explicit Defines(QWidget *parent = 0);
    virtual ~Defines();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Defines *m_ui;
};

#endif // DEFINES_H
