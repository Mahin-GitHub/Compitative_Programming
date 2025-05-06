#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", &s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int capital = s[i] - 32;
            s[i] = capital;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int lower = s[i] + 32;
            s[i] = lower;
        }
        else if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    printf("%s", s);
    return 0;
}