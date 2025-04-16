#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int T;
        scanf("%d", &T);

        do
        {
            printf("%d ", T % 10);
            T /= 10;
        } while (T != 0);

        printf("\n");
    }

    return 0;
}