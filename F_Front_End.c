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

    int firstIndex = 0;
    int lastIndex = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (firstIndex <= lastIndex)
        {
            if (firstIndex == lastIndex)
            {
                printf("%d", arr[firstIndex]);
            }
            else
            {
                printf("%d %d ", arr[firstIndex], arr[lastIndex]);
            }
        }

        firstIndex += 1;
        lastIndex -= 1;
    }

    

   

    return 0;
}