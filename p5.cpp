#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After changing the value x: " << a << "y: " << b << endl;
}
void swap(float a, float b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After changing the value x: " << a << "y: " << b << endl;
}
void swap(char a, char b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After changing the value x: " << a << "y: " << b << endl;
}
int main()
{
    int a, b;
    float c, d;
    char e, f;
    cout << "Enter two integer value for swapping: \n";
    cin >> a >> b;
    swap(a, b);
    cout << "Enter two float value for swapping: \n";
    cin >> c >> d;
    swap(c, d);
    cout << "Enter two character value for swapping: \n";
    cin >> e >> f;
    swap(e, f);
    return 0;
}