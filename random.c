#include<stdio.h>
int main()
{
    int age, height,weight;
    printf("enter the age");
    scanf("%d",&age);
    if(age>18)
    {
        float h,w;
        printf("enter the height");
        scanf("%f",&h);
        printf("enter the weight");
        scanf("%f",&w);
        if((height> 5.5) &&(w>65))
        {
            printf("you are eligible for NCC");
        }
        else
        {
            printf("you are not eligible for NCC");
        }
    }
}