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
            printf("ALPHA\nIS SMALL\n");
        }
        else
        {
            printf("ALPHA\nIS CAPITAL\n");
        }
    }
}