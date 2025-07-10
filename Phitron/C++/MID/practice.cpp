#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char name[100];
    double gpa;
};

int main()
{
    Student mahin;
    mahin.roll = 24;
    mahin.gpa = 2.823;
    char tempName[100] = "Mahin";
    strcpy(mahin.name, tempName);

    cout << mahin.roll << " " << mahin.name << " " << mahin.gpa << endl;
    return 0;
}