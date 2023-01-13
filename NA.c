#include<stdio.h>
void sum(void);
void main(int)
{
    sum();
}
void sum()
{
    int a=2,b=3,sum=0;
    sum=a+b;
    printf("sum %d",sum);
}