#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primaryDiagonal += arr[i][j];
            }
            if (i + j == n - 1)
            {
                secondaryDiagonal += arr[i][j];
            }
        }
    }

    int result = abs(primaryDiagonal - secondaryDiagonal);
    printf("%d\n", result);
}