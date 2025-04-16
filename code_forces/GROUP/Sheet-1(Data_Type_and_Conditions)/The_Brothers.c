#include <stdio.h>
#include <string.h>
int main()
{
    char F1[1000], S1[1000], F2[1000], S2[1000];
    scanf("%s %s\n%s %s", &F1, &S1, &F2, &S2);

  
    if (strcasecmp(S1, S2) == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}