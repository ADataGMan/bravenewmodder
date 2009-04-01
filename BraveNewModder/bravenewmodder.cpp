#include "bravenewmodder.h"
#include "ui_bravenewmodder.h"

Bravenewmodder::Bravenewmodder(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::BravenewmodderClass)
{
    ui->setupUi(this);
}

Bravenewmodder::~Bravenewmodder()
{
    delete ui;
}
