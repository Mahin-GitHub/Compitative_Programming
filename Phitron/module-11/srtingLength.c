#include <stdio.h>
#include <string.h>
int main()
{

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%c", &s[i]);
    // }
    char s[1001];
    scanf("%s", &s);
    char len = strlen(s);
    printf("%d", len);

    // int count = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    return 0;
}