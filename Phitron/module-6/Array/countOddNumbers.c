#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int oddNumberOfArr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            oddNumberOfArr++;
        }
    }
    printf("%d",oddNumberOfArr);
    return 0;
}