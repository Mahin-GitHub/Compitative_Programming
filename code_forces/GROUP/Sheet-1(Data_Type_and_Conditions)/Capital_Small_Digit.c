#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        if (X >= 'a' && X <= 'z')
        {
            printf("ALPHA\n");
            printf("IS SMALL\n");
        }
        else
        {
            printf("ALPHA\n");
            printf("IS CAPITAL\n");
        }
    }

    return 0;
}