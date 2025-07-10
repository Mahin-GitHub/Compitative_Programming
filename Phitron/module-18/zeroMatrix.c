#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    int element = m * n;
    int zero = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if (zero == element)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }

    return 0;
}