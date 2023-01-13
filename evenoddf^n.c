#include<stdio.h>
int oddeven(int n);
int main(){
    int n,m;
    printf("enter the value of n:");
    scanf("%d",&n);
m=oddeven(n);
}
int oddeven(int n){
    if(n%2==0){
        printf("evenis %d",n);
    }
    else{
        printf("odd");
    }
}