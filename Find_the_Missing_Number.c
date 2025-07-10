#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int m, a, b, c;
    // int a, b, c;

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int multiple3 = a * b * c;
        long long int difference = m % multiple3;
        long long int result = m / multiple3;

        if (difference == 0)
        {
            printf("%lld\n", result);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}