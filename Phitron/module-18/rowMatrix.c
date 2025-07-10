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

    if (m==1)
    {
        printf("This is Row Matrix\n");
    }
    else{
        printf("This is Not Row Matrix\n");
    }
    
    
}