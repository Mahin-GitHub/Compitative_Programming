#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int max = 0;
    for (int i = 1; i <= N; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d\n",max);

    return 0;
}