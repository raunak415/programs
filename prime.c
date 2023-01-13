#include<stdio.h>
int prime(int n,int i,int j);
int main(){
    int n,i,j;
    printf("enter the value of n:");
    scanf("%d",&n);
int m=prime(n,i,j);
printf("prime no. %d\n",i);
return 0;
}
int prime(int n,int i,int j){
    for(i=1;i<=n;i++){
       for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        int prime(int n,int i,int j){
        }
        return i;
    }
}
