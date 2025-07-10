#include <stdio.h>

void fun(int *sum)
{
    *sum = *sum + 40;
}

int main()
{
    int sum = 10;
    printf("sum = %d\n", sum);

    fun(&sum);
    printf("sum = %d", sum);
    return 0;
}