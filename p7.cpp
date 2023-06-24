#include <iostream>
using namespace std;
class complex
{
    float real, imaginary;

public:
    void set(float a, float b)
    {
        real = a;
        imaginary = b;
    }
    void disp()
    {
        cout << "Complex Number is " << real << "+" << imaginary << "i";
    }
    complex sum(complex c)
    {
        complex s;
        s.real = real + c.real;
        s.imaginary = imaginary + c.imaginary;
        return (s);
    }
};
int main()
{
    complex c1, c2, c3;
    c1.set(3, 2);
    c1.disp();
    c2.set(3, 4);
    c2.disp();
    c3 = c1.sum(c2);
    c3.disp();
}