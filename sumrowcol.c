#include<stdio.h>
int main(){
    int a[100][100],i,j,row,col,sr,sc;
    printf("enter row & col:");
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++){  
    for(j=1;j<=col;j++){ 
        printf("print matrix a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
}
    }
    printf("print matrix:\n");
    for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
 printf("%d\t",a[i][j]);
    }
    printf("\n");
    } 
    for(i=1;i<=row;i++){
        sr=0,sc=0;
        for(j=1;j<=col;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sr=%d\nsc=%d\n",sr,sc);
    }
    return 0;
    }
