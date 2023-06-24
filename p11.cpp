#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float eng, maths, science;
    float total;
    float ctotal()
    {
        return eng + maths + science;
    }

public:
    void takedata();
    void showdata();
};
void student::takedata()
{
    cout << "Enter admission no: \n";
    cin >> admno;
    cout << "Enter student name: \n";
    cin >> sname;
    cout << "Enter marks for english science and maths: \n";
    cin >> eng >> maths >> science;
}
void student::showdata()
{
    cout << "Admission no: " << admno << endl
         << "Student name: " << sname << endl
         << "English: " << eng << endl
         << "Maths:  " << maths << endl
         << "Science: " << science << endl;
}
int main()
{
    student s1;
    s1.takedata();
    s1.showdata();
}