#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNumber = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNumber = max(maxNumber, arr[i]);
    }
    cout << maxNumber << endl;

    return 0;
}