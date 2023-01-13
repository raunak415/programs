//reverse an array using pointer 
#include<stdio.h>
int main(){
int n,a[100],i;
int *p=a;
p=&a[0];
printf("enter the value:");
scanf("%d",&n);
printf("value of array:");
for(i=0;i<=n;i++){
scanf("%d",&a[i]);
}
printf("reverse array:");
for(i=n;i>=0;i--){
    printf("%d\n",*(p+i));
}
return 0;
}