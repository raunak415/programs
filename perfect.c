#include<stdio.h>
int perfect(int i,int n);
int main(){
    int i,n,sum=0;
    printf("enter upper:");
scanf("%d",&n);
if(perfect(i,n)){
printf("perfect");
}
else{
printf("not perfect");
}
return 0;
}
int sum=0;
int perfect(int i,int n){
    for(i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
    }
    return(sum==n);
}