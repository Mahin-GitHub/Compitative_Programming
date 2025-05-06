#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Number is positive");
    }
    else if (a == 0)
    {
        printf("Numbe is 0");
    }
    else
    {
        printf("Number is negative");
    }
}