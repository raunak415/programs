//swap two no. using pointer
#include<stdio.h>
int main(){
    int *p,*q;
    int a,b,c;
    p=&a;
    q=&b;
    printf("enter value a & b:");
    scanf("%d %d",&a,&b);
    printf("before swap value are %d %d",a,b);
    c=*p;
    *p=*q;
    *q=c;
    printf("\nswap value :%d %d",a,b);
return 0;
}