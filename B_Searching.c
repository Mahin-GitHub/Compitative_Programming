#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int indexValue;
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (indexValue == arr[i])
        {
            printf("%d\n", i);
        }
    }
    scanf("%d", &indexValue);

    for (int i = 0; i < N; i++)
    {

        if (indexValue == arr[i])
        {
            printf("%d\n", i);
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        printf("-1\n");
    }

    return 0;
}