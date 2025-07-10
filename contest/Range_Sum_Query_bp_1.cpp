#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}