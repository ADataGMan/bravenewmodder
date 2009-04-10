#include "events.h"

Events::Events()
{
    size = 0;
}
Events::Events(QString file)
{
    size = 0;
    //store filename
    this->filename = file;
    //load event(s) from file into events vector
    parseEvent();
}

/*
 * Handle a single event file
 */
void Events::parseEvent()
{
   QString eventData = readFile();
    if(eventData.isEmpty())
    {
        Event temp;
        temp.eventDesc="No Events";
        temp.eventTitle="No Events";
        temp.id="No Events";
        temp.meanTimeToHappen="No Events";
        temp.option1="No Events";
        temp.option2="No Events";
        temp.option3="No Events";
        temp.option4="No Events";
        temp.option5="No Events";
        temp.option6="No Events";
        vectorEvents.append(temp);
        size = 1;
        return;
    }

    // begin parsing

    QString segment = "";
    QRegExp country("\\s*country_event\\s*=\\s*\\{");
    QRegExp province("\\s*province_event\\s*=\\s*\\{");
    country.setCaseSensitivity(Qt::CaseInsensitive);
    province.setCaseSensitivity(Qt::CaseInsensitive);
    qint32 index = 0;
    qint32 indexc;
    qint32 indexp;
    while(index < eventData.length())
    {
        indexc = eventData.indexOf(country,index);
        indexp = eventData.indexOf(province,index);
        if(indexc < indexp && indexc > -1)
        {
            //we found a country
            qint32 curly = 1;
            qint32 i;
            for(i = indexc+country.matchedLength(); i < eventData.length() && curly > 0; ++i)
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
            this->vectorEvents.push_back(deepParse(segment));
            segment.clear();
            index += i;
        } else if( indexc > indexp && indexp > -1)
        {
            //we found a province
            qint32 curly = 1;
            qint32 i;
            for(i = indexp+province.matchedLength(); i < eventData.length() && curly > 0; ++i)
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
            this->vectorEvents.push_back(deepParse(segment));
            segment.clear();
            index += i;
        } else if( indexc == -1 && indexp == -1)
        {
            //no more events
            index = eventData.length()+1;
        } else
        {
            //one of the indices is -1,
             if(indexc == -1)
            {
                //only province events left
                qint32 curly = 1;
                qint32 i;
                for(i = indexp+province.matchedLength(); i < eventData.length() && curly > 0; ++i)
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
                this->vectorEvents.push_back(deepParse(segment));
                segment.clear();
                index += i;
            } else
            {
                //only country events left
                qint32 curly = 1;
                qint32 i;
                for(i = indexc+country.matchedLength(); i < eventData.length() && curly > 0; ++i)
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
                this->vectorEvents.push_back(deepParse(segment));
                segment.clear();
                index += i;
                }
        }
    }
}

/*
 * Read in text file and return the whole
 * file in a QString
 */
QString Events::readFile()
{
    QString data = "";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "";

    QTextStream in(&file);
    while(!in.atEnd())
    {
        data = data + in.readLine() + "\n";
    }
    return data;
}

/*
 * Returns the filename as a QString
 */
 QString Events::filenameToString()
 {
    QRegExp final(".*/(\\w+.txt)$");
    filename.indexOf(final,0);
    return final.cap(1);
 }

 /*
  * Retrieve the data for countries and provinces
  */
 Event Events::deepParse(QString internal)
 {
    Event current;
    size++;
    current.eventDesc="";
    current.eventTitle="";
    current.id="";
    current.meanTimeToHappen="";
    current.option1="";
    current.option2="";
    current.option3="";
    current.option4="";
    current.option5="";
    current.option6="";
     //create regular expressions for each item
    QRegExp id("\\s*id\\s*=\\s*(\\d{4,8})");
    QRegExp trigger("\\s*trigger\\s*=\\s*\\{");
    QRegExp meanTimeToHappen("\\s*mean_time_to_happen\\s*=\\s*\\{");
    QRegExp title("\\s*title\\s*=\\s*\"(.+)\"");
    QRegExp desc("\\s*desc\\s*=\\s*\"(.+)\"");
    QRegExp option("\\s*option\\s*=\\s*\\{");

    //set case insensitivity
    id.setCaseSensitivity(Qt::CaseInsensitive);
    trigger.setCaseSensitivity(Qt::CaseInsensitive);
    meanTimeToHappen.setCaseSensitivity(Qt::CaseInsensitive);
    title.setCaseSensitivity(Qt::CaseInsensitive);
    desc.setCaseSensitivity(Qt::CaseInsensitive);
    option.setCaseSensitivity(Qt::CaseInsensitive);

    //set minimal for title and desc
    title.setMinimal(true);
    desc.setMinimal(true);

    //start grabbing info
    QChar item;
    QString data;
    qint32 index = 0;
    qint32 curly = 1;
    // get easy items

    //ID
    index = internal.indexOf(id,0);
    current.id = id.cap(1);

    //TITLE
    index = internal.indexOf(title,0);
    current.eventTitle = title.cap(1);

    //DESCRIPTION
    index = internal.indexOf(desc,0);
    current.eventDesc = desc.cap(1);

    //more complicated items

    //TRIGGER
    index = internal.indexOf(trigger,0);
    qint32 i = 0;
    for(i = index+trigger.matchedLength(); i < internal.length() && index != -1 && curly > 0;++i)
    {
        item = internal.at(i);
        if(item == '{')
        {
            ++curly;
        } else if(item == '}')
        {
            --curly;
        }
        data.append(item);
    }
    current.trigger = data;
    //clear variables
    data.clear();
    curly = 1;

    //MEAN TIME TO HAPPEN
    index = internal.indexOf(meanTimeToHappen,0);
    for(qint32 i = index+meanTimeToHappen.matchedLength(); i < internal.length() && curly > 0;++i)
    {
        item = internal.at(i);
        if(item == '{')
        {
            ++curly;
        } else if(item == '}')
        {
            --curly;
        }
        data.append(item);
    }
    current.meanTimeToHappen = data;
    //clear variables
    data.clear();
    curly = 1;

    //OPTIONS
    //since up to 6 options can exist we will need to loop these
    index = 0;
    while(index != -1)
    {
        index = internal.indexOf(option,0);
        for(qint32 i = index+option.matchedLength(); i < internal.length() && curly > 0 && index != -1;++i)
        {
            item = internal.at(i);
            if(item == '{')
            {
                ++curly;
            } else if(item == '}')
            {
                --curly;
            }
            data.append(item);
        }
        if(current.option1.isEmpty())
        {
            current.option1 = data;
        } else if(current.option2.isEmpty())
        {
            current.option2 = data;
        } else if(current.option3.isEmpty())
        {
            current.option3 = data;
        } else if(current.option4.isEmpty())
        {
            current.option4 = data;
        } else if(current.option5.isEmpty())
        {
            current.option5 = data;
        } else if(current.option6.isEmpty())
        {
            current.option6 = data;
        } else
        {
            index = -1; // should NEVER reach this state
        }
        //clear variables
        data.clear();
        curly = 1;
    }

    return current;
 }

/*
 * Returns a vector of the id strings
 */
QVector<QString> Events::idToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).id);
    }
    return strings;
}

/*
 * Returns a vector of the trigger strings
 */
QVector<QString> Events::triggerToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).trigger);
    }
    return strings;
}

/*
 * Returns a vector of the mean_time_to_happen strings
 */
QVector<QString> Events::timeToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).meanTimeToHappen);
    }
    return strings;
}

/*
 * Returns a vector of the title strings
 */
QVector<QString> Events::titleToString() const
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).eventTitle);
    }
    return strings;
}

/*
 * Returns a vector of the description strings
 */
QVector<QString> Events::descToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).eventDesc);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option1ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option1);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option2ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option2);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option3ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option3);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option4ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option4);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option5ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option5);
    }
    return strings;
}

/*
 * Returns a vector of the option1 strings
 */
QVector<QString> Events::option6ToString()
{
    QVector<QString> strings;
    for(qint32 i = 0; i < this->vectorEvents.size();++i)
    {
        strings.append(vectorEvents.at(i).option6);
    }
    return strings;
}
