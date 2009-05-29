#ifndef BUILDINGSFRAME_H
#define BUILDINGSFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class BuildingsFrame;
}

class BuildingsFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(BuildingsFrame)
public:
    explicit BuildingsFrame(QWidget *parent = 0);
    virtual ~BuildingsFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::BuildingsFrame *m_ui;
};

#endif // BUILDINGSFRAME_H
