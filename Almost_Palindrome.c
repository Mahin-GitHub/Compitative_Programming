#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[1001];
        int isPalindrome = 0;
        scanf("%s", &s);

        int length = strlen(s);
        for (int i = 0, j = length - 1; i < length, j >= 0; i++, j--)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[j] >= 'a' && s[j] <= 'z'))
            {
                if (s[i] != s[j])
                {
                    isPalindrome++;
                }
                
            }
        }
        printf("%d\n", isPalindrome);
    }

    return 0;
}