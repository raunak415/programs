#include<stdio.h>
int main(){
    int r1,r2,c1,c2,a[100][100],b[100][100];
    printf("enter the value of r1 & c1:");
    scanf("%d %d",&r1,&c1);
     printf("enter the value of r2 & c2:");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2){
    printf("matrix not multiple");
  }
  else
  {
  int i,j,c[100][100],k; 
  for(i=1;i<=r1;i++){
    for(j=1;j<=c1;j++){
  printf("print matrix a[%d][%d]:",i,j);
  scanf("%d",&a[i][j]);
  }
}
 /*for(i=1;i<=r1;i++){
     for(j=1;j<=c1;j++){
   printf("%d\t",a[i][j]);
  }
  printf("\n");
} */
for(i=1;i<=r2;i++){
    for(j=1;j<=c2;j++){
  printf("print matrix b[%d][%d]:",i,j);
  scanf("%d",&b[i][j]);
  }
}
/* for(i=1;i<=r2;i++){
     for(j=1;j<=c2;j++){
        printf("%d\t",b[i][j]);
  }
  printf("\n");
}*/
c[i][j]=0;
for(i=1;i<=r1;i++){
  for(j=1;j<=c2;j++){
    for(k=1;k<=c1;k++){
    c[i][j] = c[i][j]+a[i][k]*b[k][j];
    }
  }
}
printf("print multiplication of two matrix:\n");
for(i=1;i<=r1;i++){
  for(j=1;j<=c2;j++){
    printf("%d\t",c[i][j]);
  }
  printf("\n");
}
}
return 0;
}
