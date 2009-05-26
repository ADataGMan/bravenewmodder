#ifndef MISSION_H
#define MISSION_H

#include <QtGui/QFrame>

namespace Ui {
    class mission;
}

class mission : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(mission)
public:
    explicit mission(QWidget *parent = 0);
    virtual ~mission();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::mission *m_ui;
};

#endif // MISSION_H
