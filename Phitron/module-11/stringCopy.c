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

    for (int i = 0; i < n; i++)
    {
        a[m - 1 + i] = b[i];
    }
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
