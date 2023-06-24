#include <iostream>
using namespace std;
class number
{
    int num;

public:
    void set(int n)
    {
        num = n;
    }
    void disp()
    {
        cout << "Number is " << num << endl;
    }
    void reverse()
    {
        int rem, rev = 0;
        while (num != 0)
        {
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        cout << "Reverse = " << rev;
    }
};
int main()
{
    number r;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    r.set(n);
    r.disp();
    r.reverse();
}