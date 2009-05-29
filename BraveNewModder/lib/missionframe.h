#ifndef MISSIONFRAME_H
#define MISSIONFRAME_H

#include <QtGui/QFrame>

namespace Ui {
    class MissionFrame;
}

class MissionFrame : public QFrame {
    Q_OBJECT
    Q_DISABLE_COPY(MissionFrame)
public:
    explicit MissionFrame(QWidget *parent = 0);
    virtual ~MissionFrame();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::MissionFrame *m_ui;
};

#endif // MISSION_H
