#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int result = arr[i] + arr[j] + j - i;
                // printf("%d+%d+%d-%d=%d\n", arr[i], arr[j], j, i, result);

                if (min > result)
                {
                    min = result;
                }
            }
        }

        printf("%d\n", min);
    }

    return 0;
}