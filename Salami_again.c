#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = max - arr[i];
        printf("%d ", arr[i]);
    }

    return 0;
}