#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int *p = &x;
    printf("%d\n", x);
    printf("%p\n", &x);

    *p = 20;
    printf("%d", x);
    return 0;
}