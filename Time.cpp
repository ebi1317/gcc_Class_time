#include "Time.h"

// Standard constructor
Time::Time(int h, int m)
{
    if (h > 23 || h < 0)
    {
        Hour = 0;
    }
    else
    {
        Hour = h;
    }

    if(m > 59 || m < 0)
    {
        Minute = 0;
    }
    else
    {
        Minute = m;
    }
}


// Default constructor
Time::Time()
{Hour =0; Minute =0;}

//Get Hour
int Time::getHour() {return Hour;}

//Get Minute
int Time::getMinute() {return Minute;}

//Set HourHour
void Time::setHour(int h)
{
    if (h > 23 || h < 0)
    {
        Hour   = 0;
    }
    else
    {
        Hour   = h;
    }
}

//Set Minute
void Time::setMinute(int m)
{
    if (m > 59 || m < 0)
    {
         Minute = 0;
    }
    else
    {
        Minute = m;
    }

}

// Print time
void Time::printTime()
{
    cout << "The time is: " << Hour << " hours and " << Minute << " minutes " << endl;
}


