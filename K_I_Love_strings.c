#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[51], t[51];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", &s, &t);
        int lenS = strlen(s);
        int lenT = strlen(t);
        int i = 0, j = 0;
        while (i < lenS && j < lenT)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }
        while (i<lenS)
        {
            printf("%c",s[i]);
            i++;
        }
        
        while (j < lenT)
        {
            printf("%c", t[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}