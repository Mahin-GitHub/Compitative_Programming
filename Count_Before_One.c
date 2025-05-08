#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int beforeNumberCount = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
        {
            break;
        }
        else{
            beforeNumberCount++;

        }
    }

    return beforeNumberCount;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int countNumber = count_before_one(arr, n);
    printf("%d\n", countNumber);
    return 0;
}