#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;
    float perimeterr, areaa;

public:
    void setLength(float l)
    {
        length = l;
    }
    void setWidth(float w)
    {
        width = w;
    }
    void perimeter()
    {
        perimeterr = 2 * (length + width);
    }
    void area()
    {
        areaa = length * width;
    }
    void show()
    {
        cout << "Perimeter: " << perimeterr << endl;
        cout << "Area: " << areaa << endl;
    }
    int sameArea(rectangle r)
    {
        if (areaa == r.areaa)
            return 1;
        else
            return 0;
    }
};
int main()
{
    rectangle r1;
    r1.setLength(2);
    r1.setWidth(3);
    r1.perimeter();
    r1.area();
    r1.show();
    rectangle r2;
    r2.setLength(2);
    r2.setWidth(3);
    r2.perimeter();
    r2.area();
    r2.show();
    if (r1.sameArea(r2) == 1)
        cout << "Have same area";
    else
        cout << "Not Same Area";
}