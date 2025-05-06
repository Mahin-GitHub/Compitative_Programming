#include <stdio.h>
int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int copy[m + n];

    for (int i = 0; i < m; i++)
    {
        copy[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        copy[i + m] = b[i];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", copy[i]);
    }

    return 0;
}