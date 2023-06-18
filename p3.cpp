#include <iostream>
using namespace std;

int factoriall(int i)
{
    long int factorial;
    if (i == 0)

        return 1;
    else
    {
        factorial = i * factoriall(i - 1);
        cout << factorial << endl;
    }
    return (factorial);
}

int main()
{
    int sum = 0, i, n;
    cout << "Enter the number: \n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += factoriall(i);
    }
    cout << "Sum is " << sum;
    return 0;
}
