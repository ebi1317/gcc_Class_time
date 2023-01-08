#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;
class Time
{
    public:

        Time(int h, int m);
        Time();

        int getHour();
        int getMinute();

        void setHour(int h);
        void setMinute(int m);

        void printTime();


    private:
       int Hour;
       int Minute;
};

#endif // TIME_H
