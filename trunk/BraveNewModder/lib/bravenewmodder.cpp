#include "bravenewmodder.h"
#include "../ui_bravenewmodder.h"

Bravenewmodder::Bravenewmodder(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::BravenewmodderClass)
{
    ui->setupUi(this);

    //--------Load ui files---------//
    Eventmain* eventScrollArea = new Eventmain();   //create new Eventmain object
    eventScrollArea->show();                        //'show' it
    ui->saEvent->setWidget(eventScrollArea);        //set as scroll area widget's content

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
    eventLoc = baseDir + "/events";
    //load data into all tabs
    loadEvents();
}

void Bravenewmodder::loadEvents()
{
    /*
    QVector<Events> eventVector;
    QDir eventDir(this->eventLoc);
    eventDir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    QStringList eventFiles = eventDir.entryList();
    QRegExp text(".*txt$");
    for( qint32 i = 0; i < 3 &&  i<eventFiles.length(); ++i)
    {
        QString str = eventFiles[i];
        if(text.indexIn(str)!=-1)
        {
            Events tempEvent(eventLoc+"/"+str);
            if(tempEvent.size > 0);
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
    */
    QDir eventDir(this->eventLoc);
    eventDir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    QStringList eventFiles = eventDir.entryList();
    QRegExp text(".*txt$");
    QStringListModel * model = new QStringListModel(eventFiles,this);
    ui->trvEvents->setModel(model);
}

void Bravenewmodder::on_tbxMain_currentChanged(int index)
{
    //load appropriate data
}
