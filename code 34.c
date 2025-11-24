//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int num1,reversed=0,a;
    printf("ENTER NUMBER \n");
    scanf("%d",&a);
    num1=a;
    while (a != 0) 
    {
        int digit = a % 10;
        reversed = reversed  + digit;
        a /= 10;
    }
    printf("SUM OF DIGITS=%d",reversed);
    return 0;
}