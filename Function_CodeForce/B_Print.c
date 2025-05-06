#include <stdio.h>
void number(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    number(n);
    return 0;
}
