#include <stdio.h>
int main()
{
    int T;

    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int N;
        long long int fact = 1;
        scanf("%d", &N);
        for (int j = 1; j <= N; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}