#include<stdio.h>
int main()
{
    int row,col;
    int arr[100][100],srr[100][100];
    printf("enter the row:");
    scanf("%d",&row); 
    printf("enter the col:");
    scanf("%d",&col);
    int i,j,sum[100][100]; 
     printf("enter the elements of frist array:\n",i,j); 
    for(i=1;i<=row;i++)
    for(j=1;j<=col;j++) 
    scanf("%d",&arr[i][j]);
    printf("enter elements of second matrix:\n",i,j);
   for(i=1;i<=row;i++)
 for(j=1;j<=col;j++)
 scanf("%d",&srr[i][j]);
        printf("sum of two matrix:\n");
        for(i=1;i<=row;i++)
     {
    for(j=1;j<=col;j++){
    sum[i][j]=arr[i][j]-srr[i][j];
    printf("%d\t",sum[i][j]);

    }
    printf("\n");
}
     return 0;
}
    



