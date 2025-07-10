#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    int evenPositionNumber = 0;
    int oddPositionNumber = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (i % 2 != 0)
        {
            int evenNumber = s[i] - '0';

            evenPositionNumber += evenNumber;
        }
        else
        {
            int oddNumber = s[i] - '0';
            oddPositionNumber += oddNumber;
        }
    }

    int difference = oddPositionNumber - evenPositionNumber;

 

    if (difference % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}