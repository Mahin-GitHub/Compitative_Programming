#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int positiveSum = 0;
    int negativeSum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
        {
            positiveSum += arr[i];
        }
        if (arr[i] < 0)
        {
            negativeSum += arr[i];
        }
    }

    printf("%d ", positiveSum);
    printf("%d ", negativeSum);
    return 0;
}