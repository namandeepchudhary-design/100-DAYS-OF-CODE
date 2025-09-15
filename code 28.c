//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
   int num1,sum,i;
   printf("ENTER NUMBER");
   scanf("%d",&num1);
   sum=0;
   for(i=0; i<num1 ; i++)
   {
    sum = sum + (2*i+1);
   }
    printf("sum of first n odd numbers is=%d",sum);
    return 0;
}