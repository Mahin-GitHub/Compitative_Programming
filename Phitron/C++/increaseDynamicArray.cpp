#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    // cin >> a[5] >> a[6];
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}