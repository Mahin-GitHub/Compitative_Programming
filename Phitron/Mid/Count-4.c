#include <stdio.h>
int main()
{
    char s[10001];
    scanf("%s", &s);

    int cnt[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int value = s[i] - 'a';
            cnt[value]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {

            int alphabet = i + 'a';
            printf("%c - %d\n", alphabet, cnt[i]);
        }
    }

    return 0;
}