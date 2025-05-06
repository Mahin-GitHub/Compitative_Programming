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
    int position;
    scanf("%d", &position);

    if (position >= 1 && position <= n)
    {
        if (arr[position - 1] == 1)
        {
            arr[position - 1] = 0;
        }
        else if (arr[position - 1] == 0)
        {
            arr[position - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}