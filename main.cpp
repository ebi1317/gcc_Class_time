#include <iostream>
#include <math.h>
using namespace std;

class Time
{
private:
    int minute;
    int hour;
public:
    Time();
    Time(int m, int h)
    {
        if(m >59 || m < 0)
            minute = 0;
        else
            minute = m;
        if(h > 59 || h < 0)
            hour = 0;
        else
            hour = h;
    }
    int getMinute() const {return minute;}
    int getMonth() const {return hour;}
    
    void setMinute() {minute = m;}
    void setHour() {hour = h;}
    
    void printime(){cout << "hour is : " << hour <<"  " << "Minute is :" << minute  << endl;}
};


int main()
{
    Time d(-20,100);

    d.printime();

}
