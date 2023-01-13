// access value,intilize using pointer.
#include<stdio.h>
int main(){
int a=10,b=9;
int *p,*q;
p=&a;
q=&b;
printf("value a :%d\n",a);
printf("value a: %d\n",*p);
printf("address a :%d\n",&a);
printf("address a: %d\n",p);
printf("address p: %d\n",&p);
}
