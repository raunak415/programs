#include<stdio.h>
int findcube(int n){
  return n*n*n;
}
int main(){
    int n,cube;
        printf("enter the number:");
    scanf("%d",&n);
    cube=findcube(n);
    printf("cube of number %d",cube);
    return 0;
}

