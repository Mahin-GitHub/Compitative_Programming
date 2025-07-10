#include <bits/stdc++.h>
using namespace std;

int *get_array(int *len)
{
    int n;
    cin >> n;
    int *arr = new int[n];
    *len = n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int length;
    int *array = get_array(&length);
    cout << length << endl;

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }

    delete[] array;
    return 0;
}