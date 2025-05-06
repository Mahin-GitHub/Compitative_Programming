#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    int cnt[10001] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;

        // if (arr[i] == 0)
        // {
        //     cnt[0]++;
        // }
        // else if (arr[i] == 1)
        // {
        //     cnt[1]++;
        // }
        // else if (arr[i] == 2)
        // {
        //     cnt[2]++;
        // }
        // else if (arr[i] == 3)
        // {
        //     cnt[3]++;
        // }
        // else if (arr[i] == 4)
        // {
        //     cnt[4]++;
        // }
        // else if (arr[i] == 5)
        // {
        //     cnt[5]++;
        // }
    }

    for (int i = 0; i < 10001; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%d -> %d\n", i, cnt[i]);
            /* code */
        }
        
    }

    // printf("%d -> %d\n", 0, cnt[0]);
    // printf("%d -> %d\n", 1, cnt[1]);
    // printf("%d -> %d\n", 2, cnt[2]);
    // printf("%d -> %d\n", 3, cnt[3]);
    // printf("%d -> %d\n", 4, cnt[4]);
    // printf("%d -> %d\n", 5, cnt[5]);

    return 0;
}