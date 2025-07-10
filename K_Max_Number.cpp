#include <bits/stdc++.h>
using namespace std;

int maxNumber(int n, int arr[], int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    int maxValue = maxNumber(n, arr, i + 1);
    if (arr[i] >= maxValue)
    {
        return arr[i];
    }
    else
    {
        return maxValue;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = maxNumber(n, arr, 0);
    cout << result << endl;
    return 0;
}