//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
   int num1,a=0,b,reversed;
   printf("ENTER NUMBER 1\n");
   scanf("%d",&num1);
   if ((num1==1)||(num1==0))
    printf("BINARY REPRESENTATION IS=%d",num1);
   else
    while(num1!=0)
    {
        b=num1%2;
        a=a*10+b;
        num1=num1/2;
    }
    reversed=0;
    while (a != 0) 
    {
        int digit = a % 10;
        reversed = reversed * 10 + digit;
        a /= 10;
    }
    printf("BINARY REPRESENTATION IS=%d",reversed);
    return 0;
}