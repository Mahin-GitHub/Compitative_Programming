#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int firstDigit = x / 10;
    int secondDigit = x % 10;

      if (secondDigit == 0 || firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}