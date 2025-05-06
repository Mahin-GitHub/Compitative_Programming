#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[2] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0 && arr[i] <= 1)
        {
            count[arr[i]]++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (count[i] != 0)
        {
            printf("%d ", count[i]);
        }
    }

    return 0;
}