#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int jadu = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        jadu = 2;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        jadu = 2;
                    }
                }
            }
        }

        if (jadu == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}