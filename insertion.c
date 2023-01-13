#include<stdio.h>
int main(){
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int i,a[n],ele,pos;
    printf("array elements :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("\narray %d:%d",i,a[i]);
    printf("\nenter ele & pos");
    scanf("%d%d",&ele,&pos);
    for(i=n-1;i>=pos;i--)
   a[i+1]=a[i];
n++;
a[pos]=ele;
for(i=0;i<n;i++)
printf("\nindex %d:%d",i,a[i]);
return 0;
}
