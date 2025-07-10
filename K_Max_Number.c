#include <stdio.h>

int max_number(int n, int arr[], int idx)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }

    int max_value = max_number(n, arr, idx + 1);
    if (arr[idx] > max_value)
    {
        return arr[idx];
    }
    else
    {
        return max_value;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max_number(n, arr, 0);

    printf("%d\n", result);
    return 0;
}