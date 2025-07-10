#include <stdio.h>

void even_arr(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    even_arr(arr, n, i + 1);
    if (i%2 == 0)
    {
        printf("%d ", arr[i]); 
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    even_arr(arr, n, 0);

    return 0;
}