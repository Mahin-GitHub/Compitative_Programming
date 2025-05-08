#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int stringLen = strlen(s);
    int palindrome = 1;

    for (int i = 0; i < stringLen; i++)
    {
        if (s[i] != s[stringLen - i - 1])
        {

            palindrome = 0;
        }
    }

    if (palindrome == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int palindrome = is_palindrome(s);

    if (palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}