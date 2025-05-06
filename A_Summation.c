#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%lld", llabs(sum));

    return 0;
}