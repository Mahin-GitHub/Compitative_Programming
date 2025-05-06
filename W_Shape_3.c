#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star1 = 1;
    int star2 = n * 2 - 1;

    int space1 = n - 1;
    int space2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int s = space1; s >= 1; s--)
        {
            printf(" ");
        }

        for (int j = 1; j <= star1; j++)
        {
            printf("*");
        }
        star1 += 2;
        space1--;
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int s = space2; s < n - 1; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        
        space2--;
        star2 -= 2;
        printf("\n");
    }
}