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

void Bravenewmodder::on_actionImport_Mod_triggered()
{
    //Import Mod imports items into the database
    QString fileName = QFileDialog::getOpenFileName(this, tr("Import Mod"), "/", tr("Mod Files (*.mod)"));
    int totalSize = 0;
    int currentLoc = 0;
    QFile modFile(fileName);
    QStringList allFiles;
    QString modName;
    QString modPath = fileName.section('/',0,fileName.count('/')-1)+"/";
    if(!modFile.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in(&modFile);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        if(line.startsWith("name",Qt::CaseInsensitive))
        {
            //we found the name of the mod
            modName = line.section('"',1,1);
        } else
        {
            //normal line, we will either have 'extend' or 'replace'
            //either way we need to load the folders
            QString dirString = fileName.left(fileName.length()-4) + "/" + line.section('"',1,1);
            QDir dirDir(dirString);
            QStringList dirContent = dirDir.entryList();
            dirContent.pop_front();
            dirContent.pop_front();
            allFiles.append(dirContent);
            //read in all files
            totalSize += dirContent.length();
            QProgressDialog progress("Loading " + modName,"Cancel Import",0,totalSize,this);
            progress.setMinimumDuration(0);
           // progress.show();
            progress.setWindowModality(Qt::WindowModal);
            for(currentLoc = 0; currentLoc < totalSize; currentLoc++)
            {
                progress.setLabelText("Loading " + modName + "/" + line.section('"',1,1));
                progress.setValue(currentLoc);
            }
        }
    }
    QMessageBox msgBox;
    QString details;
    msgBox.setText("All files imported successfully.\t\t\t");
    for(int i = 0; i < allFiles.length(); i++)
    {
        details = details + allFiles.at(i) + "\n";
    }
    msgBox.setDetailedText("The following files have been added as part of " + modName + ":\n" + details);
    msgBox.exec();
}

void Bravenewmodder::on_actionExit_triggered()
{
    //Exit the app
    exit(0);
}
