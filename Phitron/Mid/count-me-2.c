#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];

    scanf("%s", &s);

    int length = strlen(s);
    int consonants = 0;
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
            }
            else
            {
                consonants++;
            }
        }

        
    }

    printf("%d\n", consonants);

    return 0;
}