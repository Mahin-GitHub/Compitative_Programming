#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int evenNumber = 0;
    int oddNumber = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            evenNumber++;
        }
        else if (arr[i] % 2 != 0)
        {
            oddNumber++;
        }
    }

    printf("%d %d", evenNumber, oddNumber);
}
int main()
{

    odd_even();
    return 0;
}