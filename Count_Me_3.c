#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s[i]);
    }

    int lenght = strlen(s);
    int capitalAlphabet = 0;
    int smallAlphabet = 0;
    int digits = 0;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < lenght; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitalAlphabet++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallAlphabet++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capitalAlphabet, smallAlphabet, digits);
    }
}