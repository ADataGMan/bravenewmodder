#ifndef BRAVENEWMODDER_H
#define BRAVENEWMODDER_H

#include <QtGui>

namespace Ui
{
    class BravenewmodderClass;
}

class Bravenewmodder : public QMainWindow
{
    Q_OBJECT

public:
    Bravenewmodder(QWidget *parent = 0);
    ~Bravenewmodder();
    void loadEvents();

private:
    Ui::BravenewmodderClass *ui;
    QString baseDir;
    QString eventLoc;

private slots:
    void on_actionLoad_Mod_triggered();
};

#endif // BRAVENEWMODDER_H
