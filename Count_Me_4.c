#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    int length = strlen(s);
    int count[10001] = {0};

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count[s[i]]++;
        }
    }

    return 0;
}