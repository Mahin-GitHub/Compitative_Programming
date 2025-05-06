#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    int minIdx = 0, maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIdx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
    }

    arr[maxIdx] = min;
    arr[minIdx] = max;

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}