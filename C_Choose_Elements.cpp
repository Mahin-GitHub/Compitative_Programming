#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        // if (arr[i] < 0)
        // {
        //     break;
        // }
        sum = sum + arr[i];
    }

    cout << sum << endl;

    return 0;
}