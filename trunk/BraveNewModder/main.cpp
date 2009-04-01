#include <QtGui/QApplication>
#include "bravenewmodder.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QRegExp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bravenewmodder w;
    w.show();
    return a.exec();
}

/*
 * Read in text file and return the whole
 * file in a QString
 */
QString readFile(QString filename)
{
    QString data = "";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while(!file.atEnd())
    {
        data += in.readLine();
    }
    file.close();

    return data;
}

/*
 * Retrieve a single line from a multi-line string
 */
QString getLine(QString string, QInt lineNum)
{
    for(QInt i = 0; i < lineNum; ++i)
    {
        if(string.indexOf('\n',0,) != NULL)
        {
            string = string.remove(0,string.indexOf('\n'));
        }
    }
}

/*
 * Handle a single event file
 */
void parseEvent(QString filename)
{
    QString eventData = readFile(filename);
    if(eventData.isEmpty())
    {
        //error
        // TODO: make error function
        exit(-1);
    }

    QString trigger;
    QString meanTimeToHappen;
    QString eventTitle;
    QString eventDesc;
    QString option1;
    QString option2;
    QString option3;
    QString option4;
    QString option5;
    QString option6;
    QString line;
    QRegExp rx;

    line = getLine(eventData,num);
    // begin parsing
    while(1 )//not the end of the string
    {
        if(1 )//country event found
        {
            //country event
        }
    }
}
