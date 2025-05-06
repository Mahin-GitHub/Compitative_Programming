#include <stdio.h>
#include <string.h>
int main()

{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int lenA= strlen(a);

    strcat(a,b);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i + lenA] = b[i];
    // }
    printf("%s", a);

    return 0;
}