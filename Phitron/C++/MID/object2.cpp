#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    double gpa;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.id >> a.gpa;

    cin.ignore();
    // getchar();

    cin.getline(b.name, 100);
    cin >> b.id >> b.gpa;

    cout << a.id << " " << a.name << " " << a.gpa << endl;
    cout << b.id << " " << b.name << " " << b.gpa << endl;
    return 0;
}