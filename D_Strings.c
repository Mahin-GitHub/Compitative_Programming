#include <stdio.h>
#include <string.h>
int main()
{
    char a[22], b[11], c[11];
    scanf("%s %s", &a, &b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);

    strcpy(c, a);

    printf("%s\n", strcat(a, b));

    char temp;
    temp = c[0];
    c[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", c, b);

    return 0;
}