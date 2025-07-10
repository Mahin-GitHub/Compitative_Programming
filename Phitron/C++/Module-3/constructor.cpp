#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim;
    rahim.roll = 29;
    rahim.cls = 9;
    rahim.gpa = 5.00;

    Student karim;
    karim.roll = 97;
    karim.cls = 8;
    karim.gpa = 5.55;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}