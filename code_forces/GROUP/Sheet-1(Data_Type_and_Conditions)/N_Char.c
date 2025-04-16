#include <stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='a' && X<='z'){
        int capital = X-32;
        printf("%c\n",capital);
    }
    else {
        int small = X+32;
        printf("%c\n",small);
    }
    return 0;
}