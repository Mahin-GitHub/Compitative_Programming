#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    if (n == 1)
    {
        printf("Column Matrix");
    }
    else
    {
        printf("Not Coumn Matrix");
    }
    
    
    
    return 0;
}