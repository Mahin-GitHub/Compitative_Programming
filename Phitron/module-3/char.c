#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z')
    {
        int ans = X - 32;
        printf("%c\n", ans);
    }
    else
    {
        int ans = X + 32;
        printf("%c\n", ans);
    }

    return 0;
}