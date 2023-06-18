#include <iostream>
#include <math.h>
using namespace std;
int powerr(double m, int n)
{
    double k = 1;
    int i;
    for (i = 0; i < n; i++)
    {
        k *= m;
    }
    return k;
}
int main()
{
    int powerr(double m, int n = 4);
    double result, m;
    int op;
    cout << "Enter 1 for 2 numbers\n Enter 2 for raising default number \n Enter 3 for exit\n";
    cin >> op;
    switch (op)
    {
    case 1:
        int n;
        cout << "Enter value for m and n: \n";
        cin >> m >> n;
        result = powerr(m, n);
        cout << "Number " << m << "raise to " << n << " is " << result;
        break;
    case 2:
        cout << "Enter default value for n: \n";
        cin >> m;
        result = powerr(m);
        cout << "Number " << m << "raise to 4"
             << " is " << result;
    case 3:
        exit(0);
    default:
        cout << "Try again";
    }
    return 0;
}