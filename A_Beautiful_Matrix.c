#include <stdio.h>
#include <math.h>
int main()
{
    int arr[6][6];
    int rowPosition, colPosition;
    int rowMiddle = 3, colMiddle = 3;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                rowPosition = i;
                colPosition = j;
            }
        }
    }

    int result = abs(rowPosition - rowMiddle) + abs(colPosition - colMiddle);

    printf("%d\n", result);
    return 0;
}