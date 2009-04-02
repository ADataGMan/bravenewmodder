#include "events.h"

events::events(QString file)
{
    //store filename
    this->filename = file;
    //load event(s) from file into events vector
    parseEvent();
}

/*
 * Handle a single event file
 */
void events::parseEvent()
{
   QString eventData = readFile();
    if(eventData.isEmpty())
    {
        //error
        // TODO: make error function
        exit(-1);
    }

    // begin parsing
    QString segment = "";
    QRegExp country("\s*country_event\s*=\s*{");
    QRegExp province("\s*province_event");
    qint32 index = 0;
    qint32 indexc;
    qint32 indexp;
    while(index <= eventData.size())
    {
        indexc = eventData.indexOf(country,index);
        qDebug() << "Country Index: " << indexc <<endl;
        indexp = eventData.indexOf(province,index);
        qDebug() << "Province Index: " << indexp <<endl;
        if(indexc < indexp && indexc > -1)
        {
            //we found a country
            qint32 curly = 1;
            qint32 i;
            for(i = 0; i <= eventData.size() && curly != 0; ++i)
            {
                QChar item = eventData.at(i);
                if(item == '{')
                {
                   ++curly;
                } else if(item == '}')
                {
                   --curly;
                }
                segment.append(item);
                qDebug() << "Segment: \n" << segment <<endl;
            }
            index += i;
        } else if( indexc > indexp && indexp > -1)
        {
            //we found a province
            qint32 curly = 1;
            qint32 i;
            for(i = 0; i <= eventData.size() && curly != 0; ++i)
            {
                QChar item = eventData.at(i);
                if(item == '{')
                {
                   ++curly;
                } else if(item == '}')
                {
                   --curly;
                }
                segment.append(item);
            }
            index += i;
        } else if( indexc == -1 && indexp == -1)
        {
            //no more events
            index = eventData.size()+1;
        } else
        {
            //one of the indices is -1,
        }
    }
}

/*
 * Read in text file and return the whole
 * file in a QString
 */
QString events::readFile()
{
    QString data = "";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";

    QTextStream in(&file);
    while(!file.atEnd())
    {
        data += in.readLine();
    }
    file.close();
    return data;
}
