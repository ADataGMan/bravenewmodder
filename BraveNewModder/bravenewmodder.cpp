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
    baseDir = loadMod.getExistingDirectory(this,"Load Mod");
    eventLoc = baseDir + "/Events";
    //load data into all tabs
    loadEvents();
}

void Bravenewmodder::loadEvents()
{
    QVector<Events> eventVector;
    QDir eventDir(this->eventLoc);
    eventDir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    QStringList eventFiles = eventDir.entryList();
    QRegExp text(".*txt$");
    for( qint32 i = 0; i < 3; ++i)
    {
        QString str = eventFiles[i];
        if(text.indexIn(str)!=-1)
        {
            Events tempEvent(eventLoc+"/"+str);
            if(tempEvent.idToString().at(0) != "No Events");
                eventVector.append(tempEvent);
        }
    }
    EventModel *model = new EventModel(eventVector);

    ui->trvEvents->setModel(model);
    ui->trvEvents->setColumnHidden(1,1);
    ui->trvEvents->setColumnHidden(2,1);
    ui->trvEvents->setColumnHidden(3,1);
    ui->trvEvents->setColumnHidden(4,1);
    ui->trvEvents->setColumnHidden(5,1);
    ui->trvEvents->setColumnHidden(6,1);
    ui->trvEvents->setColumnHidden(7,1);
    ui->trvEvents->setColumnHidden(8,1);
    ui->trvEvents->setColumnHidden(9,1);
    ui->trvEvents->setColumnHidden(10,1);
}
