#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 12; i++)
    {
        int multipication = N * i;
        printf("%d * %d = %d\n", N, i, multipication);
    }

    return 0;
}