#include<stdio.h>
int main(){
    int row,col,a[100][100],i,j,s[100][100];
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
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("matrix is:\n");
        }
    }
       if(s[i][j]=a[j][i]) {
       printf("symmetric matrix:");}
       else{
        printf("not symmetric matrix:");}
    return 0;
}

