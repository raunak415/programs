#include<stdio.h>
float dia(float r);
float cir(float r);
float area(float r);
int main(){
    float r,d,c,a;
    printf("enter the radius:");
    scanf("%f",&r);
    d=dia(r); 
    c=cir(r);
    a=area(r);
     printf(" dia %f\n",d); 
     printf("cir %f\n",c);
    printf("area %f\n",a);
return 0;
}
float dia(float r){
    return(2*r);
}
float cir(float r){
return(2*r*3.14);
}
float area(float r){
    return(r*3.14*r);
}

