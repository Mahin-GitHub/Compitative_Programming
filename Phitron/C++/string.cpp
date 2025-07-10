#include <iostream>
using namespace std;

int main()
{
    char s[100];

    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << s << endl;
    cout << a;
    return 0;
}