#include "events.h"

events::events(QString file)
{
    //store filename
    this->filename = file;
    //load event(s) from file into events vector
}

/*
 * Handle a single event file
 */
void events::parseEvent()
{
    QVector<QString> eventData = readFile();
    if(eventData.empty())
    {
        //error
        // TODO: make error function
        exit(-1);
    }

    // begin parsing
    for(qint32 i = 0; i < eventData.size();++i)
    {
        if(eventData[i].contains("^\s*country_event"))//country event found
        {
            //country event
        }
    }
}

/*
 * Read in text file and return the whole
 * file in a QString
 */
QVector<QString> events::readFile()
{
    QVector<QString> fileData;
    QString data = "";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return fileData;

    QTextStream in(&file);
    while(!file.atEnd())
    {
        fileData.push_back(in.readLine());
        //data += in.readLine();
    }
    file.close();
    return fileData;
}
