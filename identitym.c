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
 printf("print of identity matrix:\n");
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
        if(i==j)
        printf("%d\t",1);
        else
        printf("%d\t",0);
        }
    printf("\n");
    }
return 0;
}