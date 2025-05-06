#include <stdio.h>

char s[10000001];
int main()
{
    scanf("%s", &s);

    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}