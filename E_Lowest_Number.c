#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int position;
    int index;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= arr[0])
        {
            position = arr[i];
            index = i + 1;
        }
       
        }

    printf("%d %d\n", position, index);
    return 0;
}