#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int countDiv2 = 0;
    int countDiv3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countDiv2++;
        }
        else if (arr[i] % 3 == 0)
        {
            countDiv3++;
        }
    }
    printf("%d %d\n", countDiv2, countDiv3);

    return 0;
}