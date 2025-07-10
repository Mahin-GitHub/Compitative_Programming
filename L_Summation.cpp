#include <bits/stdc++.h>
using namespace std;

long long int sum_of_arry(int n, int arr[], int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    long long int sum = sum_of_arry(n, arr, i + 1);
    return sum + arr[i];
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

    long long int result = sum_of_arry(n, arr, 0);
    cout << result << endl;

    return 0;
}