#include <iostream>
using namespace std;
void deleteelement(int a[], int b[], int size)
{
    int k, n;
    cout << "Enter the element you want to delete";
    cin >> k;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != k)
        {
            b[j] = a[i];
            j++;
        }
    }
    cout << " New Array is\t";
    for (int i = 0; i < j; i++)
    {
        cout << b[i] << "\t";
    }
    cout << "Do you want to continue: \n";
    cin >> n;
    if (n == 1)
    {
        deleteelement(b, a, j);
    }
    else
        exit(0);
}

int main()
{
    int size, i;
    cout << "Enter the size of array";
    cin >> size;
    int a[size], b[size];

    cout << "Enter the elements of the array: \n";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    deleteelement(a, b, size);
}