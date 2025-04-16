#include <stdio.h>
int main()
{
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    int sum = A + B;
    int sub = A - B;
    long long int mul = A * B;
    int div = A / B;

    if (S == '+')
    {
        printf("%d\n", sum);
    }
    else if (S == '-')
    {
        printf("%d\n", sub);
    }
    else if (S == '*')
    {
        printf("%lld\n", mul);
    }
    else if (S == '/')
    {
        printf("%d\n", div);
    }

    return 0;
}