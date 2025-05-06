#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;

    for (int i = 1; i <= n; i++)
    {
        for (int i = star; i >= 1; i--)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }
}