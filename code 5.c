//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float temp;
    printf("enter temperature\n");
    scanf("%f",&temp);
    printf("TEMPERATURE IN F=%f \n",9/5*(temp+32));
    return 0;
}