#include<stdio.h>
int main()
{
    int row,col,lower=0,upper=0;
    int arr[100][100];
    printf("enter the row:");
    scanf("%d",&row); 
    printf("enter the col:");
    scanf("%d",&col);
    int i,j,major=0,minor=0;
        for(i=1;i<=row;i++){
    for(j=1;j<=col;j++) {
    printf("enter elements:",i,j);// input value
    scanf("%d",&arr[i][j]);}
    }//sum of major diagonal
   for(i=1;i<=row;i++){// condition
    major += arr[i][i];
   }//sum of minor diagonal
   for(i=1,j=3;i<=row;i++,j--){
   minor +=arr[i][j];
   }//sum of upper & lower triangle
   for(i=2;i<=row;i++){
    for(j=1;j<=i;j++){
        lower += arr[i][j];
        upper +=arr[j][i];
    }
   }
   printf("\ninput matrix\n");
   for(i=1;i<=row;i++){//output value
    for(j=1;j<=col;j++){
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }
    printf("sum of major diagonal elements %d\n sum of minor diagonal %d\n sum of lower triangle %d\n sum of upper triangle %d\n",major,minor,lower,upper);
   return 0;
}