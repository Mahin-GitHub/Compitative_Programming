#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if (C >= 'a' && C <= 'z')

    {
        if (C == 'z')
        {
            printf("a");
        }
        else
        {

            printf("%c", C + 1);
        }
    }

    return 0;
}