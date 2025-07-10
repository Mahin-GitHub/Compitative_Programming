#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student a[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id;
            cin >> a[i].name;
            cin >> a[i].section;
            cin >> a[i].marks;
        }

        Student bestStudent = a[0];
        for (int i = 1; i < 3; i++)
        {
            if (a[i].marks > bestStudent.marks)
            {
                bestStudent = a[i];
            }
         
        }

        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.section << " " << bestStudent.marks << endl;
    }

    return 0;
}
