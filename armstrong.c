#include<stdio.h>
int armstrong(int m){
    int rem=0,sum=0,pow=0;
    int n=m;
     while(n!=0){
        rem=n%10;
        pow=rem*rem*rem;
        sum=sum+pow;
        m=m/10;
     }
if(sum=m)
   return 0;
else
   return 1;
}
int main(){
    int m,n;
printf("enter the value:");
    scanf("%d",&n);
if(armstrong(m)==0){
    printf("armstrong");
}
else{
    printf("not armstrong");
}
return 0;
}