#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    double gpa;
    Student(char *n, int r, double g)
    {
        strcpy(name, n);
        id = r;
        gpa = g;
    }
};

int main()
{
    Student a("Mahin", 24, 2.56);

    cout << a.name << " " << a.id << " " << a.gpa << endl;
    return 0;
}
