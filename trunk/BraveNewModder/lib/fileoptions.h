#ifndef FILEOPTIONS_H
#define FILEOPTIONS_H

#include <QtGui/QFrame>

namespace Ui {
    class Fileoptions;
}

class Fileoptions : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(Fileoptions)
public:
    explicit Fileoptions(QWidget *parent = 0);
    virtual ~Fileoptions();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Fileoptions *m_ui;
};

#endif // FILEOPTIONS_H
