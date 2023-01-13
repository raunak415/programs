#include<stdio.h>
int lcm(int m,int n,int max);
int main(){
    int m,n,max;
    printf("enter m&n:");
    scanf("%d %d",&m,&n);
    if(m>n){
max=m;
    }
    else{
        max=n;
    }
    int find=lcm(m,n,max);
    printf("the lcm of given two no. %d & %d is %d",m,n,find);
    return 0;
}
int lcm(int n,int m,int max){
while(1){
if(max % m==0 && max % n==0){
return max;
break;}
else{
    ++max;
}
}
}

