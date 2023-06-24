#include <iostream>
using namespace std;
class complex
{
    float img, real;

public:
    complex() {}
    complex(float x, float y)
    {
        img = x;
        real = y;
    }
    void display()
    {
        cout << img << "+ i" << real << endl;
    }
    complex operator+(complex c2)
    {
        complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return (c3);
    }
    complex operator*(complex c2)
    {
        complex c3;
        c3.real = real * c2.real;
        c3.img = img * c2.img;
        return (c3);
    }
};
int main()
{
    complex c(2, 3), c2(5, 4);
    c.display();
    c2.display();
    complex c3 = c + c2;
    c3.display();
    c3 = c * c2;
    c3.display();
    return (0);
}