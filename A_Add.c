#include <stdio.h>

int sum(int a, int b)
{
    int sum = a+b;
    return sum;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int result = sum(x,y);
    printf("%d\n",result);
}