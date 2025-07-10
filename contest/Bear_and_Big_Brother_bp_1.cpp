#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limark, bobs;
    cin >> limark >> bobs;
    int limark3 = limark;
    int bobs2 = bobs;
    int year = 0;

    while (limark3 <= bobs2)
    {

        limark3 = limark3 * 3;
        bobs2 = bobs2 * 2;
        year++;
    }

    cout << year << endl;
    return 0;
}