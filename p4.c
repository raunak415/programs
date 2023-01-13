// addtion of two no. using pointer
#include<stdio.h>
    int main(){
        int a,b,sum=0,m;
        int *p1;
        int *p2;
        p1=&a;
       p2=&b;
       // sum=*p1 + *p2;
        printf("value a & b:");
        scanf("%d %d",&a,&b); 
        sum=*p1 + *p2;
        m=*p1 * *p2;
printf("sum of two no.%d & %d is %d\n multiple %d\n",*p1,*p2,sum,m);
//return 0;
    }
