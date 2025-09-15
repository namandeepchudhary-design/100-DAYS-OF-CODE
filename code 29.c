//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
   int num1,product,i;
   printf("ENTER NUMBER");
   scanf("%d",&num1);
   product=1;
   for(i=1; i<=num1 ; i++)
   {
    product = product * (2*i);
   }
    printf("sum of first n even numbers is=%d",product);
    return 0;
}