#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    int space2 = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
            
        }
        space--;
        hash += 2;
        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {

        for (int s = 1; s <= space2; s++)
        {
            printf(" ");
        }

        for (int j = 1; j < hash - 3; j++)
        {
            
            if (n%2 == 0)
            {
                if (i % 2 == 0)
                {
                    
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }

            else if (n%2 !=0)
            {
                if (i % 2 != 0)
                {
                    
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
            
            
        

           
        }

        space2++;
        hash -= 2;
        printf("\n");
    }

    return 0;
}