#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

#include <QtGui/QFrame>

namespace Ui {
    class editorsettings;
}

class editorsettings : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(editorsettings)
public:
    explicit editorsettings(QWidget *parent = 0);
    virtual ~editorsettings();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::editorsettings *m_ui;
};

#endif // EDITORSETTINGS_H
