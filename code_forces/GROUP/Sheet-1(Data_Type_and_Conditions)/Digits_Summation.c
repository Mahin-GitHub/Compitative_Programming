#include <stdio.h>
int main()
{
    long long int N, M, lastDigitN, lastDigitM, sum;
    scanf("%lld %lld", &N, &M);

    lastDigitN = N % 10;
    lastDigitM = M % 10;
    sum = lastDigitN + lastDigitM;

    printf("%lld\n", sum);
    return 0;
}