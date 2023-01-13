// input and print array elements using pointer
#include<stdio.h>
int main(){
    int i,a[5];
   int *p=a;
   p = &a[0];
   printf("enter 5 elements:");
   for(i=0;i<5;i++){
   scanf("%d",&a[i]);
   }
    printf("\narray:");
    for(i=0;i<5;i++){
        printf("%d\t",*(p+i));
    }
    return 0;
   }