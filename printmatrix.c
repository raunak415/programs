#include<stdio.h>
int main()
{
    int row,col;
    int arr[100][100];
    printf("enter the row:");
    scanf("%d",&row); 
    printf("enter the col:");
    scanf("%d",&col);
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    { 
        printf("enter the elements of array [%d][%d]:",i,j);    
    scanf("%d",&arr[i][j]);
    }
    }
     for(i=1;i<=row;i++)
     {
    for(j=1;j<=col;j++)
    {
    printf("%d\t",arr[i][j]);
    }
    printf("\n");
     }
    return 0;
}

    



