#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    bool isTrue = true;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isTrue = false;
            break;
        }
    }

    if (isTrue == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}