//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
   int num1,num2;

    printf("ENTER NUMBER 1\n");
    scanf("%d",&num1);
    printf("ENTER NUMBER 2\n");
    scanf("%d",&num2);
    printf("SUM=%d\n",num1 + num2);
    printf("DIFFERENCE=%d\n",num1 - num2);
    printf("PRODUCT=%d\n",num1 * num2);
    printf("QUOTIIENT=%d\n",num1 / num2);

    return 0;
}