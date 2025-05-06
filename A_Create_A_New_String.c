#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s\n%s", &s, &t);
    int lengthS = strlen(s);
    int lenghtT = strlen(t);
    printf("%d %d\n", lengthS, lenghtT);
    printf("%s %s\n", s, t);

    return 0;
}