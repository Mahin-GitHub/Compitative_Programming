#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // printing lines

    {
        for (int s = 1; s <= space; s++) // printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) // printing star
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }

    return 0;
}