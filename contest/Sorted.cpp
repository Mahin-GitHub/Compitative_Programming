#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> cpy(a);
        sort(cpy.begin(), cpy.end());
        int assending = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != cpy[i])
            {
                assending = 0;
                break;
            }
        }

        if (assending == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}