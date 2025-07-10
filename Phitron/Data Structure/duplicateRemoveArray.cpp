#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result[1000];
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < idx; i++)
        {
            if (result[j] == arr[i])
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate == true)
        {
            result[idx] = arr[i];
            idx++;
        }
    }

    return 0;
}