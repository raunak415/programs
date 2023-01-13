// pointer to pointer 
#include<stdio.h>
int main(){
int a=10;
int *p=&a;
int **q=&p;
int ***r=&q;//can't access ***r=&p bcz it is 2 level
***r=50;
printf("a=%d %d %d %d",a, *p,**q, ***r);// all print value of a
}