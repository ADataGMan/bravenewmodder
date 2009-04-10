#include <QtGui/QApplication>
#include "./lib/bravenewmodder.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bravenewmodder w;
    w.show();
    return a.exec();
}
