#include<stdio.h>
int natural(int i,int n);
int main(){
    int n,i;
printf("enter number:");
scanf("%d",&n);
int print=natural(i,n);
printf("%d\n",print);
return 0;
}
int natural(int i,int n){
   for(i=1;i<n;i++){
        printf("%d\n",i);
       int print=natural(i,n);
    }
}
 return i;

