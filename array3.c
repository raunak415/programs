//wap to read two arrays of size 5 and store sum of these arrays into third away
#include<stdio.h>
int main(){
int a[5],b[5],c[5],i;
printf("enter the array elements:");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\n enter second array element:");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    for(i=0;i<5;i++){
        c[i]=a[i]+b[i];
        printf("\n third array element %d :%d",i,c[i]);
    }
return 0;
}