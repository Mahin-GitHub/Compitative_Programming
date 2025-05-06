#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = space; s < n - 1; s++)
        {
            printf(" ");
        }

        for (int j = star; j >= 1; j--)
        {
            printf("* ");
        }

        star--;
        space--;
        printf("\n");
    }

    return 0;
}