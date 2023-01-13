#include<stdio.h>
int main()
{
    int row,col;
    int arr[100][100];
    printf("enter the row:");
    scanf("%d",&row); 
    printf("enter the col:");
    scanf("%d",&col);
    int i,j, point=0,diag=arr[0][0]; 
    for(i=1;i<=row;i++){
    for(j=1;j<=col;j++) {
    printf("print scalar matrix [%d][%d]\n",i,j);
    scanf("%d",&arr[i][j]);}
    }
   for(i=1;i<=row;i++){
 for(j=1;j<=col;j++)  {
 printf("%d\t",arr[i][j]);
 }
 { printf("\n");
 }
  diag=arr[0][0];
 if(i==j && arr[i][j]!=diag){
 point=1;
 break;
 }
else if(i!=j && arr[i][j]!=0)
 {
    point =1;
    break; 
 
 }
   }
   if(point==0)
      printf("print a scalar");
      else
printf("not a matrix");
    }
     return 0;
}
    



