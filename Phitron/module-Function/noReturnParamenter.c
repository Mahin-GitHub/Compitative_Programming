#include<stdio.h>


int sum(int x, int y){
    int sum = x+y;
    printf("%d",sum);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}