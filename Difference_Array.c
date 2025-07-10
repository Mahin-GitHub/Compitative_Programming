#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        int b[n];
        int c[n];
        int temp;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            b[j] = a[j];
        }

        for (int i = 0; i < n ; i++)
        {
            for (int j = i + 1; j < n ; j++)
            {
                if (b[i] > b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

       
        

        for (int k = 0; k < n; k++)
        {
            c[k] = abs(a[k] - b[k]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}