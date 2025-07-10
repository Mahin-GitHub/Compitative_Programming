#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, m;
    cin >> l >> r >> m;

    long long int multiple = 1;

    for (int i = l; i <= r; i++)
    {
        multiple = multiple * i;
    }
    int result = multiple % m;
    cout << result << endl;

    return 0;
}