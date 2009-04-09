#ifndef EVENTS_H
#define EVENTS_H

#include <QtCore>
#include <QtDebug>

/*
 * A simple structure for storing the information
 * for each event from the event files
 */
struct Event
{
    QString trigger;
    QString id;
    QString meanTimeToHappen;
    QString eventTitle;
    QString eventDesc;
    QString option1; //maybe replace with an array or vector....
    QString option2;
    QString option3;
    QString option4;
    QString option5;
    QString option6;
};

/*
 * This class handles all functions related to events
 * It takes each file as a seperate set of events, so
 * if you have multiple event files you need to create a
 * new instance of the event class for each file.
 */
class Events
{
public:
    Events();
    qint32 size;
    Events(QString file);
    QString filenameToString();
    // since we have multiple events stored in a single file
    // we must return a list of the information
    QVector<QString> idToString();
    QVector<QString> triggerToString();
    QVector<QString> timeToString();
    QVector<QString> titleToString() const;
    QVector<QString> descToString();
    QVector<QString> option1ToString();
    QVector<QString> option2ToString();
    QVector<QString> option3ToString();
    QVector<QString> option4ToString();
    QVector<QString> option5ToString();
    QVector<QString> option6ToString();

private:
    //vars
    QString filename;
    QVector<Event> vectorEvents;

    //functions
    void parseEvent();
    QString readFile();
    Event deepParse(QString internal);
};


#endif // EVENTS_H
