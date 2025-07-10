#include <stdio.h>

long long int sum_number(int n, long long int arr[], int idx)
{
    if (idx == n)
    {
        return 0;
    }

    long long int sum = sum_number(n, arr, idx + 1);
    return arr[idx] + sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int result = sum_number(n, arr, 0);
    printf("%lld\n", result);
    return 0;
}