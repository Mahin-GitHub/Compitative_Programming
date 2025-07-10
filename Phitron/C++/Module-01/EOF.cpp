#include <iostream>
using namespace std;

int main()
{
    char grade = 'c';

    switch (grade)
    {
    case 'A':
        cout << "Excelent!" << endl;
        break;
    case 'B':
        cout << "B grade" << endl;
        break;

    default:
        cout << "Fail";
    }
    return 0;
}