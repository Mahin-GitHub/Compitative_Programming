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

    int minElement = INT_MAX;
    int elementCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= minElement)
        {
            minElement = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minElement)
        {
            elementCount++;
        }
    }

    if (elementCount % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}