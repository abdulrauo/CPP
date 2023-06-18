#include <iostream>
using namespace std;
inline int addit(int a, int b)
{
    return (a + b);
}
inline int substract(int a, int b)
{
    return (a - b);
}
inline int division(int a, int b)
{
    return (a / b);
}
inline int remainder(int a, int b)
{
    return (a + b);
}
inline int moduls(int a, int b)
{
    return (a % b);
}
int main()
{
    int a, b, result, k;
    cout << "Enter add";
    cout << "Enter two number for addition\n";
    cin >> a >> b;
    result = addit(a, b);
    cout << result;
    cout << "Enter two number for substract\n";
    cin >> a >> b;
    result = substract(a, b);
    cout << result;
    cout << "Enter two number for division\n";
    cin >> a >> b;
    result = division(a, b);
    cout << result;
    cout << "Enter two number for moduls\n";
    cin >> a >> b;
    result = moduls(a, b);
    cout << result;
    return (0);
}