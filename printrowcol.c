#include<stdio.h>
int main(){
    int row,col,a[100][100],i,j;
    printf("enter row:");
    scanf("%d",&row);
     printf("enter col:");
    scanf("%d",&col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("enter elements of matrix:");
            scanf("%d",&a[i][j]);
        }
    }
 printf("print of upper triangle matrix:\n");
 if(row==col){
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
        if(i<j)
        printf("\t%d",a[i][j]);
        else
        printf("\t");
    }
    printf("\n");
        }
    }
    else
    {
        printf("/nmatrix is not square");
    }
    return 0;
 }