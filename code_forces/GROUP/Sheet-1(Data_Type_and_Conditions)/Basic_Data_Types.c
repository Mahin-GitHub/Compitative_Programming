#include <stdio.h>
int main()
{
    int i;
    long long int li;
    char ch;
    float fl;
    double dbl;

    scanf("%d %lld  %c %f %lf",&i,&li,&ch,&fl,&dbl);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",i,li,ch,fl,dbl); 
    return 0;
}