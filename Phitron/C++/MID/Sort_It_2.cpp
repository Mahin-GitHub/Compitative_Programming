#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int n;
    cin >> n;

    int *array = sort_it(n);
    sort(array, array + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}