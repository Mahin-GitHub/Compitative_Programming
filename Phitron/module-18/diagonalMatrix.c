#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    bool is_diagonal = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        is_diagonal = false;
                    }
                }
            }
        }

        if (is_diagonal == true)
        {
            printf("Primary Diagonal matrix\n");
        }
        else
        {
            printf("Not a diagonal matrix");
        }
    }
    else
    {
        printf("Not Diagonal Matrix");
    }

    return 0;
}