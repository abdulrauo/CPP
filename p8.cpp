#include <iostream>
using namespace std;
class Distance
{
    float feet, inches;

public:
    void set(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void disp()
    {
        cout << "Distance: " << feet << "feet\t" << inches << "inches" << endl;
    }
    static Distance add(Distance d1, Distance d2)
    {
        Distance d;
        d.feet = d1.feet + d2.feet;
        d.inches = d1.inches + d2.inches;
        return (d);
    }
};
int main()
{
    Distance d1, d2, d3;
    d1.set(2, 3);
    d1.disp();
    d2.set(4, 5);
    d2.disp();
    d3 = Distance::add(d1, d2);
    d3.disp();
    return 0;
}