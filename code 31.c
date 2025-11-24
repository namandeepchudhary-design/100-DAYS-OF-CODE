//Write a program to check if a number is an Armstrong number.
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
        reversed = reversed  + (digit*digit*digit);
        a /= 10;
    }
    if(num1==reversed)
        printf("NUMBER IS ARMSTRONG");
    else
        printf("NOT A ARMSTRONG  NUMBER");
    return 0;
}