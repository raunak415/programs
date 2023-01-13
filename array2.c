//wap to read marks of 5 students calculate sum and average using arrays
#include<stdio.h>
int main(){
    int i, a[5];
    float sum=0,avg;
    printf("enter the the number:");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);//reading
    }
    for(i=0;i<5;i++){
    printf("\nnumber %d:%d",i,a[i]);
        sum=sum+a[i];
    }
    printf("\nsum :%f",sum);
    avg=sum/5;
    printf("\navg: %f",avg);
    return 0;
}
