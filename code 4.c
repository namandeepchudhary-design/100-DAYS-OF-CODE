//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float radius;
    printf("enter radius\n");
    scanf("%f",&radius);
    printf("CIRCUMFERENCE=%f\n",2*3.14*radius);
    printf("AREA=%f\n",3.14*(radius*radius));
    return 0;
}