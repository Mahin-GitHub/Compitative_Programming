#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        int sum = 0;
        bool result = false;
        for (int a = 0; a < n; a++)
        {
            cin >> arr[a];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    sum = arr[i] + arr[j] + arr[k];
                    if (sum == s)
                    {
                        result = true;
                    }
                    // else
                    // {
                    //     result = false;
                    // }
                }
            }
        }

        if (result == true)
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