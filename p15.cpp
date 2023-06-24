#include <iostream>
using namespace std;
class vector
{
    float values[100];
    int size, x, y;

public:
    vector() {}
    vector(int s)
    {
        size = s;
    }
    void CreateVector()
    {
        cout << "Enter the values of the vector";
        for (int i = 0; i < size; i++)
        {
            cin >> values[i];
        }
    }
    void displayvector()
    {
        cout << "The vector values are: \n (";
        for (int i = 0; i < size; i++)
        {
            cout << values[i];
            if (i != size - 1)
            {
                cout << ",";
            }
        }
        cout << ")";
    }
    vector operator*(float scalar)
    {
        vector s(size);
        for (int i = 0; i < size; i++)
        {
            s.values[i] = values[i] * scalar;
        }

        return (s);
    }
    friend vector operator+(vector v1, vector v2);
};
vector operator+(vector v1, vector v2)
{
    vector v3(v1.size);
    for (int i = 0; i < v1.size; i++)
    {
        v3.values[i] = v1.values[i] + v2.values[i];
    }
    return (v3);
}
int main()
{
    vector v(5);
    v.CreateVector();
    v.displayvector();
    vector v2(6);
    v2.CreateVector();
    v2.displayvector();
    vector v4 = v * 5;
    v4.displayvector();
    vector v3;
    v3 = v + v2;
    v3.displayvector();
    return 0;
}