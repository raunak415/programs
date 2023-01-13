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
 printf("print of matrix:\n");//can we skip 14 to 20
     for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
} 
printf("print transpose of matrix:\n");
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
          printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
return 0;
}