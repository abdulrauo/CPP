#include <iostream>
using namespace std;
class Timee
{
    int hour, minute;

public:
    void settime(int h, int m)
    {
        hour = h;
        minute = m;
    }
    void showTime()
    {
        cout << "Time is :" << hour << ":" << minute << endl;
    }
    Timee sum(Timee t1)
    {
        Timee t;
        int k;
        k = (minute + t1.minute) / 60;
        t.hour = hour + t1.hour + k;
        t.minute = (minute + t1.minute) % 60;
        return (t);
    }
};
int main()
{
    Timee t1, t2, t3;
    t1.settime(3, 23);
    t1.showTime();
    t2.settime(4, 55);
    t2.showTime();
    t3 = t1.sum(t2);
    t3.showTime();
    return 0;
}