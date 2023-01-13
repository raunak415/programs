#include<stdio.h>
int maxmin(int n,int m);
int main(){
int m,n;
    printf("enter m&n:");
    scanf("%d %d",&m,&n); 
    if(m>n){
        printf("MAXIMA");
    }
    else{
        printf("MINIMA");
    }
    return 0;
}
