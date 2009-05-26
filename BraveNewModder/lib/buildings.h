#ifndef BUILDINGS_H
#define BUILDINGS_H

#include <QtGui/QFrame>

namespace Ui {
    class buildings;
}

class buildings : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(buildings)
public:
    explicit buildings(QWidget *parent = 0);
    virtual ~buildings();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::buildings *m_ui;
};

#endif // BUILDINGS_H
