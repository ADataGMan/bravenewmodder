#ifndef EVENTS_H
#define EVENTS_H

#include <QtCore>
#include <QtGlobal>
#include <QtDebug>

/*
 * A simple structure for storing the information
 * for each event from the event files
 */
struct event
{
    QString trigger;
    QString id;
    QString meanTimeToHappen;
    QString eventTitle;
    QString eventDesc;
    QString option1;
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
class events
{
public:
    events(QString file);

private:
    //vars
    QString filename;
    QVector<event> vectorEvents;

    //functions
    void parseEvent();
    QString readFile();
};


#endif // EVENTS_H
