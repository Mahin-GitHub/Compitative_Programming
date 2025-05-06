#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    char s[1001];
    scanf("%s", &s);
    int length = strlen(s);
    bool palindrom = true;
    for (int i = 0, j = length - 1; i < length, j >= 0; i++, j--)
    {
        if (i < j)
        {
            if (s[i] != s[j])
            {
                palindrom = false;
                break;
                
            }
           

          
        }
    }

    if (palindrom == true)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

    return 0;
}