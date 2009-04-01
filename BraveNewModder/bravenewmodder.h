#ifndef BRAVENEWMODDER_H
#define BRAVENEWMODDER_H

#include <QtGui/QMainWindow>

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

private:
    Ui::BravenewmodderClass *ui;
};

#endif // BRAVENEWMODDER_H
