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

void Bravenewmodder::on_actionLoad_Mod_triggered()
{
    QFileDialog loadMod(this);
    loadMod.setFileMode(QFileDialog::Directory);
    loadMod.setOption(QFileDialog::ShowDirsOnly, true);
    QString filename = loadMod.getExistingDirectory(this,"Load Mod");
    //just a sample
    ui->lineEdit_2->setText(filename);
}
